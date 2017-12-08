/**
 * 
 */
$(document).ready(function() {
	$("#indexQueryBill").click(function(){
		var waybill = $(this).prev().val();
		var reg = /^([a-zA-Z0-9]|\d{2})\d{7}$/;
		if(!reg.test(waybill)){
			errTips("运单号格式有误");
			return;
		}
		window.location.href = "traceTransByNo.action?transNos="+waybill;
	});
	
	/**网点查询**/
	$("#queryDistrictBtn").click(function(){
		var $typeValue = $("#typeValue");
		if($typeValue.attr("ov") == $typeValue.val()){
			$typeValue.attr("style","border:1px solid #f15a22");
			return;
		}
		$("#districtForm").submit();
	});
	
	var flag = true;
	// 验证码输入框失去焦点 ajax 异步验证
	$("#validateCode_input").blur(function(){
		var validateCode =  $(this).val();
		if(validateCode.length > 0){
			$.get("codeCheck.action?code="+validateCode,function(data,status){
				if(data.success == false){
					$("#codeNotice").text(data.message).show();
					flag = false;
				}else{
					flag = true;
				}
			});
		}
	});
	
	// 验证码输入框失去焦点
	$("#validateCode_input").focus(function(){
		$("#codeNotice").hide();
	});
	
	// 查询货物跟踪信息
	$("#wayBillQuery_btn").click(function(){
		var waybills = $("#waybillVale_input").val();
		waybills = $.trim(waybills);
		var validateCode = $("#validateCode_input").val();
		
		waybills=waybills.replace(/\n/g, '_@').replace(/\r/g, '_#');		
		waybills = waybills.replace(/_#_@/g, '<br/>').replace(/_@/g, '<br/>');

		if(flag == false){
			$("#codeNotice").text("验证码输入有误").show()
			return;
		}
		
		if(waybills == "" || validateCode == ""){
			$("#codeNotice").text("运单号或者验证码不能为空").show()
			return;
		}
		
		var validValue = waybills.replace(new RegExp(/(\<br\/\>)/g),',');
		var validArr = validValue.split(',');
		if(validArr.length>10){
			$("#isOverMaxlength").show();
			return;
		}else{
			$("#isOverMaxlength").hide();
		}
		
		
		for(var i = 0; i < validArr.length; i++) {
			if($.trim(validArr[i])==""){
				$("#codeNotice").text("逗号或者换行直接不能出现空单号").show();
			}else if(!isWaybill(validArr[i])){
				$("#codeNotice").text(validArr[i]+"不是正确的单号").show();
				return;
			} 
		} 
		
		
		// cookie操作
		var w = getCookie('importList');
		var cookieValue;
		if(w == null || w == ''){
			cookieValue = waybills;
		}else{
			cookieValue = waybills + ',' + w;
		}
		cookieValue=cookieValue.replace(new RegExp(/(\<br\/\>)/g),',');
		var arr = cookieValue.split(',');
		// 去重复
		arr.sort();
		var re=[arr[0]];
		for(var i = 1; i < arr.length; i++)
		{
			if( arr[i] !== re[re.length-1])
			{
				if($.trim(arr[i])!=""){
					re.push(arr[i]);
				}
			}
		}
		

		// 过期时间 30天
		setCookie('importList',re.join(','),30);
		window.location.href = "traceTransByNo.action?vercode="+validateCode+"&transNos="+waybills;
		
	});
	
	
	// 清空查询记录
	$("#clearQueryRecord").click(function(){
		$("#importList").text('');
		delCookie('importList');
	});
	
	// 清空查询记录
	$("#send_email_link").click(function(){
		var emailAddress = $("#emails_input").val();
		
		var waybills = $("#waybillVale_input").val();
		if(waybills == null || waybills.length == 0){
			alert("运单号不能为空");
			return;
		}
		
		if(isEmail(emailAddress) == false){
			alert("请输入正确的邮箱地址");
			return;
		}
		
		$.get("sendEmail.action?emailAddress="+emailAddress,function(data,status){
			if(data.success == true){
				alert("已发送，请查收");
			}
		});
	});
	
});

// 更改验证码
function changeCode(){  
	$("#validateCode_img").attr("src","genCheckCode.action?"+ new Date());
} 

function errTips(msg){
	$(".erro").show();
	$(".erro_msg").text(msg)
}

function initval(value){
	if(value==1){
		if($("#waybillVale_input").val()=="请输入单号,最多可同时查询10个运单,多单号间用回车或逗号隔开"){
			$("#waybillVale_input").val("");
		}
	}else{
		if(isEmpty($("#waybillVale_input").val())){
			$("#waybillVale_input").val("请输入单号,最多可同时查询10个运单,多单号间用回车或逗号隔开");
		}
	}
}


function isEmpty(str){
	if($.trim(str) == '' || str == null){
		return true;
	}
	return false;
}

