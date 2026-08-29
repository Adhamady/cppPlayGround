#include <iostream>
#include <string>

/*
    ============================================================
                    C++ FUNCTIONS
    ============================================================

    A function is a reusable block of code that performs a task.

    General form:

        return_type function_name(parameters)
        {
            // function body
        }

    Example:

        int add(int a, int b)
        {
            return a + b;
        }

    Important terminology:

        function declaration
        function definition
        function call
        parameter
        argument
        return value
*/

/*
    ============================================================
                    1. FUNCTION DECLARATION
    ============================================================

    A declaration tells the compiler that a function exists.

    It does NOT contain the implementation.

    The parameter names are optional in a declaration.

        void greetUser(const std::string&);

    is valid.

    You can also write:

        void greetUser(const std::string& userName);

    Both mean the same thing.
*/

void greet();

void greetUser(const std::string &userName);

int add(int, int);

/*
    ============================================================
                    2. FUNCTION WITH NO PARAMETERS
    ============================================================
*/

void greet()
{
    std::cout << "Hello, from function\n";
}

/*
    ============================================================
                    3. FUNCTION WITH PARAMETER
    ============================================================

    userName is a parameter.

    When the function is called:

        greetUser("Adham");

    "Adham" is the argument.

    const std::string& means:

        const → function cannot modify userName
        &     → no copy of the string is made
*/
void greetUser(const std::string &userName)
{
    std::cout << "Hello, " << userName << " from function\n";
}

/*
    ============================================================
                    4. FUNCTION WITH RETURN VALUE
    ============================================================

    The function returns an int.

    return sends the result back to the caller.
*/
int add(int firstNum, int secondNum)
{
    return firstNum + secondNum;
}

/*
    ============================================================
                    5. PASS BY VALUE
    ============================================================

    The function receives a COPY of x.

    Changing value does NOT change x in main.
*/

void changeValue(int value)
{
    value = 100;
}

/*
    ============================================================
                    6. PASS BY REFERENCE
    ============================================================

    The parameter is a reference to the original object.

    Changing value DOES change x in main.
*/

void changeValueByReference(int &value)
{
    value = 100;
}

/*
    ============================================================
                    7. CONST REFERENCE
    ============================================================

    const reference:

        - does not create a copy
        - cannot modify the original object

    This is very common with large objects such as std::string.
*/

void printName(const std::string &name)
{
    std::cout << "Name: " << name << '\n';

    // name = "Other";    // ERROR
}

/*
    ============================================================
                    8. POINTER PARAMETER
    ============================================================

    A pointer can also allow a function to modify the caller's
    object.

    The caller passes the ADDRESS.
*/

void changeValueByPointer(int *value)
{
    if (value != nullptr)
    {
        *value = 200;
    }
}

/*
    ============================================================
                    9. FUNCTION OVERLOADING
    ============================================================

    Same function name, different parameter list.

    The compiler chooses the appropriate function based on
    the arguments.
*/

void printValue(int value)
{
    std::cout << "Integer: " << value << '\n';
}

void printValue(double value)
{
    std::cout << "Double: " << value << '\n';
}

void printValue(const std::string &value)
{
    std::cout << "String: " << value << '\n';
}

/*
    ============================================================
                    10. DIFFERENT NUMBER OF PARAMETERS
    ============================================================
*/

int multiply(int a, int b)
{
    return a * b;
}

int multiply(int a, int b, int c)
{
    return a * b * c;
}

/*
    ============================================================
                    11. DEFAULT ARGUMENT
    ============================================================

    If the caller does not provide exponent,
    the default value 2 is used.

        power(5)      → 25
        power(5, 3)   → 125

    Default arguments are normally specified in the declaration.
*/

int power(int number, int exponent = 2);

/*
    Function definition does not need to repeat
    the default argument.
*/

int power(int number, int exponent)
{
    int result = 1;

    for (int i = 0; i < exponent; ++i)
    {
        result *= number;
    }

    return result;
}

/*
    ============================================================
                    12. FUNCTION RETURNING BOOL
    ============================================================
*/

bool isEven(int number)
{
    return number % 2 == 0;
}

/*
    ============================================================
                    13. EARLY RETURN
    ============================================================

    A function can return before reaching the end.
*/

int absoluteValue(int number)
{
    if (number < 0)
    {
        return -number;
    }

    return number;
}

/*
    ============================================================
                    14. MULTIPLE OUTPUTS USING REFERENCES
    ============================================================

    A function can modify multiple variables through references.

    Here:

        sum
        difference

    are output parameters.
*/

void calculate(int a, int b, int &sum, int &difference)
{
    sum = a + b;
    difference = a - b;
}

/*
    ============================================================
                    15. RECURSION
    ============================================================

    A function can call itself.

    factorial(5):

        5 * factorial(4)
        5 * 4 * factorial(3)
        5 * 4 * 3 * factorial(2)
        5 * 4 * 3 * 2 * factorial(1)
        5 * 4 * 3 * 2 * 1
*/

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    /*
        ========================================================
                        FUNCTION CALLS
        ========================================================
    */

    greet();

    greetUser("Adham");

    /*
        ========================================================
                        RETURN VALUE
        ========================================================
    */

    int addResult = add(3, 4);

    std::cout << "Add result: "
              << addResult
              << '\n';

    /*
        ========================================================
                        PASS BY VALUE
        ========================================================
    */

    int x = 10;

    changeValue(x);

    std::cout << "After pass by value: "
              << x
              << '\n';

    // x is still 10.

    /*
        ========================================================
                        PASS BY REFERENCE
        ========================================================
    */

    changeValueByReference(x);

    std::cout << "After pass by reference: "
              << x
              << '\n';

    // x is now 100.

    /*
        ========================================================
                        PASS BY POINTER
        ========================================================
    */

    changeValueByPointer(&x);

    std::cout << "After pass by pointer: "
              << x
              << '\n';

    // x is now 200.

    /*
        ========================================================
                        CONST REFERENCE
        ========================================================
    */

    printName("Adham");

    /*
        ========================================================
                        FUNCTION OVERLOADING
        ========================================================
    */

    printValue(10);

    printValue(10.5);

    printValue("Hello");

    /*
        ========================================================
                    DIFFERENT NUMBER OF PARAMETERS
        ========================================================
    */

    std::cout << "2 numbers: "
              << multiply(2, 3)
              << '\n';

    std::cout << "3 numbers: "
              << multiply(2, 3, 4)
              << '\n';

    /*
        ========================================================
                        DEFAULT ARGUMENT
        ========================================================
    */

    std::cout << "Power: "
              << power(5)
              << '\n';

    std::cout << "Power: "
              << power(5, 3)
              << '\n';

    /*
        ========================================================
                        BOOL RETURN
        ========================================================
    */

    std::cout << std::boolalpha;

    std::cout << "Is 10 even? "
              << isEven(10)
              << '\n';

    std::cout << "Is 7 even? "
              << isEven(7)
              << '\n';

    /*
        ========================================================
                        MULTIPLE OUTPUTS
        ========================================================
    */

    int sum;
    int difference;

    calculate(10, 3, sum, difference);

    std::cout << "Sum: "
              << sum
              << '\n';

    std::cout << "Difference: "
              << difference
              << '\n';

    /*
        ========================================================
                        RECURSION
        ========================================================
    */

    std::cout << "5! = "
              << factorial(5)
              << '\n';

    return 0;
}