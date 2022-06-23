#include "FizzBuzzMethod.h"
#include <string>

using namespace std;

string FizzBuzzMethod::fizzBuzz(int n)
{
	string result;

	if ((n % 3 == 0) && (n % 5 == 0)) {
		result = "FizzBuzz";
	}
	else if (n % 5 == 0) {
		result = "Fizz";
	}
	else if (n % 3 == 0) {
		result = "Buzz";
	}
	else {
		result = "3‚Ì”{”‚Å‚àA5‚Ì”{”‚Å‚à‚ ‚è‚Ü‚¹‚ñ";
	}

	return result;
}
