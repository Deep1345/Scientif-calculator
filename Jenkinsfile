pipeline {
  agent any

  stages {
    stage('Checkout') {
      steps {
        checkout scm
      }
    }

    stage('Build C++') {
      steps {
        sh 'g++ calculator.cpp -o calculator'
      }
    }

    stage('Success Message') {
      steps {
        sh 'echo "Build done successfully!"'
      }
    }
  }
}
