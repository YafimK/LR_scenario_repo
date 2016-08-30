node('VM22290') {
       
      stage 'Checkout'
       scm checkout
       
      stage 'Run performance test - sc3.lrs'
      lrScenarioLoad controllerRunPollingInterval: '30', ignoreErrorStrings: '', perScenarioRunTimeOut: '10', runTimeout: '900', testPaths: '.\\sc3.lrs'
}
