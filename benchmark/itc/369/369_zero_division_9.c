// This is an open source non-commercial project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
/*
 * Types of defects: divide by zero
 * Complexity: divide (/)	Basic type	int	Linear equation
 */
void zero_division_011_bad ()
{
	int dividend = 1000;
	int divisor = 2;
	int ret;
	ret = dividend / (2 * divisor - 4);/*Tool should detect this line as error*/ /* ERROR:division by zero */
}

/*
 * Types of defects: divide by zero
 * Complexity: divide (/)	Basic type	int	Linear equation
 */
void zero_division_011_good ()
{
	int dividend = 1000;
	int divisor = 2;
	int ret;
	ret = dividend / (2 * divisor - 3); /*Tool should not detect this line as error*/ /* No ERROR:division by zero */
}

int main(){
	zero_division_011_good();
  zero_division_011_bad();
  return 0;
}
