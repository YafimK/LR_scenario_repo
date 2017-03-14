node('LR_node') {
       
    stage('Checkout'){
    	checkout scm
	}
	
	def dir
    stage('SetPWD')
	{
	  dir = pwd()
	  echo dir
	}

    stage('Run performance test - sc4.lrs'){
	def sc4_path = pwd() + "\\sc4.lrs"
	echo sc4_path
		loadRunnerTest archiveTestResultsMode: 'PUBLISH_HTML_REPORT', testPaths: sc4_path
	}
	
    stage('Run performance test - sc3.lrs'){
	def sc3_path = pwd() + "\\sc3.lrs"
	echo sc3_path
	loadRunnerTest archiveTestResultsMode: 'PUBLISH_HTML_REPORT', testPaths: sc3_path
	}
	
    stage('Run performance test - sc1.lrs'){
	def sc1_path = pwd() + "\\sc1.lrs"
	echo sc1_path
	loadRunnerTest archiveTestResultsMode: 'PUBLISH_HTML_REPORT', testPaths: sc1_path
	}
	
    stage('Run performance test - sc5.lrs'){
	def sc5_path = pwd() + "\\sc5.lrs"
	echo sc5_path
	loadRunnerTest archiveTestResultsMode: 'PUBLISH_HTML_REPORT', testPaths: sc5_path
	}
	
    stage ('Run performance test - sc6.lrs'){
	def sc6_path = pwd() + "\\sc6.lrs"
	echo sc6_path
 	loadRunnerTest archiveTestResultsMode: 'PUBLISH_HTML_REPORT', ignoreErrorStrings: '''Error vuser failed
        Error vuser abort
        Step Timeout caused by resources is a warning''', testPaths: '''C:\\LRS\\sc6.lrs'''        
            	}
}
