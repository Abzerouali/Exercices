#include <stdio.h>
#include <string.h>
/**
 *The code displays greetings,
 *calculates string lengths, accesses characters,
 *splits sentences into words, and reverses a sentence,
 *showcasing basic string operations.
 */
int main() {
	char name[] = "John";
	int age = 25;
	char greeting[50];
	sprintf(greeting, "Hello, %s! You are %d years old.", name, age);
	printf("%s\n", greeting);

	char message[] = "Hello, world!";
	printf("The length of the message is: %d\n", strlen(message));

	char word[] = "C programming";
	printf("The first character of the word is: %c\n", word[0]);
	printf("The last character of the word is: %c\n", word[strlen(word) - 1]);

	char sentence[] = "This is a sample sentence.";
	printf("The words in the sentence are: ");
	char* token = strtok(sentence, " ");
	while (token != NULL) {
		printf("%s ", token);
		token = strtok(NULL, " ");
	}
	printf("\n");

	char reverse_sentence[50];
	int len = strlen(sentence);
	for (int i = len - 1; i >= 0; i--) {
		reverse_sentence[len - i - 1] = sentence[i];
	}
	reverse_sentence[len] = '\0';
	printf("The sentence in reverse is: %s\n", reverse_sentence);

	return 0;
}
