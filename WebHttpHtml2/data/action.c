Action()
{

	web_url("kalimanjaro.hpeswlab.net", 
		"URL=http://kalimanjaro.hpeswlab.net/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://www.bing.com/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("fwlink", 
		"URL=https://go.microsoft.com/fwlink/?LinkId=251136", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://r20swj13mr.microsoft.com/ieblocklist/v1/urlblockindex.bin", "Referer=", ENDITEM, 
		"Url=https://r20swj13mr.microsoft.com/ieblocklist/v1/urlblocklist.bin", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(10);

	web_url("cgi_overview.html", 
		"URL=http://kalimanjaro.hpeswlab.net/cgi_examples/cgi_overview.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://kalimanjaro.hpeswlab.net/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_link("Link to page of useful CGIs", 
		"Text=Link to page of useful CGIs", 
		"Snapshot=t31.inf", 
		LAST);

	lr_think_time(6);

	web_link("Many redirections CGI", 
		"Text=Many redirections CGI", 
		"Snapshot=t32.inf", 
		LAST);

	web_submit_form("CGI_redir.exe", 
		"Snapshot=t33.inf", 
		ITEMDATA, 
		"Name=redir_max", "Value=", ENDITEM, 
		"Name=submit1", "Value=Submit Request", ENDITEM, 
		EXTRARES, 
		"Url=https://ieonline.microsoft.com/iedomainsuggestions/ie11/suggestions.en-US", "Referer=", ENDITEM, 
		"Url=https://ieonline.microsoft.com/ieflipahead/ie10/rules.xml?mkt=en-US", "Referer=", ENDITEM, 
		LAST);

	web_url("fwlink_2", 
		"URL=http://go.microsoft.com/fwlink/?LinkID=401135", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);

	web_url("kalimanjaro.hpeswlab.net_2", 
		"URL=http://kalimanjaro.hpeswlab.net/", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_url("index.html", 
		"URL=http://kalimanjaro.hpeswlab.net/WinRunner/index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://kalimanjaro.hpeswlab.net/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_link("Titanic movie.", 
		"Text=Titanic movie.", 
		"Snapshot=t37.inf", 
		LAST);

	return 0;
}