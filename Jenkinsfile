node('VM22290') {
       
      stage 'Checkout'
      git url: 'https://github.com/YafimK/LR_scenario_repo.git'

      stage 'Run performance test - sc3.lrs'
      lrScenarioLoad controllerRunPollingInterval: '30', ignoreErrorStrings: '', perScenarioRunTimeOut: '10', runTimeout: '900', testPaths: '.\\sc3.lrs'
}
