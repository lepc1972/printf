




int fun_string(va_list arguments)
{
	char *str;
	int i;
	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		return NULL;
	}
       for (i = 0; str[i] != '\0';i++)
       {
	       _putchar(str[i]);
       }
       return (i);

}


int fun_character(va_list arguments)
{
	char str;
	int i = 0;
	str = va_arg(arguments, char)
		_putchar(str);
	return (1);
}

void print_interger(va_list arguments)
{
	int i = 1;
	int j;
	int num = 0;
	int power = 1;
	int *n = va_arg(arguments, int)

	if (n == 0)
	{
		_putchar ('0');
		return;
	}
	if (n < 0)
	{
		n = n*-1;
		_putchar('-');
	}
	while(n > power)
	{
		power = power*10;
		i++; 
	}
	if (power == 1000000)
	{
		_putchar((n/100000) %10 + '0');
		_putchar((n/10000) %10 + '0');
		_putchar((n/1000) %10 + '0');
		_putchar((n/100) %10 + '0');
		_putchar((n/10) %10 + '0');
		_putchar((n % 10) + '0');
	}
	if (power == 100000)
	{
		_putchar((n/10000) %10 + '0');
		_putchar((n/1000) %10 + '0');
		_putchar((n/100) %10 + '0');
		_putchar((n/10) %10 + '0');
		_putchar((n % 10) + '0');
	}
	if (power == 10000)
	{
		_putchar((n/1000) %10 + '0');
		_putchar((n/100) %10 + '0');
		_putchar((n/10) %10 + '0');
		_putchar((n % 10) + '0');
	}
	if (power == 1000)
	{
		_putchar((n/100) %10 + '0');
		_putchar((n/10) %10 + '0');
		_putchar((n % 10) + '0');
	}
	if (power == 100)
	{
		_putchar((n/10) %10 + '0');
		_putchar((n % 10) + '0');
	}
	if (power == 10)
	{
		_putchar((n % 10) + '0');
	}
}
