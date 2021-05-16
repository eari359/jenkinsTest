pipeline {
  agent any
  stages {
    stage('test') {
      steps {
        junit 'report.xml'
        sh 'make test'
      }
    }

    stage('build') {
      steps {
        cmake 'InSearchPath'
      }
    }

  }
}