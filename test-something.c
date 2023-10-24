#include <stdio.h>
#include "main.h"
 
void report(int _lenFrom_printf, int lenFromprintf);
void sep(void);
 
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int _len, len;
    char a, b, c;
    char *longString;
 
    a = 'a';
    b = 'b';
    c = 'c';
 
    /* RAW STRING TESTS */
    _len = _printf("Let's try to printf a simple sentence.\n");
    sep();
    len = printf("Let's try to printf a simple sentence.\n");
    report(_len, len);
 
    /* CHAR TESTS */
    _len = _printf("%c.\n", a);
    sep();
    len = printf("%c.\n", a);
    report(_len, len);
 
    _len = _printf("1:%c, 2:%c, 3:%c.\n", a, b, c);
    sep();
    len = printf("1:%c, 2:%c, 3:%c.\n", a, b, c);
    report(_len, len);
 
    _len = _printf("Character:[%c]\n", 'H');
    sep();
    len = printf("Character:[%c]\n", 'H');
    report(_len, len);
 
    /* STRING TESTS */
    _len = _printf("String:[%s]\n", "I am a string !");
    sep();
    len = printf("String:[%s]\n", "I am a string !");
    report(_len, len);
 
    _len = _printf("[%s]\n", "st");
    sep();
    len = printf("[%s]\n", "st");
    report(_len, len);
 
    _len = _printf("%s %s\n", "Here\'s \"milk.\'", "We\'re here too.");
    sep();
    len = printf("%s %s\n", "Here\'s \"milk.\'", "We\'re here too.");
    report(_len, len);
 
    longString = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.";
    _len = _printf("%s\n", longString);
    sep();
    len = printf("%s\n", longString);
    report(_len, len);
 
    /* % tests */
    _len = _printf("%%%%%%%%\n");
    sep();
    len = printf("%%%%%%%%\n");
    report(_len, len);
    _len = _printf("Percent:[%%]\n");
    sep();
    len = printf("Percent:[%%]\n");
    report(_len, len);
 
    /* Integer tests */
    _printf("Len:[%d]\n", _len);
    printf("Len:[%d]\n", len);
    report(_len, len);
 
    _len = _printf("Let's try to printf a simple sentence.\n");
    len = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d]\n", _len);
    printf("Length:[%d]\n", len);
    report(_len, len);
    _len = _printf("Negative:[%d]\n", -762534);
    len = printf("Negative:[%d]\n", -762534);
    report(_len, len);
 
    return (0);
}
 
void report(int _printfLen, int printfLen)
{
    printf("Expected: [%d] chars, got [%d] chars.\n", printfLen, _printfLen);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\n");
}
 
void sep(void)
{
    printf("----------\n");
}
