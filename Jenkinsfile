pipeline {
  agent any
  stages {
    stage('Test') {
      steps {
        sh '''mkdir build
cd build
cmake ..
make test'''
      }
    }

  }
}