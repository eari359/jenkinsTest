pipeline {
  agent any
  stages {
    stage('test') {
      steps {
        ctest(installation: 'InSearchPath', arguments: '--target test')
      }
    }

    stage('build') {
      steps {
        cmake 'InSearchPath'
      }
    }

  }
}