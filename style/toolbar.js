// Generated by CoffeeScript 1.6.3
(function() {
	var Toolbar;

	var getActive = function() {
		return document.activeElement;
	}
	Toolbar = function(opts) {
		this.opts = opts;
		this.Doms = {};
		this.Curr = null;
		this.init.apply(this, [opts]);
	};
	Toolbar.prototype = {
		init: function(opts) {
			opts = opts || this.opts;
			this.getDoms(opts).bindEvent();
		},

		/*
   * 聚合所有dom抓取
   */
		getDoms: function(opts) {
			opts = opts || this.opts;
			this.Doms.wraper = opts.wraper;
			this.folded = true;
			this.Doms.listBtns = $(opts.wraper + " ul.btns>li");

			return this;
		},
		bindEvent: function(opts) {
			var _this = this;
			opts = opts || this.opts;
			this.Doms.listBtns.bind('mouseover',
			function(event) {
				_this.Curr = $(this).parent().children().filter(".on")[0];

				$(_this.Curr).removeClass("on");
				$(this).addClass("on");
				_this.folded = false;
			});
			$(this.Doms.wraper).bind('mouseout',
			function(e) {
				if ($(getActive()).parents().filter(_this.Doms.wraper).length > 0) {
					return;
				}
				$(document.body).trigger("toolbar-fold");
			});
			$(document).bind("click",
			function(e) {
				if ($(e.target).parents().filter(_this.Doms.wraper).length <= 0) {
					$(document.body).trigger("toolbar-fold");
				}
			});

			$(document.body).bind("toolbar-fold",
			function(e) {
				_this.Doms.listBtns.filter(".on").removeClass("on");
			});               
			return this;
		}
	};
	return window["Toolbar"] = Toolbar;
})();


new Toolbar({
	wraper: ".tdhy_toolbar",
	
});

