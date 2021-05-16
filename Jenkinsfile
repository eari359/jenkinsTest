pipeline {
  agent any
  stages {
    stage('Test') {
      steps {
        cmakeBuild(installation: 'InSearchPath', buildDir: 'build', buildType: 'Release', cleanBuild: true, generator: 'Visual Studio 16 2019')
        junit 'result.xml'
      }
    }

  }
}