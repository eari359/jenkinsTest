pipeline {
  agent any
  stages {
    stage('Test') {
      steps {
        sh '''mkdir build
cd build
echo CMAKE
cmake -A x64 ..'''
        junit 'result.xml'
      }
    }

  }
}