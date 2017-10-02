#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    // Problem 1
    /*
    1. True/False: an int uses 4 bytes in memory on all systems
    ANSWER: false
    */

    // Problem 2
    /* True/False: a double typically offers better precision than a float.
    ANSWER: true
    */

    // Problem 3
    /*
    True/False: The following are equivalent assuming isPair is of type bool:
    if (isPair)
    if (isPair == true)
    ANSWER: true
    */

    // Problem 4
    /*
    What will the value of x be after this code snippet:
    int x=3;
    x*=4;
    ANSWER: 12
    */

    // Problem 5
    /* What will the value of x be after this code snippet:
    int x=37;
    x = x % 10;
    ANSWER: 7
    */

    // Problem 6
    /* string slogan = 'Go Giants!';

     string slogan = "Go Giants!";
     ANSWER = needs " "
    */

    // Problem 7
    /* What is a potential problem with the below:
    int x=4.5;
    ANSWER = because the data type is int, anything after the decimal point will get cut off
    */

    // Problem 8
    /*
    Write a C++ code snippet to input a number from the user and output double the number to the screen.

    int num;

    cout << "Enter a number: ";
    cin >> num;
    cout << num*2 << endl;

    */


    // Problem 9
    /*
    Assume x is an int which has been declared and assigned a valid value. Is the value of x guaranteed to change after this code snippet:

    if (x < 0)
    {
        x--;
    }
    else
    {
        x++;
    }
    cout << x << endl;

    ANSWER = yes

    */

    // Problem 10
    /* Consider the below code snippet. Will it compile? What is a likely error?

    if (score = 0)
        cout << "We had a shutout today!\n";

    ANSWER = it will compile, but it's assigning 0 to score
    */

    // Problem 11
    /*
    Write a loop which prints out the even numbers from 0-100, including 0 and 100, to the screen.

    for (int i = 0; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
    */

    /*
    for (int i = 0; i <= 100; i+=2)
    {
        cout << i << endl;
    }
    */

    // Problem 12

    /*
    Same as (11) but count down from 100 to 0, even numbers only.

    for (int i = 100; i >= 0; i-=2)
    {
        cout << i << endl;
    }
    */

    /*
    for (int i = 100; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
    */

    // Problem 13

    /*
    True/False: every while loop is guaranteed to execute at least one time.
    ANSWER: false, the do-while loop executes at least once
    */

    // Problem 14
    /*

    ifstream inFile;
    inFile.open("cards.txt"); // open file

    int num;
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        inFile >> num;
        sum += num;
    }
    cout << sum / 3.0 << endl; // setting to 3.0 to convert output from int to double

    inFile.close(); // close file

    */


    // Problem 15
    /* True/False: the following function prototype takes an array as a parameter. If you change the value of the array's elements within the function, the changes persist after the function returns.
    void sortCards(int cards[]);

    ANSWER: true
    */

    // Problem 16
    /*
    Write a function which takes an int array and its size and returns a bool -- true if one or more of the ints is a multiple of 3, false if not. Demonstrate that it works in main() by declaring an array of ints, giving it some values, and
    calling the function.. Here is the function prototype:
    // int array[]: array to search
    // size: number of elements in the array
    bool containsMultipleOf3(const int array[], int size);

    #include <iostream>
    using namespace std;

    bool containsMultipleOf3(int array[], int size);

    int main()
    {
        const int SIZE = 5;
        int myArray[SIZE] = {5, 10, 15, 24, 4};

        if (containsMultipleOf3(myArray, SIZE))
        {
            cout << "Found it!\n" << endl;
        }
        return 0;
    }


    bool containsMultipleOf3(int array[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            if (array[i] % 3 == 0)
            {
                return true;
            }
        }
        return false;
    }

    */

    // Problem 17
    /* Consider the following code snippet. Will it compile?
    What is wrong with it?
    int cards[3];
    cards[1] = 2;
    cards[2] = 4;
    cards[3] = 7;

    ANSWER: Code will compile, out of bound error
    */

    // Problem 18
    /* Assume the below 2D array has been assigned valid integer values. NUM_PLAYERS and NUM_CARDS are global const ints with positive values. Write a code snippet which computes the total of all the elements in the 2D array.

    const int NUM_PLAYERS = 4;
    const int NUM_CARDS = 4;
    int cards[NUM_PLAYERS][NUM_CARDS];
    int total = 0;

    for (int i = 0; i < NUM_PLAYERS; i++)
    {
        for (int j = 0; j < NUM_CARDS; j++)
        {
            total += cards[i][j];
        }
        cout << "Total: " << total << endl;
        return 0;
    }
    */

    // Problem 19
    /*
    Assuming an int is size 4 bytes, what is the size in memory of the below array:
    int cards[10] = {7, 4, 7, 5, 7};
    ANSWER: 40 bytes b/c 4 bytes * 10 elements = 40
    */

    // Problem 20
    /*
    In this array, what is the value of the below
    elements:
    cards[1]; ANSWER: 4
    cards[8]; ANSWER: 0
    */

    // Problem 21
    /*
    Assume you have an array with 128 integers which is sorted from lowest to highest. You are searching for a value which is contained in the array
    using the binary search algorithm. What is the minimum number of comparisons it will take?
    2 4 8 16 32 64 128 ANSWER = 7

    You are searching for a value which is contained in the array using the linear search algorithm. What is the maximum number of comparisons it will take?
    ANSWER = 128
    */

    // Problem 22
    /*
    True/False: in order to use the linear search algorithm on an array, the array must be sorted
    ANSWER = false
    */

    // Problem 23
    /*
    True/False: a bubble sort on an integer array is guaranteed to do at least one swap
    ANSWER = false, because the array could have been sorted already
    */

    // Problem 24
    /*
    ANSWER = The number of checks in each iteration decreases. Bubble sort checks every element every iteration.
    */

    // Problem 25
    /*
    Write a function which takes an array of ints and size of array as parameters, and returns the maximum value in the array. It must have the following signature: int findMax(int array[], int size);

    int findMax(int array[], int size);

    #include <iostream>
    using namespace std;

    int main()
    {
    const int SIZE = 5;
    int myArray[SIZE] = {5, 10, 15, 24, 4};
    if (findMax(myArray, SIZE))
        {
            cout << "Found it!\n" << endl;
        }

    return 0;
    }


    int findMax(int array[], int size)
    {
        int maxValue = array[0];
        for (int i = 1; i < size; i++)
        {
            if (maxValue < array[i])
            {
                maxValue = array[i];
            }
        }
        return maxValue;
    }

    */

    return 0;
}

