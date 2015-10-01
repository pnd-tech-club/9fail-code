#include <u.h>
#include <libc.h>
#include <bio.h>
void
main()
{
	buf = Biobuf *Bopen("/dev/cons", OWRITE);
	if(buf == nil)
	{
		exits(1);
	}
	
	for(;;)
	{
		
	}
	
	exits(0);
}
