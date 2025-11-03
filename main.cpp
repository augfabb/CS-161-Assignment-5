
// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 
// Participation ✅: 
// Challenge ✅:
// Labs ✅:


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, char* argv[]) { 

    int num_people = 0;
    double average_slices = 0;
    double pizza_cost = 0;
    double total_pizza_cost = 0;
    int total_cost = 0;
    const double sales_tax = 0.07;
    double total_tax = 0.2;

    const double delivery_fee;
    double total_delivery_cost;
    
    int pizza_count = 0;
    double frac_pizzas = 0;

    char answer = " ";

    cout << "Welcome to my Pizza Party!!" << endl;
    cout << "Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space:";

    //calc pizzas needed
    cin >> num_people >> average_slices >> pizza_cost;
    frac_pizzas = num_people * average_slices;
    pizza_count = ceil(frac_pizzas);
    //other calc
    total_pizza_cost = pizza_cost * pizza_count;
    total_tax = total_pizza_cost * sales_tax;
    total_delivery_cost = (total_pizza_cost + total_tax) * delivery_fee;
    total_cost = total_pizza_cost + total_tax + total_delivery_cost;
    //main output
    cout << "\nNumber of pizzas: $" << pizza_count << endl;
    cout << "Cost of pizzas: $" << total_pizza_cost << endl;
    cout << "Tax:             $" << total_tax << endl;
    cout << "Delivery:        $" << total_delivery_cost << endl;
    cout << "Total Cost: $"    << total_cost << endl; 

    cout << "\nDo you want to enter more (y/n): ";


    





  
  return 0;
}




// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/