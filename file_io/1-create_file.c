#include "main.h"

/**
 * _strlen - finds length of string
 * @s: String
 * Return: Length
 */

ssize_t _strlen(char *s)
{
	ssize_t x = 0;

	for (; s[x]; x++)
		;
	return (x);
}

/**
 * create_file - Creates a file
 * @filename: Name of the file to create
 * @text_content: What is going inside the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_Check;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	write_Check = write(fd, text_content, _strlen(text_content));
	if (write_Check == -1)
		return (-1);
	close(fd);
	return (1);
}