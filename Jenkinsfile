
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
		lrScenarioLoad controllerRunPollingInterval: '15', ignoreErrorStrings: '', perScenarioRunTimeOut: '15', fsTimeout: '600', testPaths: sc6_path
	}
}