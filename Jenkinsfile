node('Win10') {
       
      stage('Checkout'){
       checkout scm
	}

	stage('set - sc5.lrs path'){
	def sc5_path = pwd() + "\\sc5.lrs"
}
	echo sc5_path
       stage('Run performance test - sc5.lrs'){
	lrScenarioLoad controllerRunPollingInterval: '15', ignoreErrorStrings: '', perScenarioRunTimeOut: '15', runTimeout: '600', testPaths: sc5_path
}
}
