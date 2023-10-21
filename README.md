01.Problem: Distance
Write a program that calculates what is the distance passed by a car (in kilometers), if we know the 
initial speed (km/h), the initial time frame in minutes, then the speed is increased by 10%, the second 
time frame, then the speed is decreased by 5%, and the time until the end of the trip. In order to 
calculate the distance, you need to convert the minutes into hours (e.g. 70 minutes = 1.1666 hours).
Input Data
The input comes from the console and consists of 4 lines:
• The initial speed in km/h – an integer within the range [1 … 300].
• The first time frame in minutes – an integer within the range [1 … 1000].
• The second time frame in minutes – an integer within the range [1 … 1000].
• The third time frame in minutes – an integer within the range [1 … 1000].
Output Data
Print a number on the console: the kilometers passed, formatted up to the second digit after the 
decimal point.
Sample Input and Output
![image](https://github.com/Sasho80/8.2.ExamPreparation-PartII/assets/7139995/d1ef94df-cc6a-4dd0-b7e2-ee9bd08e5d42)
![image](https://github.com/Sasho80/8.2.ExamPreparation-PartII/assets/7139995/037312f6-725c-4613-ab5a-c407f047d83d)

02.Problem: Changing Tiles
Harry has some savings that he wants to use to change the tiles on the bathroom floor. The floor is 
rectangular, and the tiles are triangular. Write a program that calculates if his savings will be sufficient.
Read from the console the width and length of the floor, as well as one of the sides of the triangle 
with its height towards it. We must calculate how many tiles are needed, in order to cover the floor. 
The number of tiles must be rounded up to the higher integer and 5 more tiles must be added as 
spare tiles. Also read from the console – the price per tile and the amount paid for the work of a 
workman. All prices and money calculations are performed in lv (Bulgarian levs, BGN).
Input Data
The following 7 lines must be read from the console:
• Savings.
• Floor width.
• Floor length.
• Side of the rectangle.
• Height of the rectangle.
• Price of a tile in lv (Bulgarian levs, BGN).
• Fee to be paid to the workman.
All numbers must be real numbers within the range [0.00 … 5000.00].
Output Data
The following must be printed on the console as a single line:
• If the money is sufficient: “{Remaining funds} lv left.”
• If the money IS NOT sufficient: “You'll need {Insufficient funds} lv more.”
The result must be formatted up to the second digit after the decimal point.
Sample Input and Output
![image](https://github.com/Sasho80/8.2.ExamPreparation-PartII/assets/7139995/98bf12e2-bb5f-45e2-9cf0-a2d44fff7bd3)


