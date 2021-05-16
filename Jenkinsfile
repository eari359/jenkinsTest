pipeline {
  agent any
  stages {
    stage('test') {
      steps {
        ctest(installation: 'InSearchPath', arguments: '--target test')
        junit 'report.xml'
      }
    }

    stage('build') {
      steps {
        cmake 'InSearchPath'
      }
    }

  }
}