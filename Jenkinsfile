pipeline {
  agent any
  stages {
    stage('test') {
      steps {
        sh 'make test'
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