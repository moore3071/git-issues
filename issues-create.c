#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

struct stat st = {0};

/* Creates an issues file named name in directory dir. The options in query_options will be used to decide what issues to get. If the options * are NULL, we'll account for that later. Sleep for now
*/
int
issues-create(const char * dir, const char * name, struct query_options options)
{
	if(dir!=NULL)
	{
		if(mkdir(dir,0777)==-1)
			if(errno != EEXIST)
			{
				perror("issues-create");
				exit(EXIT_FAILURE);
			}
	}
	get_issues_path(*dir, *name);
}

void get_issues_path(char **dir. char** file)
{
	if(*dir==NULL)
		return;
}
