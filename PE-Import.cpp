#include <dirent.h>
#include <stdio.h>
#include <sys/types.h>
#include <string.h>

int main(int argc, char *argv[]){
	//Check root directory for "PE-1.txt"
		//If it doesn't exist, make it, write "I want to learn PE file format!" in it
		//If it does exist, check that it has the string "I want to learn PE file format!" in it.
			//If no, add "I want to learn PE file format!" to the file
			//If yes, print the content of the file to stdout
			
		FILE *fp; //File pointer
		const char* filename = "C:\\PE-1.txt";
		fp = fopen(filename, "a+"); //Open for read/write, create if it doesn't exist
		char *contents = fgets(contents, 40, fp); //Get contents of file
		// IF (contents == "I want to learn PE file format!")
			//Print contents to stdout
		if (strncmp(contents, "I want to learn PE file format!", 40) == 0){
			printf(contents);
		}
		// ELSE
			//Append file with string "I want to learn PE file format!"
		else{
			fputs("I want to learn PE file format!", fp);
		}
			
	fclose(fp);
	return 0;
}
