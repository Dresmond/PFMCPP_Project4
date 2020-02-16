/*
 Project 4 - Part 1 / 9
 video: Chapter 2 Part 7
 Returning Values tasks 

 Create a branch named Part1
 
 1) write 3 UDTs named FloatType, DoubleType, IntType.
 
 2) give each UDT the following member functions:
        add( lhs, rhs );
        subtract( lhs, rhs );
        multiply( lhs, rhs );
        divide( lhs, rhs );
 
 3) make them return the correct primitive type. e.g. if you're implementing the FloatType::add function, your implementation would start like this:
        float FloatType::add( float lhs, float rhs )
 
 4) declare a few instances of each class in main() and call the member functions with the appropriate arguments.
        FloatType ft;
        auto result = ft.add(3.2f, 23.f );
 
 5) print out those results using std::cout:
        std::cout "result of ft.add(): " << result << std::endl;
 
 6) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */
struct FloatType
{
    // Project 4 - Part 1 /9, Returning float Values
 
 	float add( float lhs, float rhs ) 	        { return lhs + rhs; }
 	float subtract( float lhs, float rhs )      { return lhs - rhs; }
	float multiply( float lhs, float rhs )      { return lhs * rhs; }
	float divide( float lhs, float rhs )        { return lhs / rhs; }
};
 
struct DoubleType
{
    // Project 4 - Part 1 /9, Returning Values 

    double add( double lhs, double rhs )        { return lhs + rhs; } 
	double subtract( double lhs, double rhs )   { return lhs - rhs; } 
    double multiply( double lhs, double rhs )   { return lhs * rhs; }  
    double divide( double lhs, double rhs )     { return lhs / rhs; }  
};
 
struct IntType
{
    // Project 4 - Part 1 /9, Returning Values
 
 	int add( int lhs, int rhs )                { return lhs + rhs; }
 	int subtract( int lhs, int rhs )           { return lhs - rhs; }              
	int multiply( int lhs, int rhs )           { return lhs * rhs; }
	int divide( int lhs, int rhs )             { return lhs / rhs; }
};
 
#include <iostream>
int main()
{   
    // instantiate UDT(s) 
    FloatType ft1;
    DoubleType dt1;
    IntType it1;

    // exercise FloatType UDT
    
    auto resultf1Add = ft1.add(3.14f, 3.14f);
    std::cout << "result of ft1.add(): " << resultf1Add << std::endl;
    
    auto resultf1Sub = ft1.subtract(3.14f, 3.14f);
    std::cout << "result of ft1.subtract(): " << resultf1Sub << std::endl;
    
    auto resultf1Mult = ft1.multiply(3.14f, 3.14f);
    std::cout << "result of ft1.multiply(): " << resultf1Mult << std::endl;

    auto resultf1Div = ft1.divide(3.14f, 3.14f);
    std::cout << "result of ft1.divide(): " << resultf1Div << std::endl;

    // exercise DoubleType UDT

    auto resultd1Add = dt1.add(3.14, 3.14); 
    std::cout << "result of dt1.add(): " << resultd1Add << std::endl;
    
    auto resultd1Sub = dt1.subtract(3.14, 3.14);
    std::cout << "result of dt1.subtract(): " << resultd1Sub << std::endl;
    
    auto resultd1Mult = dt1.multiply(3.14, 3.14);
    std::cout << "result of dt1.multiply(): " << resultd1Mult << std::endl;

    auto resultd1Div = dt1.divide(3.14, 3.14);
    std::cout << "result of dt1.divide(): " << resultd1Div << std::endl;

   // exercise IntType UDT

    auto resulti1Add = it1.add(314, 314); 
    std::cout << "result of it1.add(): " << resulti1Add << std::endl;
    
    auto resulti1Sub = it1.subtract(314, 314);
    std::cout << "result of it1.subtract(): " << resulti1Sub << std::endl;
    
    auto resulti1Mult = it1.multiply(314, 314);
    std::cout << "result of it1.multiply(): " << resulti1Mult << std::endl;

    auto resulti1Div = it1.divide(314, 314);
    std::cout << "result of it1.divide(): " << resulti1Div << std::endl;

    std::cout << "good to go!" << std::endl;
}
