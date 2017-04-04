Action()
{
lr_start_transaction("navigate");

		
	web_url("kalimanjaro.hpeswlab.net", 
		"URL=http://kalimanjaro.hpeswlab.net/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("navigate", LR_AUTO);


	lr_start_transaction("all_links");

		web_link("All kind of Links.", 
		"Text=All kind of Links.", 
		"Snapshot=t2.inf", 
		LAST);

	lr_think_time(2);

	web_link("Go to index page", 
		"Text=Go to index page", 
		"Snapshot=t3.inf", 
		LAST);

	lr_think_time(2);

	lr_end_transaction("all_links", LR_AUTO);


	lr_start_transaction("all_cgi");

		web_link("All kind of CGI's.", 
		"Text=All kind of CGI's.", 
		"Snapshot=t4.inf", 
		LAST);

	lr_think_time(2);

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

	lr_think_time(2);

	lr_end_transaction("all_cgi", LR_AUTO);


	lr_start_transaction("win_runner");

		web_url("kalimanjaro.hpeswlab.net_2", 
		"URL=http://kalimanjaro.hpeswlab.net/", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);


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

	lr_end_transaction("win_runner", LR_AUTO);


	return 0;
}