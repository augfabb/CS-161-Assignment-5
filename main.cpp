
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
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char* argv[]) { 

    int num_people = 0;
    double average_slices = 0;
    double pizza_cost = 0;
    double total_pizza_cost = 0;
    double total_cost = 0.00;
    const double sales_tax = 0.07;
    double total_tax = 0.0;

    const double delivery_fee = 0.2;
    double total_delivery_cost = 0.0;
    
    int pizza_count = 0;
    double frac_pizzas = 0;
    double average_pizzas = 0;
   
    char answer = 'y';

    int pizza_sum = 0;
    int loop_count = 0;

    int max_people = 0;
    double max_cost = 0;

    cout << "Welcome to my Pizza Party!!" << endl;
    
    cout << fixed << setprecision(2);
    //calc pizzas needed
 
    //main output
    do {
      cout << "Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: ";
      
      cin >> num_people >> average_slices >> pizza_cost;
      frac_pizzas = (num_people * average_slices) / 8.0;
      pizza_count = ceil(frac_pizzas);
    //other calc
      total_pizza_cost = pizza_cost * pizza_count;
      total_tax = total_pizza_cost * sales_tax;
      total_delivery_cost = (total_pizza_cost + total_tax) * delivery_fee;
      total_cost = total_pizza_cost + total_tax + total_delivery_cost;
      cout << "\nNumber of pizzas: " << pizza_count << endl;
      cout << "Cost of pizzas: $" << total_pizza_cost << endl;
      cout << "Tax:             $" << total_tax << endl;
      cout << "Delivery:        $" << total_delivery_cost << endl;
      cout << "Total Cost:      $" << total_cost << endl; 

      loop_count += 1;
      pizza_sum = pizza_sum + pizza_count;
      //max pizza cost
      if (total_cost > max_cost) {
        max_cost = total_cost;
      }
      // max people
      if (num_people > max_people){
        max_people = num_people;
      }
      
      cout << "\nDo you want to enter more (y/n): ";
      cin >> answer;
    } while (answer == 'y');

    average_pizzas = static_cast<double>(pizza_sum)/loop_count;

    //final output
    cout << "\nNumber of entries: " << loop_count << endl;
    cout << "Total number of pizzas: " << pizza_sum << endl;
    cout << fixed << setprecision(1) << "Average number of pizzas: " << average_pizzas << endl;
    cout << "Maximum number of people: " << max_people << endl;
    cout << fixed << setprecision(2) << "Maximum cost of pizzas: $" << max_cost << endl;

    cout << "Thanks for using my program!" << endl;
    

    





  
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