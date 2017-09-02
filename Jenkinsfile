pipeline {
    agent none
    options {
        skipDefaultCheckout() 
    }

    stages {
        stage('Build') {
            agent any
            steps {
                dir('source') {
                    checkout scm
                }

                dir('build') {
                    deleteDir()

                    withEnv(["PATH+CMAKE=${env.CMAKE}", "PATH+GCC=${env.GCC}"]) {
                        sh("cmake -G \"Unix Makefiles\" -DCMAKE_BUILD_TYPE=Release ../source")
                        sh("make all -j5")
                    }
                }
            }

            post {
                success {
                    archiveArtifacts 'build/build/bin/*'
                }
            }
        }

        stage('Unit tests') {
            agent any
            steps {
                unarchive mapping: ['build/build/bin/unit_tests': 'unit_tests']

                sh("chmod +x ./unit_tests && ./unit_tests --gtest_output=xml:./unit_tests.xml")
            }

            post {
                always {
                    step([$class: 'JUnitResultArchiver', testResults: 'unit_tests.xml'])
                }
            }
        }
    }
}