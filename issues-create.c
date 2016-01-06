#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

struct stat st = {0};

/* Creates an issues file named name in directory dir. The options in query_options will be used to decide what issues to get. If the options * are NULL, we'll account for that later. Sleep for now
 */
int
issues-create(const char * dir, const char * name, struct query_options options)
{
	char * dirpath;
	if(dir!=NULL)
	{
	if(stat("", &st) == -1) {
		mkdir("", 0700);
	} else {
		fprintf(stderr, "Directory already exists");
	}
	} else {
	}
}
