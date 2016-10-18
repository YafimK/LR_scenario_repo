node('VM22290') {
       
      stage 'Checkout'
       checkout scm
	

      stage 'Run performance test - sc4.lrs'
	def sc4_path = pwd() + "\\sc4.lrs"
	echo sc4_path
      lrScenarioLoad controllerRunPollingInterval: '30', ignoreErrorStrings: '', perScenarioRunTimeOut: '10', fsTimeout: '900', testPaths: sc4_path

}
