#include "main.h"
	/**
	 * print_alphabet - print all alphabet in lowercase
	 *
	 * _putchar: prints next line
	 */

	void print_alphabet(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}



