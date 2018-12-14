# ArduSonar

A small project that simulates the operation of a sonar made with Arduino and Android. An ultrasonic sensor captures the distance of the objects in front of it, while being moved by a servo. The data is send via Bluetooth to an Android device where the data is displayed.
![](demo.gif)


## Arduino
The necessary hardware for this project is:
 * Arduino Uno
 * Servo
 * Ultrasonic sensor (HC-06)
 * Bluetooth module
 * Protoboard

The connections of the elements are shown below.
![](scheme.jpg)

Now we just need to load the [ino](ArduSonar.ino) file on the Arduino and we have the system ready to work.


## Android
To develop a quick prototype of the application, the block programming of the MIT App Inventor has been used to develop the Android app. If you want to try the application, the [apk](ArduSonar.apk) file is provided, which is installed on an Android device like any other application. If you want to make any changes or see how the app is made, the App Inventor [aia](ArduSonar.aia) file is also provided.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details
