pipeline {
    agent any

    stages {

        stage('Checkout') {
            steps {
                checkout scm
            }
        }

        stage('Build with CMake') {
            steps {
                sh '''
                mkdir build
                cd build
                cmake ..
                make
                '''
            }
        }

        stage('Run Tests') {
            steps {
                sh '''
                cd build
                ./runTests
                '''
            }
        }

    }

    post {
        success {
            emailext(
                subject: "Build SUCCESS",
                body: "Build and tests passed",
                to: "your_email@gmail.com"
            )
        }

        failure {
            emailext(
                subject: "Build FAILED",
                body: "Build or tests failed",
                to: "your_email@gmail.com"
            )
        }
    }
}
