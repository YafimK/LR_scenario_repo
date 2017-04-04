Action()
{

	web_url("kalimanjaro.hpeswlab.net", 
		"URL=http://kalimanjaro.hpeswlab.net/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_link("All kind of Links.", 
		"Text=All kind of Links.", 
		"Snapshot=t2.inf", 
		LAST);

	lr_think_time(4);

	web_link("Go to index page", 
		"Text=Go to index page", 
		"Snapshot=t3.inf", 
		LAST);

	lr_think_time(4);

	web_link("All kind of CGI's.", 
		"Text=All kind of CGI's.", 
		"Snapshot=t4.inf", 
		LAST);

	lr_think_time(4);

	web_link("Example 1", 
		"Text=Example 1", 
		"Snapshot=t5.inf", 
		LAST);

	web_link("Forward to example 2", 
		"Text=Forward to example 2", 
		"Snapshot=t6.inf", 
		LAST);

	web_submit_form("post_query.exe", 
		"Snapshot=t7.inf", 
		ITEMDATA, 
		"Name=entry1", "Value=", ENDITEM, 
		"Name=entry2", "Value=", ENDITEM, 
		"Name=entry3", "Value=", ENDITEM, 
		LAST);

	lr_think_time(10);

	web_url("kalimanjaro.hpeswlab.net_2", 
		"URL=http://kalimanjaro.hpeswlab.net/", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("index.html", 
		"URL=http://kalimanjaro.hpeswlab.net/WinRunner/index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://kalimanjaro.hpeswlab.net/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_link("Titanic movie.", 
		"Text=Titanic movie.", 
		"Snapshot=t10.inf", 
		EXTRARES, 
		"Url=images/splash_tile.jpg", ENDITEM, 
		LAST);

	web_add_cookie("MUID=3A14B879822E6B1D39FDB156862E68FF; DOMAIN=api.bing.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=api.bing.com");

	web_add_cookie("SRCHUSR=DOB=20160609; DOMAIN=api.bing.com");

	web_add_cookie("SRCHHPGUSR=CW=1039&CH=537&DPR=1; DOMAIN=api.bing.com");

	web_add_cookie("SRCHUID=V=2&GUID=13B5ACA0EDE64C73AA9577FF07F2D9C7; DOMAIN=api.bing.com");

	web_add_cookie("MUIDB=3A14B879822E6B1D39FDB156862E68FF; DOMAIN=api.bing.com");

	web_url("qsml.aspx", 
		"URL=http://api.bing.com/qsml.aspx?query=http%3A%2F%2Fkalimanjaro.hpeswlab.net%2F&maxwidth=32765&rowheight=20&sectionHeight=160&FORM=IESS02&market=en-US", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}