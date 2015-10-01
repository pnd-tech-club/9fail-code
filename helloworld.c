#include <u.h>
#include <libc.h>
void
main()
{
	char buf[64*1024+1];
	int a = 1, b = 3, c;

	c = read(0, buf, sizeof(buf)-1);

	print("Integers: %d\n", (a+b));
	write(1, buf, c);

	exits(nil);
}
