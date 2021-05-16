pipeline {
  agent any
  stages {
    stage('test') {
      steps {
        ctest 'C:\\Program Files\\CMake\\bin\\ctest.exe'
      }
    }

    stage('build') {
      steps {
        cmake 'C:\\Program Files\\CMake\\bin\\cmake.exe'
      }
    }

  }
}