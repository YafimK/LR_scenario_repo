Action1()
{
//	int col = 53;
//	int row = 9;
	int ret_row;
	int ret_col;
	const char *pattern = "{patterns}";

	/* *** The terminal type is 5250 Display. */
	lr_start_transaction("TE_connect");

		TE_connect(
		"comm-type = tn5250;"
		"host-name = localhost;"
		"telnet-port = 9000;"
		"device-name = ;"
		"user-name = ;"
		"password = ;"
		"security-type = unsecured;"
		"terminal-type = 5250 display;"
		"terminal-model = 3477-fc;"
		"login-command-file = ;"
		"terminal-setup-file = ;"
		, 60000);
	if (TE_errno != TE_SUCCESS) 
		return -1;

	lr_end_transaction("TE_connect", LR_AUTO);

	//TE_wait_text("Sign On", 30, 1, 1, 80, 24, NULL, NULL, NULL);
	
	//TE_wait_text(pattern, 30, 16, 6, 35, 10, &ret_col, &ret_row, NULL);
	TE_wait_text(pattern, 30, 1, 1, 80, 24, &ret_col, &ret_row, NULL);
	
	
	lr_start_transaction("TE_find_text");

		if (TE_errno == TE_SUCCESS) {
	
		TE_set_cursor_pos((ret_col + 36), ret_row);
		TE_type("dummy_text<kReturn>");
		lr_think_time(2);
		lr_output_message("row = %d; col = %d", ret_row, ret_col);

	} else {
		lr_error_message("We're all doomed!!!");
	}

	lr_end_transaction("TE_find_text", LR_AUTO);

	
	//lr_output_message("TE_errno = %d", TE_errno);
	
	lr_think_time(5);
	
lr_start_transaction("TE_disconnect");

			TE_disconnect();

	lr_end_transaction("TE_disconnect", LR_AUTO);

	
	return 0;
}
