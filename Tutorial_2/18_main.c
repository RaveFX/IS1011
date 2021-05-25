#include <stdio.h>
int main()
{
	int x = 10;
	/*break 1 */
	int y = 20;
	/*break 2*/
	x = x + y;
	/*break 3*/
	y = y + 10;
	/*break 4*/
	x = x * y;
	/*break 5*/
	y = x + y;
	/*break 6*/
	return 0;
}
