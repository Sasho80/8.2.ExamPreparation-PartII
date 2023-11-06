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

03.Problem: Flowers Shop
A flowers shop offers 3 types of flowers: chrysanthemums, roses and tulips. The prices depend on 
the season.
Season Chrysanthemums Roses Tulips 
spring / summer 2.00 USD/pc 4.10 USD/pc 2.50 USD/pc
autumn / winter 3.75 USD/pc 4.50 USD/pc 4.15 USD/pc
On holidays, prices of all flowers are increased by 15%. The following discounts are offered:
• For purchasing more than 7 tulips in spring – 5% of the price of the whole bouquet.
• For purchasing 10 or more roses in winter – 10% of the price of the whole bouquet.
• For purchasing more than 20 flowers in total in any season – 20% of the price of the whole 
bouquet.
Discounts are made in the above described order and can be combined! All discounts are valid after 
increasing of the price on a holiday!
The price for arranging a bouquet is always 2 USD. Write a program that calculates the price of a 
bouquet.
Input Data
The input is read from the console and contains exactly 5 lines:
• The first line holds the number of purchased chrysanthemums – an integer in range [0 … 200].
• The second line holds the number of purchased roses – an integer within the range [0 … 200].
• The third line holds the number of purchased tulips – an integer within the range [0 … 200].
• The fourth line indicates the season – [Spring, Summer, Autumn, Winter].
• The fifth line specifies if the day is a holiday – [Y = yes / N = no].
Output Data
Print on the console 1 number – the price of flowers, formatted up to the second digit after the 
decimal point.
Sample Input and Output
![image](https://github.com/Sasho80/8.2.ExamPreparation-PartII/assets/7139995/ad280eda-7ebb-43a3-931e-7cb22555dcf9)
![image](https://github.com/Sasho80/8.2.ExamPreparation-PartII/assets/7139995/ebaccae6-fa38-41ce-afd5-239871414bf5)

04.Problem: Grades
Write a program that calculates statistics for grades in an exam. At the beginning, the program reads 
the number of students who attended the exam and for each student – their grade. At the end, the 
program must print the percentage of students that have grades between 2.00 and 2.99, between 
3.00 and 3.99, between 4.00 and 4.99, 5.00 or more, as well as the average grade of the exam.
Note: we use the Bulgarian grading system, where the grade scale starts from 2.00 (Fail) and ends at 
6.00 (Excellent): https://en.wikipedia.org/wiki/Grading_systems_by_country#Bulgaria.
Input Data
Read from the console a sequence of numbers, each on a separate line:
• On the first line – the number of students who attended the exam – an integer within the range 
[1 … 1000].
• For each individual student on a separate line – the grade on the exam – a real number within 
the range [2.00 … 6.00].
Output Data
Print on the console 5 lines that hold the following information:
• "Top students: {percentage of students with grade of 5.00 or more}%".
• "Between 4.00 and 4.99: {between 4.00 and 4.99 included}%".
• "Between 3.00 and 3.99: {between 3.00 and 3.99 included}%".
• "Fail: {less than 3.00}%".
• "Average: {average grade}".
The results must be formatted up to the second digit after the decimal point.
Sample Input and Output
![image](https://github.com/Sasho80/8.2.ExamPreparation-PartII/assets/7139995/5bad4a95-89c9-4ab7-b505-c9242ff5eacf)

05.Problem: Christmas Hat
Write a program that reads from the console an integer n and draws a Christmas hat with width of 4 
* n + 1 columns and height of 2 * n + 5 rows, as in the examples below.
Input Data
The input is read from the console – an integer n within the range [3 … 100].
Output Data
Print on the console a Christmas hat, exactly like in the examples.
Sample Input and Output
Problem: Christmas Hat
Write a program that reads from the console an integer n and draws a Christmas hat with width of 4 
* n + 1 columns and height of 2 * n + 5 rows, as in the examples below.
Input Data
The input is read from the console – an integer n within the range [3 … 100].
Output Data
Print on the console a Christmas hat, exactly like in the examples.
Sample Input and Output
![image](https://github.com/Sasho80/8.2.ExamPreparation-PartII/assets/7139995/ece43815-968b-4006-9d82-180f8096f4e9)


