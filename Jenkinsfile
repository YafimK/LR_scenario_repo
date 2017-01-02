
node('Win10') {
       
    stage('Checkout')
	{
       checkout scm
	}
	
	def sc6_path
	stage('set - sc6.lrs path')
	{
		sc6_path = pwd() + "\\sc6.lrs"
	}
	
	echo sc6_path
    	stage('Run performance test - sc6.lrs')
	{
 	loadRunnerTest archiveTestResultsMode: 'PUBLISH_HTML_REPORT', controllerPollingInterval: '25', fsTimeout: '1800', ignoreErrorStrings: '''Error vuser failed
        Error vuser abort
        Step Timeout caused by resources is a warning''', perScenarioTimeOut: '25', testPaths: '''C:\\LR_scenario_repo\\sc6.lrs'''        
            
	}
}
