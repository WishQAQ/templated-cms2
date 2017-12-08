<?php
$z[0]=Array("global","",220,246);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",296,326);
$z[1][4]['name']="cfg_description";
$z[2]=Array("include","",1176,1215);
$z[2][4]['filename']="header_m.htm";
$z[3]=Array("global","",1424,1450);
$z[3][4]['name']="cfg_webname";
$z[4]=Array("arclist","\r\n            <div class=\"swiper-slide\"><img src=\"[field:picname/]\"></div>\r\n            ",1805,1963);
$z[4][4]['row']="3";
$z[4][4]['titlelen']="50";
$z[4][4]['orderby']="pubdate";
$z[5]=Array("channel","\r\n        <li><a href=\"list.php?tid=[field:id/]\" title=\"[field:typename/]\">[field:typename/]</a></li>\r\n        ",2173,2439);
$z[5][4]['type']="top";
$z[5][4]['row']="8";
$z[5][4]['currentstyle']="<li><a href='list.php?tid=~id~' ~rel~><span>~typename~</span></a> </li>";
$z[6]=Array("sql"," \r\n        [field:content  function='cn_substr(html2text(@me),400)'/]\r\n        ",2747,2898);
$z[6][4]['sql']="Select content from dede_arctype where id=11";
$z[7]=Array("type","\r\n    <div class=\"more_i\"><a href=\"list.php?tid=[field:id/]\">查看更多</a></div>\r\n    ",2926,3045);
$z[7][4]['typeid']="1";
$z[8]=Array("arclist","\r\n          <li>\r\n            <div class=\"i_list_pic\"><a href=\"view.php?aid=[field:id/]\" title=\"[field:title/]\"><img src=\"[field:picname/]\" alt=\"[field:title/]\"></a></div>\r\n            <div class=\"i_list_text\"><a href=\"view.php?aid=[field:id/]\" title=\"[field:title/]\">\r\n              <h2 style=\"font-weight:bold;color:#ff0000\">[field:title/]</h2>\r\n              <strong>2[field:pubdate function=\"MyDate('Y.m.d',@me)\"/]</strong><span>[field:description function=\"cn_substr(@me,60)\"/]...</span></a></div>\r\n            <div class=\"c\"></div>\r\n          </li>\r\n          ",3315,3958);
$z[8][4]['row']="3";
$z[8][4]['infolen']="100";
$z[8][4]['titlelen']="32";
$z[8][4]['typeid']="13";
$z[9]=Array("type","\r\n    <div class=\"more_i\"><a href=\"list.php?tid=[field:id/]\">查看更多</a></div>\r\n    ",4005,4125);
$z[9][4]['typeid']="11";
$z[10]=Array("global","",4431,4453);
$z[10][4]['name']="cfg_add";
$z[11]=Array("global","",4551,4573);
$z[11][4]['name']="cfg_tel";
$z[12]=Array("include","",4760,4799);
$z[12][4]['filename']="footer_m.htm";

?>