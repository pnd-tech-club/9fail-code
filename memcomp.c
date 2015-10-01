#include <u.h>
#include <libc.h>
void
main()
{
	int n, bufsize;
	char buf[64*1024+1];
	char buf1[] = "thing";
	char buf2[] = "thing";
	char buf3[] = "beeps";
	char buf4[] = "beepz";
	char buf5[] = "woah";

	n = memcmp(buf1, buf2, sizeof(buf1));
	print("%d\n", n);
	n = memcmp(buf2, buf3, sizeof(buf2));
	print("%d\n", n);
	n = memcmp(buf3, buf4, sizeof(buf3));
	print("%d\n", n);
	n = memcmp(buf4, buf5, sizeof(buf4));
	print("%d\n", n);
	print(": ");
	bufsize = read(0, buf, sizeof(buf)-1);
	n = memcmp(buf, "quit", bufsize-1);
	print("Memcmp: %d\n", n);
	if(n == 0)
	{
		print("You typed quit son!\n");
	}

	exits(nil);
}
