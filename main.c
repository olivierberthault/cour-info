#include <stdio.h>
void print_sign(long nb)
{
	if (nb > 0)
		printf("%ld est un nombre positif \n",nb);
	else if (nb == 0)
		printf("%ld est un nombre nul \n",nb);
	else if (nb < 0)
		printf("%ld est un nombre negatif \n",nb);
} 
int main(void)
{
	print_sign(112433);
	print_sign(-112433);
	print_sign(0);
	print_sign(11152433);
	print_sign(-112433);
	print_sign(-112433);
	print_sign(-112433);
	print_sign(11712433);
	print_sign(11412433);
	print_sign(112147433);
	print_sign(1124121174133);
	print_sign(11522433);
	print_sign(112433);
	print_sign(11233);
	print_sign(1182782433);
	print_sign(1122551243);
	print_sign(11175175133);
	print_sign(112417533);
	print_sign(112781433);
	print_sign(1122433);
	print_sign(1121871272433);
	print_sign(152185172433);
	print_sign(117582433);
	print_sign(11171282433);
	print_sign(11781433);
	print_sign(11822433);
	return 0;
}
