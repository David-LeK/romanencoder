#include <stdio.h>
#include <stdlib.h>

int romanencoder(int x)
{
    int number[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    const char *roman[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i=12;   
    while(x>0)
    {
      int a = x/number[i];
      x = x%number[i];
      while(a--)
      {
        printf("%s", roman[i]);
      }
      i--;
    }
}

main()
{
	int x;
	printf("Input a number to convert: ");
	scanf("%d", &x);
	while ((x < 0) || (x == 0))
		{
			printf("Invalid number, inputting again: ");
			scanf("%d", &x);
		}
	printf("In Roman numerals is: ");
	romanencoder(x);
	printf("\n");
	system("pause");
}
