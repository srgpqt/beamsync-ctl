#include <stdio.h>
#include <string.h>

extern void CGSSetDebugOptions(int);
extern void CGSDeferredUpdates(int);

int main(int argc, const char * argv[])
{
	if (argc < 2 || 0 == strcmp("off", argv[1])) {
		CGSSetDebugOptions(0x08000000);
		CGSDeferredUpdates(0);
		puts("BeamSync disabled!");
	}
	else if (0 == strcmp("on", argv[1])) {
		CGSSetDebugOptions(0);
		CGSDeferredUpdates(1);
		puts("BeamSync enabled!");
	}
	else {
		puts("Usage: beamsync-ctl off|on");
	}
	return 0;
}
