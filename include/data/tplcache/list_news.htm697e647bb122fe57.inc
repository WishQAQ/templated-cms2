<?php
$z[0]=Array("field","",302,321);
$z[0][4]['name']="title";
$z[1]=Array("global","",322,348);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",389,411);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",451,502);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1958,1995);
$z[4][4]['filename']="header.htm";
$z[5]=Array("list","\r\n			\r\n				<article id=\"featPost[field:global.autoindex/]\" class=\"news-post clearfix\">\r\n					<div class=\"special clearfix\">	\r\n					\r\n		\r\n		<figure><a href=\"[field:arcurl/]\" title=\"[field:fulltitle/]\"><img src=\"[field:picname/]\" alt=\"[field:fulltitle/]\" />\r\n		</a></figure>\r\n		\r\n		<header><h2><a href=\"[field:arcurl/]\">[field:title/]</a></h2></header>\r\n		<span class=\"post\"><time pubdate=\"pubdate\" datetime=\"2013-03-05\"><b>[field:pubdate function=MyDate('y-m-d',@me)/]</b></time> <i>|</i> 位置 > <a>[field:typename /]</a> \r\n</span>\r\n		<p>[field:description function=\"cn_substr(@me,180)\"/]...</p>  \r\n		<a href=\"[field:arcurl/]\" class=\"cta\" title=\"查看全文\">查看全文</a>\r\n		\r\n\r\n					</div>\r\n				</article>\r\n				",2369,3137);
$z[5][4]['pagesize']="8";
$z[5][4]['titlelen']="50";
$z[6]=Array("pagelist","",3188,3259);
$z[6][4]['listitem']="info,index,end,pre,next,pageno";
$z[6][4]['listsize']="5";
$z[7]=Array("channel","\r\n<li><a href=\"[field:typelink/]\">[field:typename/]</a></li>\r\n",3297,3480);
$z[7][4]['type']="sun";
$z[7][4]['currentstyle']="<li class='active'><a href='~typelink~' ~rel~>~typename~</a></li>";
$z[8]=Array("include","",3635,3672);
$z[8][4]['filename']="footer.htm";

?>