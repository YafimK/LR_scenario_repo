node('VM22290') {
       
      stage 'Checkout'
       checkout scm
	
       
	stage 'set - sc5.lrs path'
	def sc5_path = pwd() + "\\sc5.lrs"
	
	echo sc5_path
       stage 'Run performance test - sc5.lrs'
	lrScenarioLoad controllerRunPollingInterval: '30', ignoreErrorStrings: '', perScenarioRunTimeOut: '10', runTimeout: '900', testPaths: sc5_path
}