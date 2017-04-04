//includes for new CCI

#include "stdio.h"
#include "stdlib.h"
#include "direct.h"
#include "limits.h"
#include "time.h"

void whereami();
int nextBool();
char * getscrdir();

Action()
{ 
	int i,id, scid, tmp;
	char * vuser_group;
	extern int errno;
	char * filename = "testFileIO.txt";
	char * testFolder = "TestFolder";
	//long file; //old CCI
	FILE * file; //new CCI
	char * scriptDir;
	long long testLongLong;
	
	srand ( time(NULL) );
	lr_whoami(&id, &vuser_group, &scid);

	
	#ifdef Linux
	mkdir(testFolder, 0777);
	#else
	mkdir(testFolder);
	#endif
		
	chdir(testFolder);	
	whereami();

	
	lr_start_transaction("open_file");

	if ((file = fopen(filename, "w")) == NULL) {
		lr_error_message ("Cannot open %s", filename);
        return -1;
	}	

	lr_end_transaction("open_file", LR_AUTO);

	
	lr_start_transaction("print_to_file");

	for (i = 0; i < 5; i++) {
		fprintf(file, "Iteration #%d. Group: %s, vuser id: %d, scenario id %d\n", i, vuser_group, id, scid);
		lr_think_time(2);
	}

	lr_end_transaction("print_to_file", LR_AUTO);

	
		
	fclose(file);
	
//	lr_output_message("Script directory: %s",  scriptDir);
	whereami();

	lr_start_transaction("delete_file");

	if (remove(filename) == 0)
        lr_output_message ("File %s removed.", filename);
    else
        lr_output_message ("Unable to remove %s error %d.", filename, errno);

	lr_end_transaction("delete_file", LR_AUTO);

	chdir("..");
	whereami();
		
    lr_start_transaction("next_bool");

	if (nextBool()) {
    	lr_message("Random boolean is true");
    } else {
    	lr_message("Random boolean is false");
    }

	lr_end_transaction("next_bool", LR_AUTO);

	
	testLongLong = 5223372;
		lr_message("Long long value = %lli", testLongLong);

		lr_think_time(10);
    
	return 0;
}

void whereami () {
	char buff[512];
	char *workDir;
	
	workDir = getcwd(buff, 512);
	lr_output_message ("Current working directory: %s", workDir);
}


int nextBool() {
	return (int)(rand() % 2 == 1);
}