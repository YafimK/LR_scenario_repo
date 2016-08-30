node('VM22290') {
       
      stage 'Checkout'
       checkout scm

      stage 'Run performance test - Scenario1.lrs'
      lrScenarioLoad controllerRunPollingInterval: '30', ignoreErrorStrings: '', perScenarioRunTimeOut: '10', runTimeout: '900', testPaths: '.\\Scenario1.lrs'

      stage 'Run performance test - sc3.lrs'
      lrScenarioLoad controllerRunPollingInterval: '30', ignoreErrorStrings: '', perScenarioRunTimeOut: '10', runTimeout: '900', testPaths: '.\\sc3.lrs'
}
