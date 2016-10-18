#include <stdio.h>
#include <string.h>
#include <stdlib.h>
Action()
{
	int i;
	int rNum;
	int exitNum;
	
	lr_start_transaction("First_Trans");

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

	lr_end_transaction("First_Trans", LR_AUTO);


	lr_think_time(10);
lr_start_transaction("CGI");

		
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


	lr_end_transaction("CGI", LR_AUTO);


	lr_think_time(5);

	web_url("kalimanjaro.hpeswlab.net_2", 
		"URL=http://kalimanjaro.hpeswlab.net/", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("Trans_other");

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

	lr_end_transaction("Trans_other", LR_AUTO);
	

	for(i = 0; i < 8; i++)
	{
		char buf[12];
		sprintf(buf, "transTes_%d", i); // puts string into buffer
		lr_start_transaction(buf);

		rNum = rand() % 4; 
		lr_end_transaction(buf, rNum);
	}
	
	
	exitNum = rand() % 3; 
	lr_message("Exit decison is %d",exitNum);
	switch(exitNum)
	{
		case 0:
			lr_exit(LR_EXIT_VUSER_AFTER_ITERATION, LR_PASS);
			break;
		case 1:
		 	lr_error_message ("vuser failed");
		 	lr_exit(LR_EXIT_VUSER, LR_FAIL);
		 	break;
		case 2:
		 	lr_error_message ("vuser abort");
		 	lr_abort();
		 	break;
	}
	
	return 0;
}