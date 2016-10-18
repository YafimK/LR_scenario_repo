node('Win10') {
       
    stage('Checkout'){}
       checkout scm
	}
	
	def dir
	stage('SetPWD')
	{
		dir	= pwd()
		echo dir
	}

	stage('Run performance test - sc4.lrs'){
	def sc4_path = pwd() + "\\sc4.lrs"
	echo sc4_path
    lrScenarioLoad controllerRunPollingInterval: '15', ignoreErrorStrings: '', perScenarioRunTimeOut: '15', runTimeout: '900', testPaths: sc4_path
	}
	
    stage('Run performance test - sc3.lrs'){
	def sc3_path = pwd() + "\\sc3.lrs"
	echo sc3_path
	lrScenarioLoad controllerRunPollingInterval: '15', ignoreErrorStrings: '', perScenarioRunTimeOut: '15', runTimeout: '900', testPaths: sc3_path
	}
	
    stage('Run performance test - sc1.lrs'){
	def sc1_path = pwd() + "\\sc1.lrs"
	echo sc1_path
	lrScenarioLoad controllerRunPollingInterval: '15', ignoreErrorStrings: '', perScenarioRunTimeOut: '15', runTimeout: '900', testPaths: sc1_path
	}
	
    stage('Run performance test - sc5.lrs'){
	def sc5_path = pwd() + "\\sc5.lrs"
	echo sc5_path
	lrScenarioLoad controllerRunPollingInterval: '15', ignoreErrorStrings: '', perScenarioRunTimeOut: '10', runTimeout: '900', testPaths: sc5_path
	}
	
	stage ('Run performance test - sc6.lrs'){
	def sc5_path = pwd() + "\\sc6.lrs"
	echo sc6_path
	lrScenarioLoad controllerRunPollingInterval: '15', ignoreErrorStrings: '', perScenarioRunTimeOut: '10', runTimeout: '900', testPaths: sc6_path
	}
}
