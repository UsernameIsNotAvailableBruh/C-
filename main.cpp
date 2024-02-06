/* Aajinkya Naik
 * 
 *
 */
#include <iostream> //for input & outputs
#include <vector> //for vectors
// comment

/*
 * 
 * Mulitline comment
 * 
 */
 
//sizeof function: sizeof or sizeof()
#include <climits> //size of types
#include <cfloat> //size of floats
//INT_MAX
//INT_MIN
//LONG_MAX
//LONG_MIN
//LLONG_MAX
//LLONG_MIN
//FLT_MAX
//FLT_MIN

//using namespace std; //using std, means theres no need for std:: (basically "from std import *" in python)
using std::cout; //same as "from std import cout" in python
using std::endl;
using std::cin;
using std::vector;
//int A; //global variable
int main(){
	//////////////////////////Section 6: Variables and Constants
	//variables & constants
	cout << "Types Mins & Max: " << endl << INT_MIN << " " << INT_MAX << " " << LONG_MAX << " " << LONG_MIN << " " << FLT_MAX << " " << FLT_MIN << endl << endl << endl;
	cout << "Sizeof(): "<< sizeof(int) << " " << sizeof(long) << " " << sizeof(long long) << " " << sizeof(const long long unsigned) << endl;
	const long long A {12}; //const
	int B (10); // Constructor initialization //OOP
	double C {10}; // C++11 initialization //best
	unsigned D = 10; // C-like initialization //assignment operator, fastest
	cout << "ABCD: " << A << " " << B << " " << C << " " << D << " " << endl;
	//cin is used for inputs
	cout << "Enter a Number:\n";  //\n and endl are the same
	cin >> B;
	cout << "The number you entered was: " << B << endl;
	//////////////////////////Section 7: Arrays and Vectors
	//arrays
	int Array1 [3] {1,2,3};
	double Array2 [6] {1,2,3}; //rest are set to 0
	float Array3 [A]; //A from before, all elements are unintialized
	float Array4 [A] {0}; //A from before, all elements are set to 0
	float Array5 [A] {100}; //Note: not all elements are set to 100, only first is
	int Array6 [] {1,2,3}; //size calculated
	cout << "Array5 (index 1): " << Array5[1] << endl;
	cout << "Array5 (index 2): " << Array5[2] << endl;
	cout << "Array4 (index 2): " << Array4[2] << endl;
	cout << "Array3 (index 1): " << Array3[2] << endl;
	Array5[1] = 2;
	cout << "Array5 (index 1): " << Array5[1] << endl;
	int MultiArray1 [4][3] {
	{1,2,3},
	{4,5,6},
	{7,8,9},
	{10,11,12}};//multi dimensional array. 4x3
	//vectors //unlike arrays, vectors are dynamic (size can change)
	//An element can be accessed with [index] like arrays (no bound checking)
	//Vectors are apart of std, for vectors use: "std::vector <type>" when there is no "using namespace std;" or "using std::vector;"
	vector <int> Vector1; //empty vector
	vector <int> Vector2 (5); //5 elements all set to 0 by automatically
	vector <int> Vector3 (5, 90); //5 elements all set to 90
	vector <float> Vector4 {1,2,3}; //Vector with 3 elements; 1,2,3
	cout << "Vector4 (index 0)" << Vector4[0] << endl; //array-like syntax of accessing elements (NO BOUND CHECK)
	cout << "Vector3 (index 0)" << Vector3.at(0) << endl; //vector-like syntax (BOUND CHECK)
	//OOP - object.method(), Vector is a object & .at() is a method in the above line ^^^
	Vector1.push_back(2); //Adds 2 to the end of the vector, has to be the same type as the vector
	cout << "Vector 1 size: " << sizeof(Vector1) << endl;
	cout << "int size: " << sizeof(int) << endl;
	//vector <int> EmptyVec;
	//cout << "Vector 1 amount of elements based of bits: " << (sizeof(Vector1)/sizeof(int))-sizeof(EmptyVec) << endl; //doesn't work! Inaccurate!!
	cout << "Vector 1 size: " << Vector1.size() << endl; //find how many elements there are in a vector
	int Array [100] {0};
	cout << "Array size based on bits: " << sizeof(Array)/sizeof(int) << endl; //find how many elements there are in a array
	//cout << "Array size based on .size: " << Array.size() << endl; //error, array doesn't have .size method
	//vector.at(index) or array[index] can be used to change element	
	vector <int> Test {1,2,3,4,5,6,7,8,9,0};
	//cout << Test.at(100) << endl; //this results in error, since Test doesnt have anything at index 100
	vector <vector<int>> Vector5 {
	{1,2,3},
	{4,5,6},
	{7,8,9}
	}; //2d vector!
	cout << "Vector5 index 1 index 1: " << Vector5.at(1).at(1) << endl; //shows 5, since its the first vector's second vector's second index (second is index 1)
	cout << "Variableless vector: "<< (vector <int> (3,96)).at(1) << endl; //vector without using variables (this is temporary since its not stored)
	//////////////////////////Section 8: Statements and Operators
	/*Types of expressions:
	math expressions (eg. a*b)
	literal expressions (eg. 34)
	variable expressions (eg. TestScores)
	assignment expression (eg. a=b, a*b, a+b etc.)
	*/
	//Assignment Operator is =, Lvalue = Rvalue, Rvalue assigned to Lvalue
	//Arithmetic Operators are /+-*% (% is modulus division)
	double Assign1 {0};
	double Assign2 {0};
	Assign1 = Assign2 = 100; // Assign2 is set to 100, Assign1 is set to Assign2 (Assign1 and Assign2 are both assigned to 100)
	cout << "Assign 1 & Assign 2: " << Assign1 << " " << Assign2 << endl;
	/*Assign1 = "100"; // This results in a error, compiler can't convert string to a int
	cout << "Assign1: " << Assign1;
	*/
		Assign1 = 5/10;
	cout << "Assign 1: " << Assign1 << endl;
	/*Increment & Decrement Operators: ++ & --
	 * Prefix ++num
	 * Postfix num--
	 * 
	 * Never use twice for the same variable in one statement
	 */
	 int Counter {0};
	 cout << "Counter: " << Counter << endl;
	 Counter = Counter + 1; //increment by one
	 cout << "Counter=Counter+1;: " << Counter << endl;
	 ++Counter; //Prefix increment by one
	 cout << "++Counter;: " << Counter << endl;
	 Counter++; //Postfix increment by one
	 //When done like above, Prefix and Postfix do the same thing. Counter=Counter+1, ++Counter, Counter++ are all doing the same thing
	 cout << "Counter++;: " << Counter << endl;
	 
	 cout << "Counter++: " << Counter++ << endl; //First, Counter is printed and then it is incremented. 
	 cout << "Counter: " << Counter << endl;
	 cout << "++Counter: " << ++Counter << endl; //Frist, Counter is incremented and then it is printed.
	 cout << "Counter: " << Counter << endl;
	 
	/* statements end in semicolon and contain expressions, usually
	 * statements usally perform a action
	 * 
	 * declaration statements, (eg. int x)*/
	 //Casting (converting types)
	 //C++ converts types on its own
	 //Automatically convert a lower type into a higher type (eg. long double is a higher type than a long, a long is higher than a int) but higher to lower might not always work
	 //Lower types hold smaller values
	 //Higher types hold larger values
	 //Lower to Higher is done automatically since the Higher can fit the Lower's smaller value
	 /*Terminology:
	 Type conversion is called a coercion, coercing one type into another
	 Promotion is a conversion of a lower type to a higher type (eg. 2 * 5.2, 2 gets promoted into 2.0)
	 Demotion is a conversion from a higher type to a lower type (eg. int num {0}; num = 100.2;, 100.2 is a double and gets demoted into a int of 100 to fit into num (loss of precision going from higher to lower))
	 */
	double Cast {0.0};
	int Cast1 {9};
	//static_cast<type>() is used for casting/coercion
	cout << "Cast1: " << Cast1 << endl;
	cout << "Cast1+.10: " << Cast1+.10 << endl;
	Cast1 = static_cast<double>(Cast1)+.10; //This does not work! Cast1 is a int so it's automatically rounded, the output is 9 and not 9.1
	Cast = static_cast<double>(Cast1)+.10; //This is 9.1
	cout << "Cast1 = static_cast<double>(Cast1)+.10;: " << Cast1 << endl;
	cout << "Cast = static_cast<double>(Cast1)+.10;: " << Cast << endl;
	Cast = 0;
	Cast = 5/2; /*
	 * Here, both 5 and 2 are integers. Cast is a double but that doesn't matter, a int can fit inside a double. Double is a higher type. 
	 * This is Integer division, resulting in 2.*/
	cout << "5/2: " << Cast << endl;
	Cast = static_cast<double>(5)/2; //Here, it is double division. Since there is a higher type
	cout << "static_cast<double>(5)/2: " << Cast << endl;
	int One{}, Two{}, Three{}; //One-liner to set different initialization variables of the same type
	/*Testing for Equality is the same as Python. == and !=
	 * Both == and != evaluate to a Boolean (True or False (1 or 0))
	 * Both comapre the values of 2 expression
	 * == is the equal operator, "equal to"
	 * != is the not equal operator, "not equal to" 
	 * If there are two different types, the higher type is used, Ex. int == double then integer turns into double
	 * 10 == 9.99999999999999999 due to precision and casting to higher type
	 * Commonly used in control flow statements*/
	cout << std::noboolalpha; //Shows bools as 0 or 1 in console
	cout << "std::noboolalpha: " << true << endl;
	cout << "std::noboolalpha: " << false << endl;
	cout << std::boolalpha; //Shows bools as true or false in console
	cout << "std::boolalpha: " << true << endl;
	cout << "std::boolalpha: " << false << endl;
	/*
	 * Relational operators:
	 * > Greater than operator
	 * >= Greater than or equal to
	 * < Less than
	 * <= Less than or equal to
	 * <=> Three-way comparison (c++20)
	 * <=> comparres two expressions
	 * <=> returns 0 if expr1 == expr2
	 * <=> returns less than 0 if expr1 > expr2
	 * <=> returns greater than 0 if expr1 < expr2*/
	 /*
	  * Logical operators:
	  * Work on bool expressions and evaluate to a bool
	  * not & !, negation. evaluates to the opposite. true evaluates to false. false evaluates to true.
	  * and & &&, logical and. If both expressions are true this evaluates to true
	  * or & ||, logical or. If one expression is true this evaluates to true
	  * Both the word and the symbol operator do the same thing
	  * Most code uses symbols not the keywords
	  * 
	  * not has higher precedence than and
	  * and has higher precedence than or
	  * not is a unary operator
	  * and and or are binary operators*/
	  bool a {1};
	  cout << "!a: " << !a << endl;
	  bool b {1};
	  cout << "a && b: " << (a && b) << endl;
	  b = false;
	  cout << "a && b: " << (a && b) << endl;
	  cout << "a || b: " << (a || b) << endl;
	  a = false;
	  cout << "a || b: " << (a || b) << endl;
	  a = b = true;
	  cout << "a || b: " << (a || b) << endl;
	  b = false;
	  cout << "!a && b: " << (!a && b) << endl;
	  cout << "!(a && b): " << !(a && b) << endl; //Parenthesis can be used to achieve the exact behavior youre looking for
	  /*Short Circuit Evaluation:
	   * When evaluating a logical expression, c++ stops as soon as the result is known
	   * expr1 && expr2 && expr3 && ... exprN When a expr is false, c++ will stop evaluating
	   * expr1 || expr2 || expr3 || ... exprN When a expr is true, c++ will stop evaluating
	   * */
	   
	/*Compound Assignment:
	* +=, lhs += rhs meaning lhs = lhs + (rhs) 
	* -=, lhs -= rhs meaning lhs = lhs - (rhs)
	* *=, lhs *= rhs meaning lhs = lhs * (rhs)
	* /=, lhs /= rhs meaning lhs = lhs / (rhs)
	* %=, lhs %= rhs meaning lhs = lhs % (rhs)
	* >>=, lhs >>= rhs meaning lhs = lhs >> (rhs)
	* <<=, lhs <<= rhs meaning lhs = lhs << (rhs)
	* &=, lhs &= rhs meaning lhs = lhs & (rhs)
	* ^=, lhs ^= rhs meaning lhs = lhs ^ (rhs)
	* |=, lhs |= rhs meaning lhs = lhs | (rhs)
	* 
	* Examples:
	* a += 1, a = a+1
	* a /= 5, a = a/5
	* a*=b+c, a = a*(b+c)*/
	//C++ operator precedence is important
	//////////////////////////Section 9: Controlling Program Flow
	/*Program Flow:
	 * Sequence, ordering statements sequentially
	 * Selection, making decisions
	 * Iteration, looping or repeating*/
	 /*Selection - Decision Making
	  * if statement
	  * if-else statement
	  * Nested if statements
	  * switch statement
	  * Conditional operator ?:*/
	  /*Iteration - Looping
	   * for loop
	   * Range-based for loop
	   * while loop
	   * do-while loop
	   * continue and break
	   * Infinite loops
	   * Nested loops*/
	/*if statement:
	if (expr)
		statement;
	if (expr){ //This is a block if statement
		statement;
		statement2;
	}
	* if the expression is true, execute the statement
	* if the expression is false, skip the statement*/
	/*Block statement:
	{
		variable declarations
		statement1;
		statement2;
	}
	 * Create a block of code by including more than one statement in code block {}
	 * Blocks can also contain variable declarations
	 * These variables are visible only within the block - local scope*/
	 a = true; //a from before
	 if (a){
		 cout << A << endl;
		 int A {10}; //This is a local variable, if block statement code block has its own local scope
		 cout << A << endl;
	}
	cout << A << endl;
	if (true){
		int A {1};
		cout << A << endl;
	}
	cout << A << endl;
	/*if-else statement
	 * 
	if (expr)
		statement1;
	else
		statement2;
	 * if the expression is true then execute statement1
	 * if the expression is false then execute statement2*/
	 /*if-else-if construct
	if (expr1)
		statement1;
	else if (expr2)
		statement2;
	else if (expr3)
		statement3;
	else if (expr4)
		statement4;
	else
		statement5;
	 * if expr is not true, it goes to the next else-if
	 * When a expr is true the code block for that if statement is ran then all the other elseifs are skipped.
	 * */
	bool If {true};
	//(If else if)
	if (If)
		cout << "If statement 1" << endl;
	else if (If)
		cout << "If statement 2" << endl; //this will not run. since it is else-if, if this was a if then it would have ran.
	//(if if)
	if (If)
		cout << "If statement 1" << endl;
	if (If)
		cout << "If statement 2" << endl;
	/*Nested if statement
	if (expr)
		if (expr2)
			statement1;
		else
			statement2;
	 * if statement is nested within another
	 * Allows testing of multiple conditions
	 * else belongs to the closest if*/
	 /*The switch statement
	switch (integer_control_expr){
		case expression_1: statement_1; break;
		case expression_2: statement_2; break;
		case expression_3: statement_3; break;
		...
		case expression_n: statement_n; break;
		default: statement_default;
	}
	 * Default is optional but it is good practice to include
	 * Once a match is made, all the code in the switch cases inculding and following that match will be executed until there is a break statement. No other conditions will be checked.
	 * The control expression must evaluate to a integer type
	 * The case expressions must be constants expressions that evaluate to integer or integers literals
	 * Once a match occurs all following case statements are executed until a break is reached the switch is complete (This is why you should always provide a break statement at the end of each case)*/
	int selection {0};
	cout << "\nPick a value for selection" << endl;
	cin >> selection;
	switch (selection){
		case 1: cout << "You selected 1." << endl; break;
		case 2: cout << "You selected 2." << endl; break;
		case 3: 
		case 4: cout << "You selected 3 or 4." << endl; break;
		default: cout << "You selected something that isn't 1-4";
	}
	
	cout << "\nPick a value for selection (no breaks)" << endl;
	cin >> selection;
	switch (selection){ //fall through behavior
		case 1: cout << "You selected 1." << endl;
		case 2: cout << "You selected 2." << endl;
		case 3: 
		case 4: cout << "You selected 3 or 4." << endl;
		default: cout << "You selected something that isn't 1-4" << endl;
	}
	cout << endl;
	enum Colors {Red, Green, Blue};
	Colors color {Green};
	switch (color){
		case Red: cout << "You selected Red." << endl; break;
		case Green: cout << "You selected Green." << endl; break;
		case Blue: cout << "You selected Blue." << endl; break;
		default: cout << "You selected something that isn't RGB" << endl;
	}
	
	/*Conditional Operator
	 * ?:
	 * (cond_expr) ? expr1 : expr2
	 * If cond_expr is true, the value of expr1 is returned
	 * If cond_expr is false, the value of expr2 is returned
	 * Similar to if-else
	 * Ternary operator
	 * Very useful when used inline
	 * Very easy to abuse*/
	 B = 10; //C and B are from before
	 C = 11;
	 cout << endl << endl;
	 //Using conditional operator:
	 cout << B << " is " << (B>C ? "greater": "smaller") << " than " << C << endl;
	 //Using if else
	if (B>C)
		cout << B << " is greater" << " than " << C << endl;
	else
		cout << B << " is smaller" << " than " << C << endl;
	/*C++ Looping Constructs
	 * for loop - iterate a specfic number of times
	 * Range-based for loop - one iteration for each element in a range or collection
	 * while loop
	 * 		- iterate while a condition remains true
	 * 		- stop when the condition becomes false
	 * 		- check the condition at the beginning of every iteration
	 * do-while loop
	 * 		- iterate while a condition remains true
	 * 		- stop when the condition becomes false
	 * 		- check the condition at the end of every iteration*/
	/*for Loop
	for (initialization; condition; increment)
		statement;
	for (initialization; condition; increment){
		statement(s);
	}
	 * */
	cout << endl << endl;
	int i {};
	for (int i {}; i <= 10; ++i){ //the i variable intialized here is in the local scope
		cout << "inside i: " << i << endl;
	}
	cout << "outside i: " << i << endl;
	for (int i{0}, float j{0}; i<=10; ++i, ++j){//You can also do multiple variables using the comma operator
		cout << i << " * " << j << " : " << (i*j) << endl;
	}
	return 0;
}
