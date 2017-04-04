node('LR_NODE') {

def testData = pwd()+"\\testData"
def sc1Path
def sc2Path

stage('Checkout test data'){
    dir (testData) {
		checkout scm
		sc1Path = testData + "\\Jenkins_scenario1.lrs"
		sc2Path = testData + "\\Jenkins_scenario2.lrs"
		echo "Test data dir : " + testData + "\nScenario 1 dir: " + sc1Path + "\nScenario 2 dir: " + sc2Path
	}
	bat 'start "Demo400 Terminal Server" "%LR_PATH%bin\\demo400.exe"'
}

stage('PerfTest_Scenario1') {
	loadRunnerTest archiveTestResultsMode: 'PUBLISH_HTML_REPORT', fsTimeout: '2500', ignoreErrorStrings: 'Error: CPU usage for this load generator has exceeded 80%', perScenarioTimeOut: '20', testPaths: sc1Path
}

stage('PerfTest_Scenario2') {
	loadRunnerTest archiveTestResultsMode: 'PUBLISH_HTML_REPORT', fsTimeout: '1500', ignoreErrorStrings: 'Error: CPU usage for this load generator has exceeded 80%', perScenarioTimeOut: '20', testPaths: sc2Path
}

stage('Cleanup environment') {
	dir (testData) {
	    deleteDir()
	}
	bat 'taskkill /f /im demo400.exe'
}
}