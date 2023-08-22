#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

void generateRandomPassword(char *password, int length) {
	    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	        int i;
		    
		    for (i = 0; i < length - 1; i++) {
			            int index = rand() % (sizeof(charset) - 1);
				            password[i] = charset[index];
					        }
		        
		        password[length - 1] = '\0'; // Null-terminate the password
						     // }
						     //
						     // int main() {
						     //     srand(time(NULL)); // Seed the random number generator with current time
						     //         
						     //             char password[PASSWORD_LENGTH];
						     //                 generateRandomPassword(password, PASSWORD_LENGTH);
						     //                     
						     //                         printf("Generated Password: %s\n", password);
						     //                             
						     //                                 return 0;
						     //                                 }
						    //
