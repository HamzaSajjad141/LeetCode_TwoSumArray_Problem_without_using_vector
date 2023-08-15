# LeetCode Two Sum Array Problem (Without Using Vector)

This is a simple C++ program that demonstrates the Two Sum algorithm without using the `vector` container. The program takes an array of integers and a target sum as input and finds a pair of indices that correspond to two elements in the array whose sum equals the target.

## Table of Contents

- [Overview](#overview)
- [Usage](#usage)
- [How It Works](#how-it-works)
- [Example](#example)



## Overview

The `twoSum` function implements the Two Sum algorithm using a nested loop to find the indices of two elements whose sum matches the target sum. If a solution is found, the function populates the `indices` array with the indices of the two elements. If no solution is found, it sets both indices to -1.

## Usage

1. Clone this repository to your local machine.
2. Navigate to the project directory.
3. Compile the program using a C++ compiler (e.g., g++).
4. Run the executable.
5. Follow the on-screen prompts to input the array elements and target sum.

## How It Works

The `twoSum` function iterates through the array using two nested loops. It checks each pair of elements to see if their sum matches the target sum. If a solution is found, the function stores the indices of the two elements in the `indices` array.

## Example

```cpp
Enter the number of elements: 5
Enter the array elements: 2 7 11 15 3
Enter the target sum: 9
0 4




