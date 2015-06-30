#Logging Arduino sensor data into MySQL table using Python.

Follow the steps below to complete your project.

1. Connect your sensor to Arduino as shown in circuit. (Here I'm using TMP36, a temperature sensor and reading only voltage from it)

 ![Arduino TMP36](https://learn.adafruit.com/system/assets/assets/000/000/476/medium640/temperature_tmp36fritz.gif?1396763381)

2. Next, from the downloaded code, copy code from```ArduinoMySQL.ino```file and then paste it in your Arduino IDE.
3. To check if the code is working or not, open serial monitor and get confirmed.
4. Now, create a database in your localhost and then a table in it using phpMyAdmin.  
 
 ![phpMyAdmin MySQL table](http://i.imgur.com/aIqAonu.png)


5. If you're not using phpMyAdmin using the following script to create tables.
  ```
  CREATE TABLE IF NOT EXISTS `tempdata` (
  `ID` int(11) NOT NULL,
  `Date` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `voltage` varchar(4) NOT NULL
) 
  ```
5. Then, get ```ArduinoMySQL.py``` from the downloaded code and paste it any one of your prefered code editor.
6. Change the Database credentials in the line 5. The credetials include your Database username, password and Database name.
7. Finally, save the code and run the Python script. Then, go and check you table, you'll find that data.

 ![Arduino Data Log](http://i.imgur.com/eU2aYG7.png)

**Possible Errors**

You might see an error such as the error shown in the image below.

![Arduino Data log error](http://i.imgur.com/BePNX3C.png)

Then, you need to upgrage you python MySQLdb library. Use ```pip install --upgrade MySQL-python==1.2.4``` command to upgrade the library.   
