pipeline {
  agent any
  stages {
    stage('Test') {
      steps {
        cmakeBuild(installation: 'InSearchPath', buildDir: 'build', buildType: 'Release', cleanBuild: true)
        junit 'result.xml'
      }
    }

  }
}