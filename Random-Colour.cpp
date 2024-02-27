// Random-Colour.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/** This program makes use of classes. It has a list of colours and can display
* a random colour as a random pick from the list.
*/
#include <iostream> // Input-Output Stream library
#include <thread> // Multi-threaded library
#include <ctime> // Time management library
#include <chrono> // Time management library 
using namespace std;

// Defining colour class
class ColourPicker {
private:
    string colours[7]; // Colour array with 7 elements for all 7 colours.

public:
    /** Defining the constructor to initialize the colour array.
    * This also adds the elements/different colour names in the array.
    */
    ColourPicker() {
        setElement(0, "Red"); // Element index-0
        setElement(1, "Orange"); // Element index-1
        setElement(2, "Yellow"); // Element index-2
        setElement(3, "Green"); // Element index-3
        setElement(4, "Blue"); // Element index-4
        setElement(5, "Indigo"); // Element index-5
        setElement(6, "Violet"); // Element index-6
    }

    // Defining a function to set an element to a specific index
    void setElement(int index, const string& colour) {
        if (index >= 0 && index < 7) {
            colours[index] = colour;
        }
    }

    // Defining a function to print all colours in the array
    void printColours() const {
        for (const auto& colour : colours) {
            cout << colour << " | ";
        }
        cout << endl;
    }

    /** Defining a function to randomly pick and print one colour from the array.
    * This has the random feature set with respect to 7, the size of the colour array.
    * This function also has an animation function, where there is a spinning object
    * to simulate the idea of the program processing the task of picking a random colour.
    */
    void pickRandomColourWithLoadingEffect() const { // Naming conventions perhaps needs to be shortened
        cout << "Picking a random colour....";

        /** Defining spining object as a loading animation for 2 seconds.
        * This function will have a FOR loop with delay mechanisms that make up the 
        * animation feature.
        * 
        * The FOR loop has the condition "i < 5", this is to have the animation display
        * for a certain amount of time (5 * 100 milliseconds). In other words, the animation
        * displays for 100 milliseconds each iteration over 5 iterations
        */
        for (int i = 0; i < 5; i++) {
            cout << "\b\\"; // Loading element: phase 1
            this_thread::sleep_for(chrono::milliseconds(100)); // 100 millisecond delay
            cout << "\b|"; // Loading element: phase 2
            this_thread::sleep_for(chrono::milliseconds(100)); // 100 millisecond delay
            cout << "\b/"; // Loading element: phase 3
            this_thread::sleep_for(chrono::milliseconds(100)); // 100 millisecond delay
            cout << "\b-"; // Loading element: phase 4
            this_thread::sleep_for(chrono::milliseconds(100)); // 100 millisecond delay
        }

        // Setting up 2-second delay before picking a random colour
        this_thread::sleep_for(chrono::seconds(2));

        // Selecting and displaying the random colour
        int randomIndex = rand() % 7;
        cout << "\b\b\b\b\b\b\b"; // Clears the loading animation
        cout << "\nRandomly Picked Colour: " << colours[randomIndex] << endl;
    }
};

// Main function
int main() {

    // Required line of code
    cout << "Precious Sunday | CIS 250 | Random Colour Picker | 06/02/2024" << endl;
    cout << "---------------------------------------------------------------" << endl; // Visual indentation
    cout << "\n"; // Visual indentation

    // Random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    // Defining an instance of the ColourPicker class.
    ColourPicker colourPicker;

    /** Setting up a Do-While loop for reusability
    * This ensures the user can reuse the code to generate more colours as necessary
    */
    string input; // Containter to collect user input
    do {
        // Printing out all available colours
        cout << "All Available Colours: ";
        colourPicker.printColours();

        /** Calling the random colour picker function
        * This calls the function and a random colour is picked to be displayed
        */
        colourPicker.pickRandomColourWithLoadingEffect();

        cout << "\nWould you like to generate another colour? (Y/N): ";
        cin >> input;

        // Clearing the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (input == "y" || input == "Y" || input == "yes" || input == "Yes" || input == "YES" || input == "yeah" || input == "yea");
    // Edge cases were included in the while loop to account for a number of different input variations

    cout << "Exiting program..." << endl;

    return 0; // Program exit
}

