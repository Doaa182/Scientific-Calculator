#include <iostream>
#include <cmath>
#include <math.h>
#include <string>

using namespace std;

const double  PI = 3.14159265359;
const double  e = 2.71828182846;

long double add(long double n1, long double n2);
long double sub(long double n1, long double n2);
long double multiplication(long double n1, long double n2);
long double division(long double n1, long double n2);
long long modulusss(long double n1, long double n2);
long double power(long double n1, long double n2);
long double square_root(long double n1);
long double exponential(long double n1);
long double logarithmic(long double n1, long double n2);
long double nutural_log(long double n1);
long double sine_angle(long double n1);
long double csc_angle(long double n1);
long double cosine_angle(long double n1);
long double sec_angle(long double n1);
long double tan_angle(long double n1);
long double cotan_angle(long double n1);
long double absolute(long double n1);
long long factorial(long double n1);
long long npr(long double n1, long double n2);
long long ncr(long double n1, long double n2);

int main()
{
	do
	{
		long double n1 = 0, n2 = 0, result;
		string op;
		cout << "Please enter an operator : " << endl;
		cin >> op;

		if (op == "||" || op == "!" || op == "e" || op == "ln" || op == "sin" || op == "csc" || op == "cos" || op == "sec" || op == "tan" || op == "cot" || op == "sqrt")
		{
			cout << "Please enter only one number : " << endl;
			cin >> n1;
		}
		else if (op == "log" || op == "P" || op == "C" || op == "+" || op == "-" || op == "*" || op == "^" || op == "/" || op == "%")
		{
			cout << "Please enter two numbers : " << endl;
			cin >> n1 >> n2;
		}

		if (op == "+")
		{
			result = add(n1, n2);
			cout << result << endl;
		}
		else if (op == "-")
		{
			result = sub(n1, n2);
			cout << result << endl;
		}
		else if (op == "*")
		{
			result = multiplication(n1, n2);
			cout << result << endl;
		}
		else if (op == "/")
		{
			result = division(n1, n2);
			if (n2 == 0)
			{
				cout << "MATH ERROR" << endl;
			}

			else
			{
				cout << result << endl;
			}
		}
		else if (op == "%")
		{
			result = modulusss(n1, n2);
			if ((long long)n2 == 0)
			{
				cout << "MATH ERROR" << endl;
			}

			else
			{
				cout << result << endl;

			}
		}
		else if (op == "^")
		{
			result = power(n1, n2);

			if (n1 == 0 && n2 == 0)
			{
				cout << "MATH ERROR" << endl;
			}

			else
			{
				cout << result << endl;
			}
		}
		else if (op == "sqrt")
		{
			result = square_root(n1);

			if (n1 < 0)
			{
				cout << "MATH ERROR" << endl;
			}

			else
			{
				cout << result << endl;
			}

		}
		else if (op == "e")
		{
			result = exponential(n1);
			cout << result << endl;

		}
		else if (op == "log")
		{
			result = logarithmic(n1, n2);

			if (n1 <= 0 || n2 <= 0 || n2 == 1)// n2 --> base 
			{
				cout << "MATH ERROR" << endl;
			}

			else
			{
				cout << result << endl;
			}

		}
		else if (op == "ln")
		{
			result = nutural_log(n1);

			if (n1 <= 0)// n2 --> base
			{
				cout << "MATH ERROR" << endl;
			}

			else
			{
				cout << result << endl;
			}

		}
		else if (op == "sin")
		{

			result = sine_angle(n1);

			long double angle_0 = 0;

			for (long long n = 0; angle_0 < n1; n++)
			{
				angle_0 = 180 * n;
			}

			if (n1 == angle_0)
			{
				result = 0;
				cout << result << endl;

			}
			else
			{
				cout << result << endl;
			}

		}
		else if (op == "csc")
		{
			result = csc_angle(n1);
			long double angle_csc_0 = 0;

			for (long long n = 0; angle_csc_0 < n1; n++)
			{
				angle_csc_0 = 180 * n;
			}

			if (n1 == angle_csc_0)
			{

				cout << "MATH ERROR" << endl;

			}
			else
			{
				cout << result << endl;
			}



		}
		else if (op == "cos")
		{
			result = cosine_angle(n1);

			long double angle_90 = 90;

			for (long long n = 0; angle_90 < n1; n++)
			{
				angle_90 = (180 / 2) + (180 * n);
			}

			if (n1 == angle_90)
			{
				result = 0;
				cout << result << endl;

			}
			else
			{
				cout << result << endl;
			}


		}
		else if (op == "sec")
		{
			result = sec_angle(n1);
			long double angle_sec_90 = 90;

			for (long long n = 0; angle_sec_90 < n1; n++)
			{
				angle_sec_90 = (180 / 2) + (180 * n);
			}

			if (n1 == angle_sec_90)
			{

				cout << "MATH ERROR" << endl;
			}
			else
			{
				cout << result << endl;
			}


		}
		else if (op == "tan")
		{
			result = tan_angle(n1);
			long double angle_tan_0 = 0;
			long double angle_tan_90 = 90;

			for (long long n = 0; angle_tan_0 < n1; n++)
			{
				angle_tan_0 = 180 * n;
			}

			for (long long n = 0; angle_tan_90 < n1; n++)
			{
				angle_tan_90 = (180 / 2) + (180 * n);
			}

			if (n1 == angle_tan_0)
			{
				result = 0;
				cout << result << endl;
			}

			else if (n1 == angle_tan_90)
			{
				cout << "MATH ERROR" << endl;
			}


			else
			{
				cout << result << endl;
			}

		}
		else if (op == "cot")
		{
			result = cotan_angle(n1);
			long double angle_cot_0 = 0;
			long double angle_cot_90 = 90;

			for (long long n = 0; angle_cot_0 < n1; n++)
			{
				angle_cot_0 = 180 * n;
			}

			for (long long n = 0; angle_cot_90 < n1; n++)
			{
				angle_cot_90 = (180 / 2) + (180 * n);
			}

			if (n1 == angle_cot_90)
			{
				result = 0;
				cout << result << endl;
			}

			else if (n1 == angle_cot_0)
			{
				cout << "MATH ERROR" << endl;
			}


			else
			{
				cout << result << endl;
			}

		}
		else if (op == "||")
		{
			result = absolute(n1);
			cout << result << endl;
		}
		else if (op == "!")
		{
			result = factorial(n1);
			if ((long long)n1 < 0 || (n1 - (long long)n1) != 0)
			{
				cout << "MATH ERROR" << endl;
			}
			else if ((long long)n1 >= 0)
			{
				cout << result << endl;
			}
		}


		else if (op == "P")
		{
			result = npr(n1, n2);


			if (n1 < n2 || n1 < 0 || n2 < 0 || (n1 - (long long)n1) != 0 || (n2 - (long long)n2) != 0)
			{
				cout << "MATH ERROR" << endl;
			}
			else
			{
				cout << result << endl;
			}
		}
		else if (op == "C")
		{
			result = ncr(n1, n2);


			if (n1 < n2 || n1 < 0 || n2 < 0 || (n1 - (long long)n1) != 0 || (n2 - (long long)n2) != 0)
			{
				cout << "MATH ERROR" << endl;
			}
			else
			{
				cout << result << endl;
			}
		}

	} while (true);

	return 0;
}



long double add(long double n1, long double n2)
{
	long double sum = 0;
	sum = n1 + n2;

	return sum;
}

long double sub(long double n1, long double n2)
{
	long double subtract = 0;
	subtract = n1 - n2;

	return subtract;
}
long double multiplication(long double n1, long double n2)
{
	long double product = 0;
	product = n1 * n2;

	return product;
}
long double division(long double n1, long double n2)
{
	long double div = 0;
	div = n1 / n2;

	return div;
}

long long modulusss(long double n1, long double n2)
{
	long long mod = 0;
	mod = (long long)n1 % (long long)n2;


	return mod;
}

long double power(long double n1, long double n2)
{
	long double power_result = 0;
	power_result = pow(n1, n2);

	return power_result;
}
long double square_root(long double n1)
{
	long double sq;
	sq = sqrt(n1);

	return sq;
}
long double exponential(long double n1)
{
	long double ex;
	ex = pow(e, n1);

	return ex;
}
long double logarithmic(long double n1, long double n2)
{
	long double log_result;
	log_result = (log(n1)) / (log(n2));

	return log_result;
}
long double nutural_log(long double n1)
{
	long double ln_result;
	ln_result = (log(n1)) / (log(e));

	return ln_result;
}
long double sine_angle(long double n1)
{
	long double s;
	s = sin(n1 * (PI / 180));

	return s;
}
long double csc_angle(long double n1)
{
	long double csc;
	csc = 1 / (sin(n1 * (PI / 180)));

	return csc;
}
long double cosine_angle(long double n1)
{
	long double c;
	c = cos(n1 * (PI / 180));

	return c;
}
long double sec_angle(long double n1)
{
	long double sc;
	sc = 1 / (cos(n1 * (PI / 180)));

	return sc;
}
long double tan_angle(long double n1)
{
	long double t;
	t = tan(n1 * (PI / 180));

	return t;
}
long double cotan_angle(long double n1)
{
	long double ct;
	ct = 1 / (tan(n1 * (PI / 180)));

	return ct;
}

long double absolute(long double n1)
{
	long double absol;
	if (n1 > 0)
	{
		absol = n1;
	}
	else
	{
		absol = -1 * n1;
	}

	return absol;
}
long long  factorial(long double n1)
{
	long long fact = 1;

	for (long long i = 1; i <= n1; i++)
	{
		fact = fact * i;
	}


	return fact;
}
long long npr(long double n1, long double n2)
{
	long long npr = 0;

	long long denominator_p = (factorial(n1 - n2));
	npr = factorial(n1) / denominator_p;

	return npr;

}
long long ncr(long double n1, long double n2)
{
	long long  ncr = 0;

	long long denominator_c = factorial(n2) * factorial(n1 - n2);
	ncr = factorial(n1) / denominator_c;

	return ncr;

}
