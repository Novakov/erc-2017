pipeline {
    agent none
    options {
        skipDefaultCheckout() 
    }

    stages {
        stage('Build') {
            agent any
            steps {
                echo 'Building!'
            }
        }

        stage('Unit tests') {
            agent any
            steps {
                echo 'Unit testing!'
            }
        }
    }
}