#include "ft_printf.h"

int main(void)
{
	ft_printf("%d, %s, %c, %p, %i, %u, %x, %X", 1, "abc", 'c', 0, 5, 15, 16, 32);
	ft_printf("hello world %32.s %-15.p, %-19c, %050d, %.23i, %30x, %-3.X", "abc", 0, 'c', 4235, -1234, 45, 234);
	ft_printf("%5%, %%");
	ft_printf("SDFwefEWFEWFWEFEWF\n");
	system("leaks a.out > leaks_result_temp; cat leaks_result_temp | grep leaked && rm -rf leaks_result_temp");
	return (0);
}
