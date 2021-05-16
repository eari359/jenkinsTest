pipeline {
  agent any
  stages {
    stage('Test') {
      steps {
        sh '''mkdir build
cd build
"C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Auxiliary\\Build\\vcvars64.bat"
cmake ..'''
        junit 'result.xml'
      }
    }

  }
}