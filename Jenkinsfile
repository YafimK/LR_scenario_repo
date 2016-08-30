node('VM22290') {
       
      stage 'Checkout'
       checkout scm
	
        stage 'Run performance test - sc3.lrs'
	
	def sc3_path = pwd() + "\\sc3.lrs"
	
	echo sc3_path
      
	lrScenarioLoad controllerRunPollingInterval: '30', ignoreErrorStrings: '', perScenarioRunTimeOut: '10', runTimeout: '900', testPaths: sc3_path
}
