# md-cs211-lab10
Michael Danh
CS211 Lab 10 Submission
Lab 10: Functions, Arrays, Logic & Patterns
Due: Tuesday, November 18, 2025 – 8:00 PM
Submit via: GitHub Repository
1. Write a function that takes the radius of a circle as a parameter and returns both:
• Area: A=πr2
• Circumference: C = 2πr
The function should print the results with clear labels.
2. Write a C++ function that takes:
• int age
• string citizenship
The function prints what amenities the guest can access based on:
Citizenship Age Condition Access
American ≥ 21 All amenities + casino
American < 21 Amenities except casino
Non-American ≥ 21 All amenities + casino + $15 fee
Non-American 18–20 Amenities except casino
Any < 18 Not allowed into resort
3. Write a function that:
• Takes an array (or vector) of pet names
• Takes a second input: a single name to search for
• Counts how many times the name appears in the list (ignore uppercase/lowercase)
• Prints the number of matches
Example
Input list:
{"Bella", "Max", "bella", "RocKy", "bELLA", “BELLA”}
Search for: "Bella"
Output:
• Bella appears 4 times.
4. Write a program that takes:
• width (float)
• height (float)
• radius of a circle (float)
Determine whether the rectangle fits inside a circle. (return true or false)
Hint: A rectangle fits inside a circle if its diagonal <= circle diameter.
5. Write a program that:
• Reads a floating-point number of hours
• Converts it to seconds
• Prints the result as the closest integer
6. Ask the user for an integer n.
• Print the following pattern:
Example (n = 5):
. . . . *
. . . * *
. . * * *
. * * * *
* * * * *
7. Ask the user for an integer n.
• Print the following pattern:
Example (n = 5):
. . . . *
. . . * *
. . * * *
. * * * *
* * * * *
. * * * *
. . * * *
. . . * *
. . . . *
8. Write a function that:
• Accepts a vector of floating-point temperature readings
• Determines:
o Highest temperature
o Lowest temperature
o Average temperature
The function should:
• Print all three values
• Return the average temperature
Example input:
{73.5, 68.0, 70.2, 75.1, 71.3}
Expected output:
Highest: 75.1
Lowest: 68.0
Average: 71.62
9. Write a function that:
• Takes an integer n
• Converts it to binary
• Prints the binary result
Example:
Input: 9
Output: 1001
10. Write a function to swap two integer values.
Example:
Before: int1 = 2, int2 = 4
After: int1 = 4, int2 = 2
