#include <Rcpp.h> 								// Include the required header file for functions like Rcout
using namespace Rcpp; 							// Namespace for R functions in c++

/*
This cpp function can be called from an R console by typing the following commands. 

> Rcpp::sourceCpp("test.cpp") 					// Properly type-in the file location. The "test.cpp" file will be sourced in the current R session.
> print_matrix_cpp(x)							// Call the function

*/

void print_matrix_cpp(S4 object)				// Definition of function starts here.
												// A properly defined S4 object is input argument to the function and return type is void.
{

	// "slot" function is called for the S4 object with respective string input arguments to get the type, dimension and other parameters of the object.
	
	CharacterVector matrix_type = object.slot("class");
	NumericVector dimension = obj.slot("Dim");
	NumericVector i = obj.slot("i");
	NumericVector p = obj.slot("p");
	NumericVector x = obj.slot("x");

	//Printing the values

	Rcout << "Type:\t" << matrix_type << endl;
	Rcout << "Dim:\t" << dimension << endl;
	Rcout << "length of i:\t" << i.size() << endl;
	Rcout << "value of i:\t" << i << endl;
	Rcout << "length of p:\t" << p.size() << endl;
	Rcout << "value of p:\t" << p << endl;
	Rcout << "length of x:\t" << x.size() << endl;
	Rcout << "value of x:\t" << x << endl;

	return;

}

// Student: Sumedh Mool