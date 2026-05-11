#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(int argc, char **argv) {
	const char *VERSION = "1.0.0";
	const char sayings[10][255] = {"You are loved","Your life is worth living","Love yourself","Treat yourself, you deserve it","You're gonna be fine","I love you, profoundly","It'll all work out","Have a lovely day","You're the best :)","<3"};
	const int max = ( sizeof(sayings) / sizeof(sayings[0]) ) - 1;
	const int min = 0;

	if ( argc == 2 && ( strcmp(argv[1], "-v") == 0 || strcmp(argv[1], "--version") == 0 ) ) {
		printf("%s\n",VERSION);
		exit(0);
	}

	if ( argc == 2 && ( strcmp(argv[1], "-c") == 0 || strcmp(argv[1], "--clear") == 0 ) ) {
		system("clear");
	}

	if ( argc == 2 && ( strcmp(argv[1], "-s") == 0 || strcmp(argv[1], "--sayings") == 0 ) ) {
		printf("%d\n",max + 1);
		exit(0);
	}

	if ( argc == 2 && strcmp(argv[1], "--help") == 0 ) {
		printf("Usage: sayings [optional flags]\n");
		printf("Optional flags:\n");
		printf("--clear, -c   Clear the screen before printing\n");
		printf("--sayings, -s Return number of sayings\n");
		printf("--version, -v Return the current version\n");
		printf("--help        Display this help message\n");
		exit(0);
	}

	srand(time(NULL));
	int randint = (rand() % (max - min + 1)) + min;
	printf("%s\n",sayings[randint]);
	return 0;
}
