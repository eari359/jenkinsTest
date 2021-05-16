pipeline {
  agent any
  stages {
    stage('test') {
      steps {
        ctest '.'
      }
    }

    stage('build') {
      steps {
        cmake '.'
      }
    }

  }
}