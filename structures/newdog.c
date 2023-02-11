#include <stdlib.h>
#include "dog.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
  * A function that creates a new structure and then copies and stores 
  * it in another new struct.
  * will return null if the function fails
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *nename, neowner;
	int lename, leowner;

	dog_t *dogg = malloc(sizeof(dog_t));
	if(dogg == NULL)
		return (NULL);
	_strlen(name);
	lename = _strlen(name);
	nename = malloc((lename + 1) * sizeof(char));
	if(nename == NULL)
	{
		free(dogg);
		return(NULL);
	}
	_strcpy(nename, name);
	
	_strlen(owner);

	leowner = _strlen(owner);
	neowner = malloc((leowner +1) * sizeof(char));
	if(neowner == '\0')
	{
		free(nename);
		free(dogg);
		return NULL;
	}
	_strcpy(neowner, owner);
	
	dogg->name = nename;
	dogg->age = age;
	dogg->owner = neowner;
	
	return dogg;
}

/**
  *The _strcpy and _strlen definitions
  */
int _strlen(char *s)
{
	int i = 0;
	while(*s != '\0')
	{
		i++;
		s++;
	}

	return(i);
}

char *_strcpy(char *dest, char *src)
{
	int j;
	for(j = 0; src[j]; i++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return dest;
}
