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
                rm -rf build
                mkdir build
                cd build
                cmake ..
                make
                '''
            }
        }

        stage('Run Google Tests') {
            steps {
                sh '''
                cd build
                ./runTests
                '''
            }
        }
    }
}
