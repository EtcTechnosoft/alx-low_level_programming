#ifndef DOG_H
#define DOG_H

/**
 * struct dog - checks the code
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: Always 0.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
