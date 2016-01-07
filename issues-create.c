#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>

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
	get_issues_path(dir, &name);
	if(open(file, O_CREAT | O_WRONLY | O_EXCL, S_IRUSR | S_IWUSR)==-1)
	{
		perror("issues-create");
		exit(EXIT_FAILURE);
	}
}

void get_issues_path(char *dir. char** file)
{
	char * temp;
	if(dir==NULL)
		return;
	if(*(dir+strlen(dir)-1)=='/')
	{
		temp = malloc(strlen(dir)+strlen(*file)+1);
		strcpy(temp, dir);
		strcat(temp, *file);
		*file = temp;
	} else
	{
		temp = malloc(strlen(dir)+strlen(*file)+2);
		strcpy(temp, dir);
		strcat(temp, "/");
		strcat(temp, *file);
		*file = temp;
	}
}
