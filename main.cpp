
// ------------- FILE HEADER -------------
// Author ✅: August Fabbri
// Assignment ✅: 5
// Date ✅: 11/2
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 5
// Participation ✅: 75%
// Challenge ✅: 60%
// Labs ✅: 100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:1
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: yes
// B. OUTPUT ✅: yes
// C. CALCULATIONS ✅: yes
// D. LOGIC and ALGORITHMS ✅: yes
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: yes
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
int num_people = 0;
double average_slices = 0;
double pizza_cost = 0;

B. OUTPUT
double total_pizza_cost = 0;
double total_cost = 0.00;
double total_tax = 0.0;
double total_delivery_cost = 0.0;

C. CALCULATIONS
Calculations are in Algorithms below.
D. LOGIC and ALGORITHMS              
  DO
      DISPLAY prompt: "Enter the number of people, average slices per person, and cost of a pizza:"
      INPUT num_people, average_slices, pizza_cost

      // Calculate number of pizzas
      frac_pizzas = (num_people * average_slices) / 8
      pizza_count = CEILING(frac_pizzas)

      // Calculate costs
      total_pizza_cost = pizza_cost * pizza_count
      total_tax = total_pizza_cost * sales_tax
      total_delivery_cost = (total_pizza_cost + total_tax) * delivery_fee
      total_cost = total_pizza_cost + total_tax + total_delivery_cost

      // Display cost summary for this order
      DISPLAY "Number of pizzas: ", pizza_count
      DISPLAY "Cost of pizzas: $", total_pizza_cost
      DISPLAY "Tax: $", total_tax
      DISPLAY "Delivery: $", total_delivery_cost
      DISPLAY "Total Cost: $", total_cost

      // Update totals and maximums
      loop_count = loop_count + 1
      pizza_sum = pizza_sum + pizza_count

      IF total_cost > max_cost THEN
          max_cost = total_cost
      END IF

      IF num_people > max_people THEN
          max_people = num_people
      END IF

      DISPLAY "Do you want to enter more (y/n)?"
      INPUT answer

  WHILE answer == 'y'

  // Calculate averages
  average_pizzas = pizza_sum / loop_count

  // Display final results
  DISPLAY "Number of entries: ", loop_count
  DISPLAY "Total number of pizzas: ", pizza_sum
  DISPLAY "Average number of pizzas: ", average_pizzas
  DISPLAY "Maximum number of people: ", max_people
  DISPLAY "Maximum cost of pizzas: $", max_cost
  DISPLAY "Thanks for using my program!"

END PROGRAM


SAMPLE RUNS
Copy from assignment document.

*/