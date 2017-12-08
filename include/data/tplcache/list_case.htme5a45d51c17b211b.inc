<?php
$z[0]=Array("field","",304,323);
$z[0][4]['name']="title";
$z[1]=Array("global","",324,350);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",391,413);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",453,504);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("list","\r\n				<article id=\"featPost[field:global.autoindex/]\" class=\"case-post clearfix\">\r\n					<div class=\"special clearfix\">	\r\n					\r\n		\r\n		<figure><a href=\"[field:arcurl/]\" title=\"[field:fulltitle/]\"><img src=\"[field:picname/]\" alt=\"[field:fulltitle/]\" />\r\n		</a></figure>\r\n		\r\n		<header><h2><a href=\"[field:arcurl/]\">[field:title/]</a></h2></header>\r\n		<span class=\"post\"><time pubdate=\"pubdate\" datetime=\"2013-03-05\"><b>[field:pubdate function=MyDate('y-m-d',@me)/]</b></time> <i>|</i> 位置 > <a>[field:typename /]</a> \r\n</span>\r\n		<p>[field:description function=\"cn_substr(@me,180)\"/]...</p>  \r\n		<a href=\"[field:arcurl/]\" class=\"cta\" title=\"查看全文\">查看全文</a>\r\n		\r\n\r\n					</div>\r\n				</article>\r\n			",3067,3829);
$z[4][4]['pagesize']="8";
$z[4][4]['titlelen']="50";
$z[5]=Array("pagelist","",3875,3946);
$z[5][4]['listitem']="info,index,end,pre,next,pageno";
$z[5][4]['listsize']="5";
$z[6]=Array("channel","\r\n<li><a href=\"[field:typelink/]\">[field:typename/]</a></li>\r\n",3980,4163);
$z[6][4]['type']="sun";
$z[6][4]['currentstyle']="<li class='active'><a href='~typelink~' ~rel~>~typename~</a></li>";
$z[7]=Array("include","",4318,4355);
$z[7][4]['filename']="footer.htm";

?>