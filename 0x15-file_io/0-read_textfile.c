#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcnt1.h>

/**
 * read_textfiles - reads text file then prints it to the POSIX standard ouput
 * @filename: name of the file
 * @letters: the number of letters contained in the file
 *
 * return: the output of the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t relen, wrlen;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) *letters);

	if (buf == NUL)
	{
		close(fd);
		return (0);
	}
	relen = read(fd, buf, letters);
	close(fd);
	if (relen == -1)
	{
		free(buf);
		return (0);
	}
	wrlen = write(STDOUT_FILENO, buf, relen);
	free(buf);
	if (relen != wrlen)
		return (0);
	return (wrlen);
}
