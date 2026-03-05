
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

    }

    post {

        success {
            emailext(
                subject: "Jenkins Build SUCCESS",
                body: "Good news! The Jenkins build completed successfully.",
                to: "your-email@gmail.com"
            )
        }

        failure {
            emailext(
                subject: "Jenkins Build FAILED",
                body: "Attention! The Jenkins build has failed. Please check Jenkins.",
                to: "pateldeepvi@gmail.com"
            )
        }

    }
}
