# lab0-memory-handling-f21

### Goals for this lab assignment are
1.	Learn how to correctly implement the three class methods required for any class that does dynamic memory allocation
    - Destructor
    - Copy constructor
    - Copy assignment operator
2.	Use valgrind to determine that your code does not have any memory leaks and uses memory correctly
### Step 1:  Add two lines of code to main.cpp 
1.	Look for the comment on line 20 and add one more line that declares a variable named *student5* of type *Student*.  You should use your own name for the first parameter and 5 for the second parameter.
2.	Look for the comment on line 31 and add one more line that enrolls *student5* in *course2*

### Step 2:  Run your code in CLion.  
Verify that the output looks like this (except your name should appear instead of my name.)
![image](https://user-images.githubusercontent.com/58283777/133868262-661c1fd1-07ff-4398-9586-9db726c925f0.png)

### Step 3: Switch to Linux and run *valgrind*
Take a screenshot of the output that includes at least this much of the output from *valgrind*
![image](https://user-images.githubusercontent.com/58283777/133868216-ebd50f5c-0e89-4cb3-8880-7eb1a1a427b2.png)
Save the your screenshot in a file called *ValgrindScreenshot* in the same directory as *main.cpp.*  
Use *Github Desktop* to first commit your screenshot file to main, and then push it to origin.

### Step 4: Fix the program so it runs correctly and *valgrind* reports no errors
Since both classes allocate memory you will need to make sure both classes conform to the *rule of three*.  In addition, you can expect there will be at least one other memory handling bug that you will need to fix.

### Step 5: Make sure all your changes along with the screenshot are pushed to origin by the assignment due date.
