pipeline {
  agent any
  stages {
    stage('Test') {
      steps {
        sh '''mkdir build
cd build
cmake -A x64 ..'''
      }
    }

  }
}