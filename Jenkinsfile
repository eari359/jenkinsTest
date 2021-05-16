pipeline {
  agent any
  stages {
    stage('test') {
      steps {
        ctest 'InSearchPath'
      }
    }

    stage('build') {
      steps {
        cmake 'InSearchPath'
      }
    }

  }
}