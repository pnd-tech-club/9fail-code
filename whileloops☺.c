#include <u.h>
#include <libc.h>
void
main()
{
	char buf[64*1024+1];
	char quit[5] = "quit";
	quit[4] = '\0';
	int a = 0, bsize;

	while(a != 1)
	{
		bsize = read(0, buf, sizeof(buf)-1);
		if(bsize < 0)
		{
			exits("read() failure\n");
		}
		buf[bsize] = '\0';
		if(bsize == 0)
		{
			a=1;
		}
		write(1, buf, bsize);
	}

	exits(nil);
}
