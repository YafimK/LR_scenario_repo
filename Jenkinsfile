https://github.com/YafimK/LR_scenario_repo
node('VM22290') {
       
      stage 'Checkout'
      checkout([$class: 'GitSCM', branches: [[name: '*/master']], doGenerateSubmoduleConfigurations: false, extensions: [], submoduleCfg: [], userRemoteConfigs: [[url: 'https://github.com/YafimK/LR_scenario_repo']]])

      stage 'Run performance test - sc3.lrs'
      lrScenarioLoad controllerRunPollingInterval: '30', ignoreErrorStrings: '', perScenarioRunTimeOut: '10', runTimeout: '900', testPaths: '.\\sc3.lrs'
}
