**PROJECT TITLE: RANDOM COLOUR PICKER [C++]**
**DESCRIPTION:** This was a project for my CIS 250 class and the project description was to make a program that selects a random colour from a predefined list of 7 colours, and displays the 
selection on the screen to the user. It was to be written in C++ and we were allowed to add more features as we saw fit, as long as the primary function of the project was met and fulfilled. 
So firstly, I added a feature where before the selection process, a loading animation is shown for a few seconds. Secondly, I added a feature that made it possible for the program to be reused after 
it has selected a random colour once. Thirdly, I added a feature that accounted for edge cases with respect to the second feature. For reusability to be achieved, I encased the program in a do-while 
loop and placed the conditions on a question statement that is prompted to the user. The answer options that are collected and processed are "yes" or "no", with yes signalling a rerun of the program 
and no signalling an end to the program. Since "yes" can be written in more than one variation, I made sure every possible way in which the word "yes" can be written was accounted for with this program, 
specifically 7 ways (y, Y, Yes, yes, YES, yeah, and yea). 

- Libraries used in this project include the iostream library, which handles the standard input/output functions. The chrono library, which handles some little time management functions, the thread
  library, for handling the creation and management of threads in the program, and the ctime library, also for handling time management functions.

- A colour picker class is defined and in the private section, a string array of 7 elements. These are where the colours are stored and used as the data pool from where the program will
  select one of the seven colours. In the public section of this class, the 7 elements of this array are defined and hard coded with their 7 colours: Red, Orange, Yellow, Green, Blue, Indigo and Violet.

- A setElement function is defined, and this function is meant to set the elements of the array to a specific index. It takes in two parameters, the index value collected as an integer
  data type, and the colours themselves, collected as string data types. An if statement is used that makes sure all colours are able to fit into the array. 
 
- A printColour function is defined, and this function collects no parameters as it is a display function meant to print every element of the array. When called, it prints all the colours on the screen,
  showing the user the existing data pool from which the program will pick a colour. A display statement was added to show a separation bar when each colour is displayed on the screen, and this creates
  the display format.

- A function for the loading effect is defined, and this function when called shows a small loading animation at the random colour selection. The decision to add this feature was made because I felt
  like the selection process was too fast. Without this loading animation, a colour would be selected almost instantly as the program is executed, but this gives it a more... user friendly feeling to it.
  To make this feature, a for loop and features of the chrono library were used. The display of the animation is held on the screen for 5 iterations (specified in the condition of the FOR loop, i < 5),
  and at 100 milliseconds over each iteration. This means that each part of the spinning animation is delayed for 100 milliseconds, 5 times. The four phases of the animation as specified in the program are
  for the spinning effects since it is a spinning dash (—) sign. 

- When this animation is done, it still cannot abruptly end, so another delay in the form of a thread is implemented in line 72 to initiate a 2 second delay from when the animation ends to when the
  random colour selected is displayed. After this, the mechanism for selecting the random colour is run, the loading animation is cleared and the random colour selected is displayed. This is all still
  under the colour picker class, and it signifies the end of the class.

- The main function is then defined. The random number generator is initiated, an instance of the colour picker class is defined and the do while loop is initiated. This loop ensures that the program
  runs again based on the user's answer to the question of if they want the program to pick another random colour. In this loop, the colours are displayed, the loading effect is loaded up, and a random
  colour is chosen. When this process is done, the input buffer is cleared, then the question prompt is brought up with all of the edge cases taken into consideration. If the user answers yes, the program
  reruns. If the user answers no, the program is terminated.

This program was written entirely with C++ and the IDE used was Visual Studio (not Visual Studio Code). My learning objectives fulfilled with this project include learning how to manipulate visual 
animations with FOR loops, being able to account for edge cases to add a sort of universal usability to my code, and more experience with using classes. 

**CREDITS:** Google, Cañada College. This project was made on 06/02/2024, and was uploaded to github on 26/02/2024.
**CONTACT:** Email: precioussunday@my.smcccd.edu
**KNOWN ISSUES:** None were discovered at the completion of this project. Ensure that you are using the latest version of Microsoft Visual Studio and it should run seamlessly. Please refer to my 
email should you have any questions, encounter any issues or would like to offer suggestions. 
**TIMESTAMP:** 26/02/2024 || 10:29 PM (PST)
