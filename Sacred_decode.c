#include <stdio.h>

void decrypt(void)
{
	int	encrypted[] = {54, 56, 55, 56, 42, 53, 57, 49, 42, 60, 62, 43};
	int	length = sizeof(encrypted) / sizeof(encrypted[0]);
	int	i = 0;

	while(i < length) 
	{
		char decrypted_char = encrypted[i] + / - ;
		printf("%c", decrypted_char);
		i++;
	}
	printf("\n");
}

int main(void)
{
	decrypt();
	return (0);
}
