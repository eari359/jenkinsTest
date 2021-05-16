pipeline {
  agent any
  stages {
    stage('Test') {
      steps {
        bat 'buildAndTest.bat'
        junit 'build/tests/result.xml'
      }
    }

  }
}