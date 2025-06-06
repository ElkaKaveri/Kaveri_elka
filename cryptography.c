
#include <stdio.h>
#include <string.h>

void encrypt(char *input, int step) {
    int length = strlen(input);
    for (int i = 0; i < length; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            input[i] = ((input[i] - 'a' + step) % 26 + 26) % 26 + 'a';
        } else if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] = ((input[i] - 'A' + step) % 26 + 26) % 26 + 'A';
        }
    }
}

void decrypt(char *input, int step) {
    encrypt(input, step);
}

int main() {
    char message[100];
    int step;

    // Encryption
    printf("Enter the message to encrypt: ");
    scanf(" %[^\n]s", message);  // Read the whole line including spaces
    printf("Enter the encryption step: ");
    scanf("%d", &step);

    encrypt(message, step);
    printf("Encrypted string: %s\n", message);

    // Decryption
    printf("\nEnter the message to decrypt: ");
    scanf(" %[^\n]s", message);  // Read the whole line including spaces
    printf("Enter the decryption step: ");
    scanf("%d", &step);

    decrypt(message, step);
    printf("Decrypted string: %s\n", message);

    return 0;
}
