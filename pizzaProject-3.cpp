// pizzaProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;                             
using std::cout;
using std::cin;

int main() 
{

    vector<string> pizza;
    vector<string> mesurmenet(9);
    vector<string> toppings(8);
   
    char crustChoice, sauceChoice, amountChoice;
    // add strings to toppings print it out then when user selects remove the topping from vector 

    // Display crust options to the user
    cout << "Select pizza crust type:" << endl;
    cout << "A. Regular Crust" << endl;
    cout << "B. Gluten-Free Crust" << endl;
    cout << "Enter your choice (A or B): " << endl;
    cin >> crustChoice;

    string crust;
    // Use a switch statement to handle the user's choice on crust 
    switch (crustChoice)
    {
    case 'A':
    case 'a':
        cout << "You selected Regular Crust.";
        crust = "Regular Crust";
        break;
    case 'B':
    case 'b':
        cout << "You selected Gluten-Free Crust.";
        crust = "Gluten-Free Crust";
        break;
    default:
        cout << "Invalid choice. Please enter A or B.";
        break;
    }
    // ask the user to select sauce 
    cout << "Select sauce option:" << endl;
    cout << "A. red sauce" << endl;
    cout << "B. no red sauce" << endl;
    cout << "Enter your choice (A or B): " << endl;
    cin >> sauceChoice;

    string sauce;
    string sauceMesurment;
    // ask for sauce  measurment from user 
    switch (sauceChoice)
    {
    case 'A':
    case 'a':
        sauce = "Red Sauce";

        // Sauce amount selection
        cout << "Choose amount of Red Sauce:" << endl;
        cout << "a. 1/4 cup" << endl;
        cout << "b. 1/2 cup" << endl;
        cout << "Enter your choice for amount (a or b): ";
        cin >> amountChoice;

        switch (amountChoice)
        {
        case 'a':
            sauceMesurment = " (1/4 cup)";
            break;
        case 'b':
            sauceMesurment = " (1/2 cup)";
            break;
        default:
            cout << "Invalid amount choice. Please enter a or b." << endl;

        }
        break;
    case 'B':
    case 'b':
        sauce = "No Sauce";
        break;
    default:
        cout << "Invalid sauce choice. Please enter 1 or 2.\n";
        break;
    }
    // variables for toppings
    int numToppings = 0;
    char toppingsChoice; 
    char choice;
    int counter;
    
    
     // will ask for toppings selection untill user reaches 8 toppings 
         for (int j = 0; j < 9; j++)
         {
             cout << "please choose one ingredient option:" << endl;
             cout << "a. pizza cheese   " << "b. diced onion   " << "c. diced green peppers   " << "d. sliced mushroom   " << endl;
             cout << "e. Diced jalapenos   " << "f. Sardines   " << "g. Pineapple Chunks   " << "h. Tofu   " << endl;
             cout << "i. Pepperoni    " << "j. Ham Chunks   " << "k. Dry red pepper    " << "l. Dried basil    " << endl;
             cout << "Enter your choice: ";
             cin >> toppingsChoice;
             // will add toppings election to vector then ask for measurements of topping, will add that to mesuremnts vector
             if (toppingsChoice == 'a')
             {
                 int counter = j;
                 toppings.at(j) = "Pizza cheese ";
                 cout << "select amount of cheese :" << endl;

                 cout << "A.1 / 4 cup , B.1 / 2 cup C.1 cup D.1 1 / 2 cup E.2 cups" << endl;
                 cout << " ";
                 cin >> amountChoice;
                 switch (amountChoice)
                 {
                 case 'a':
                 case 'A':
                     mesurmenet.at(j) = "1 / 4 cup";
                     break;
                 case 'b':
                 case 'B':
                     mesurmenet.at(j) = " 1/2 cup";
                     break;
                 case 'c':
                 case 'C':
                     mesurmenet.at(j) = " 1 cup";
                     break;
                 case 'd':
                 case 'D':
                     mesurmenet.at(j) = " 1 1/2 cup";
                     break;
                 case 'e':
                 case 'E':
                     mesurmenet.at(j) = " 2 cup";
                     break;
                 default:
                     cout << "Invalid amount choice. Please enter a valid choice" << endl;
                 }

             }
             else if (toppingsChoice == 'b')
             {
                 int counter = j;
                 toppings.at(j) = "Diced onion ";

                 cout << "select amount of Diced onion:" << endl;

                 cout << "A.1 / 4 cup , B.1 / 2 cup C.1 cup D.1 1 / 2 cup E.2 cups" << endl;
                 cout << " ";
                 cin >> amountChoice;
                 switch (amountChoice)
                 {
                 case 'a':
                 case 'A':
                     mesurmenet.at(j) = "1 / 4 cup";
                     break;
                 case 'b':
                 case 'B':
                     mesurmenet.at(j) = " 1/2 cup";
                     break;
                 case 'c':
                 case 'C':
                     mesurmenet.at(j) = " 1 cup";
                     break;
                 case 'd':
                 case 'D':
                     mesurmenet.at(j) = " 1 1/2 cup";
                     break;
                 case 'e':
                 case 'E':
                     mesurmenet.at(j) = " 2 cup";
                     break;
                 default:
                     cout << "Invalid amount choice. Please enter a valid choice" << endl;
                 }
             }
             else if (toppingsChoice == 'c')
             {
                 int counter = j;
                 toppings.at(j) = "Diced green peppers ";
                 cout << "select amount of Diced green peppers:" << endl;

                 cout << "A.1 / 4 cup , B.1 / 2 cup C.1 cup D.1 1 / 2 cup E.2 cups" << endl;
                 cout << " ";
                 cin >> amountChoice;

                 switch (amountChoice)
                 {
                 case 'a':
                 case 'A':
                     mesurmenet.at(j) = "1 / 4 cup";
                     break;
                 case 'b':
                 case 'B':
                     mesurmenet.at(j) = " 1/2 cup";
                     break;
                 case 'c':
                 case 'C':
                     mesurmenet.at(j) = " 1 cup";
                     break;
                 case 'd':
                 case 'D':
                     mesurmenet.at(j) = " 1 1/2 cup";
                     break;
                 case 'e':
                 case 'E':
                     mesurmenet.at(j) = " 2 cup";
                     break;
                 default:
                     cout << "Invalid amount choice. Please enter a valid choice" << endl;
                 }
             }
             else if (toppingsChoice == 'd')
             {
                 int counter = j;
                 toppings.at(j) = "Sliced mushroom ";
                 cout << "select amount of sliced mushrooms:" << endl;

                 cout << "A.1 / 4 cup , B.1 / 2 cup C.1 cup D.1 1 / 2 cup E.2 cups" << endl;
                 cout << " ";
                 cin >> amountChoice;

                 switch (amountChoice)
                 {
                 case 'a':
                 case 'A':
                     mesurmenet.at(j) = "1 / 4 cup";
                     break;
                 case 'b':
                 case 'B':
                     mesurmenet.at(j) = " 1/2 cup";
                     break;
                 case 'c':
                 case 'C':
                     mesurmenet.at(j) = " 1 cup";
                     break;
                 case 'd':
                 case 'D':
                     mesurmenet.at(j) = " 1 1/2 cup";
                     break;
                 case 'e':
                 case 'E':
                     mesurmenet.at(j) = " 2 cup";
                     break;
                 default:
                     cout << "Invalid amount choice. Please enter a valid choice" << endl;
                 }
             }
             else if (toppingsChoice == 'e')
             {
                 int counter = j;
                 toppings.at(j) = "Diced jalapenos ";
                 cout << "select amount of Diced jalapenos:" << endl;

                 cout << "A.1 / 4 cup , B.1 / 2 cup C.1 cup D.1 1 / 2 cup E.2 cups" << endl;
                 cout << " ";
                 cin >> amountChoice;

                 switch (amountChoice)
                 {
                 case 'a':
                 case 'A':
                     mesurmenet.at(j) = "1 / 4 cup";
                     break;
                 case 'b':
                 case 'B':
                     mesurmenet.at(j) = " 1/2 cup";
                     break;
                 case 'c':
                 case 'C':
                     mesurmenet.at(j) = " 1 cup";
                     break;
                 case 'd':
                 case 'D':
                     mesurmenet.at(j) = " 1 1/2 cup";
                     break;
                 case 'e':
                 case 'E':
                     mesurmenet.at(j) = " 2 cup";
                     break;
                 default:
                     cout << "Invalid amount choice. Please enter a valid choice" << endl;
                 }
             }
             else if (toppingsChoice == 'f')
             {
                 int counter = j;
                 toppings.at(j) = "Sardines ";
                 cout << "select amount of sardines:" << endl;

                 cout << "A.one , B.two C.three D.four " << endl;
                 cout << " ";
                 cin >> amountChoice;

                 switch (amountChoice)
                 {
                 case 'a':
                 case 'A':
                     mesurmenet.at(j) = "one";
                     break;
                 case 'b':
                 case 'B':
                     mesurmenet.at(j) = " two";
                     break;
                 case 'c':
                 case 'C':
                     mesurmenet.at(j) = " three";
                     break;
                 case 'd':
                 case 'D':
                     mesurmenet.at(j) = "four";
                     break;
                 default:
                     cout << "Invalid amount choice. Please enter a valid choice" << endl;
                 }
             }
             else if (toppingsChoice == 'g')
             {
                 int counter = j;
                 toppings.at(j) = "Pineapple Chunks ";
                 cout << "select amount of pineapple:" << endl;

                 cout << "A.two pieces , B.three pieces C.four pieces" << endl;
                 cout << " ";
                 cin >> amountChoice;

                 switch (amountChoice)
                 {
                 case 'a':
                 case 'A':
                     mesurmenet.at(j) = "two pieces";
                     break;
                 case 'b':
                 case 'B':
                     mesurmenet.at(j) = " three pieces";
                     break;
                 case 'c':
                 case 'C':
                     mesurmenet.at(j) = "four pieces";
                     break;
                 default:
                     cout << "Invalid amount choice. Please enter a valid choice." << endl;
                 }
             }
             else if (toppingsChoice == 'h')
             {
                 int counter = j;
                 toppings.at(j) = "Tofu ";
                 cout << "select amount of tofu:" << endl;

                 cout << "A.1 / 4 cup , B.1 / 2 cup C.1 cup D.1 1 / 2 cup E.2 cups" << endl;
                 cout << " ";
                 cin >> amountChoice;

                 switch (amountChoice)
                 {
                 case 'a':
                 case 'A':
                     mesurmenet.at(j) = "1 / 4 cup";
                     break;
                 case 'b':
                 case 'B':
                     mesurmenet.at(j) = " 1/2 cup";
                     break;
                 case 'c':
                 case 'C':
                     mesurmenet.at(j) = " 1 cup";
                     break;
                 case 'd':
                 case 'D':
                     mesurmenet.at(j) = " 1 1/2 cup";
                     break;
                 case 'e':
                 case 'E':
                     mesurmenet.at(j) = " 2 cup";
                     break;
                 default:
                     cout << "Invalid amount choice. Please enter a valid choice." << endl;
                 }
                 
             }
             else if (toppingsChoice == 'i')
             {
                 int counter = j;
                 toppings.at(j) = "Pepperoni ";
                 cout << "select amount of Pepperoni:" << endl;

                 cout << "A.two pieces , B.three pieces C.four pieces" << endl;
                 cout << " ";
                 cin >> amountChoice;

                 switch (amountChoice)
                 {
                 case 'a':
                 case 'A':
                     mesurmenet.at(j) = "two pieces";
                     break;
                 case 'b':
                 case 'B':
                     mesurmenet.at(j) = " three pieces";
                     break;
                 case 'c':
                 case 'C':
                     mesurmenet.at(j) = "four pieces";
                     break;
                 default:
                     cout << "Invalid amount choice. Please enter a valid choice" << endl;
                 }
             }
             else if (toppingsChoice == 'j')
             {
                 int counter = j;
                 toppings.at(j) = "Ham Chunks ";
                 mesurmenet.at(j) = "4 pieaces";
                 cout << "select amount of Ham Chunks:" << endl;

                 cout << "A.two pieces , B.three pieces C.four pieces" << endl;
                 cout << " ";
                 cin >> amountChoice;

                 switch (amountChoice)
                 {
                 case 'a':
                 case 'A':
                     mesurmenet.at(j) = "two pieces";
                     break;
                 case 'b':
                 case 'B':
                     mesurmenet.at(j) = " three pieces";
                     break;
                 case 'c':
                 case 'C':
                     mesurmenet.at(j) = "four pieces";
                     break;
                 default:
                     cout << "Invalid amount choice. Please enter a valid choice" << endl;
                 }


             }
             else if (toppingsChoice == 'k')
             {
                 int counter = j;
                 toppings.at(j) = "Dry red pepper ";
                 cout << "select amount of Dry red peppers:" << endl;

                 cout << "A.Generous Sprinkle , B. two Generous Sprinkles C. three Generous Sprinkles D.Four Generous Sprinkles" << endl;
                 cout << " ";
                 cin >> amountChoice;

                 switch (amountChoice)
                 {
                 case 'a':
                 case 'A':
                     mesurmenet.at(j) = "Generous Sprinkle";
                     break;
                 case 'b':
                 case 'B':
                     mesurmenet.at(j) = "two Generous Sprinkles";
                     break;
                 case 'c':
                 case 'C':
                     mesurmenet.at(j) = "three Generous Sprinkles";
                     break;
                 case 'd':
                 case 'D':
                     mesurmenet.at(j) = "Four Generous Sprinkles";
                     break;
                 default:
                     cout << "Invalid amount choice. Please enter a valid choice" << endl;
                 }

             }
             else if (toppingsChoice == 'l')
             {
                 int counter = j;
                 toppings.at(j) = "Dried basil ";
                 cout << "select amount of Dried Basil:" << endl;

                 cout << "A.Generous Sprinkle , B. two Generous Sprinkles C. three Generous Sprinkles D.Four Generous Sprinkles" << endl;
                 cout << " ";
                 cin >> amountChoice;

                 switch (amountChoice)
                 {
                 case 'a':
                 case 'A':
                     mesurmenet.at(j) = "Generous Sprinkle";
                     break;
                 case 'b':
                 case 'B':
                     mesurmenet.at(j) = "two Generous Sprinkles";
                     break;
                 case 'c':
                 case 'C':
                     mesurmenet.at(j) = "three Generous Sprinkles";
                     break;
                 case 'd':
                 case 'D':
                     mesurmenet.at(j) = "Four Generous Sprinkles";
                     break;
                 default:
                     cout << "Invalid amount choice. Please enter a valid choice" << endl;
                 }

             
             }
             //after selection of toppings ask for  anther selection 
             cout << " would you like to add another topping ( y or n)" << endl;
             cin >> choice;
             if (choice == 'N' || choice == 'n')
             {
                 break;
             }
             else if (choice == 'Y' || choice == 'y')
             {
                 continue;
             }
             else
             {
                 cout << "Please enter a vaild choice" << endl;

             }

             }
        //print pizza recipe and instructions

         cout << "your pizza recipe :" << endl; 
         
         cout << crust << endl;
         cout << sauce << sauceMesurment << endl; 

         for (int p = 0; p < toppings.size(); p++) 
         {
             cout << toppings[p] << " " << mesurmenet[p] << endl;
         }
         cout << "pizza is to be appropriately cooked until crust is cooked and toppings are warmed " << endl;
             



    return 0;

}


    




        
    



