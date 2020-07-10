#include "printf.h"

/* %[flags][width][.precision][length]specifier */


int main ()
{
   /* printf("\nSpecifier ((d/i u/o x/X), (f/F e/E g/G a/A), c, s/p, n, %%)\n\n");

        unsigned int i = 3;
        printf("For i - %i\n", i);
        printf("For d - %d\n", i);
        printf("For u - %u\n", i);
        printf("For o - %o\n", i);
        printf("For x - %x\n", i);
        printf("For X - %X\n\n", i);

        double b = 17.1234569;
        printf("For f - %f\n", b);
    	  printf("For F - %F\n", b);
        printf("For e - %e\n", b);
        printf("For E - %E\n", b);
        printf("For g - %g\n", b);
        printf("For G - %G\n", b);
        printf("For a - %a\n", b);
        printf("For A - %A\n\n", b);

        char c = 'a';
        printf("For c - %c\n\n", c);

        char *s = "mamma MIA";
        printf("For s - %s\n", s);
        printf("For p - %p\n\n", s);

        int *q = NULL;
        printf("For n - %n\n\n", q);
        printf("%%\n");

    printf("\nFlags (-/+/(space), #, 0)\n\n");

        int f = 0;
        printf("For '-' - %-i\n", f);
        printf("For '-' - %i\n", f);
        printf("For '+' - %+i\n", f);
        printf("For ' ' - % i\n\n", f);

        unsigned int u = 5710;
        printf("For '#o' - %#o\n", u);
        printf("For 'o' - %o\n", u);
        printf("For '#x' - %#x\n", u);
        printf("For 'x' - %x\n\n", u);

         добавляет просто точку
        double d = 17;
        printf("For '#a' - %#.0a\n", d);
        printf("For 'a' - %.0a\n", d);
        printf("For '#e' - %#e\n", d);
        printf("For 'e' - %e\n", d);
        printf("For '#f' - %#.0f\n", d);
        printf("For 'f' - %.0f\n", d);
        printf("For '#g' - %#a\n", d);
        printf("For 'g' - %a\n", d);

    printf("\nWidth (number, *)\n\n");

        int w = 123;
        printf("For '5i' -%5i-\n", w);
        printf("For '05i' -%05i-\n", w);

        printf("For '*5' -%*i-\n", 5, w);
        printf("For '*05' -%0*i-\n", 5, w);

    printf("\nPrecision (.number, .*)\n\n");

        unsigned int h = 1;
        printf("For .0i - %.0i\n", h);
        printf("For .1d - %.1d\n", h);
        printf("For .3u - %.3u\n", h);
        printf("For .4o - %.4o\n", h);
        printf("For .5x - %.5x\n", h);
        printf("For .6X - %.6X\n\n", h);

        double a = 17.1234569;
        printf("For .0f - %.0f\n", a);
        printf("For .1F - %.1F\n", a);
        printf("For .2e - %.2e\n", a);
        printf("For .3E - %.3E\n", a);
        printf("For .4g - %.4g\n", a);
        printf("For .5G - %.5G\n", a);
        printf("For .6a - %.6a\n", a);
        printf("For .9A - %.9A\n\n", a);

    char *l = "mamma MIA";
    printf("For .0s - %.0s\n", l);
    printf("For .1s - %.1s\n", l);
    printf("For .2s - %.2s\n", l);
    printf("For .9s - %.9s\n\n", l);

    char *m = "mamma MIA";
    printf("For .*0s - %.*s\n", 0, m);
    printf("For .*1s - %.*s\n", 1, m);
    printf("For .*2s - %.*s\n", 2, m);
    printf("For .*9s - %.*s\n", 9, m);
    */
   	int i;
   	i = 8;
	ft_printf("%o\n", i);
	return (0);
}