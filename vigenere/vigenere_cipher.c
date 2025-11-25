#include <stdio.h>
#include <ctype.h>
#include <string.h>

void criptografar(const char *texto, const char *chave, char *saida) {
    int tamChave = strlen(chave); //CALCULA O TAMANHO DA CHAVE
    int indiceChave = 0;

    for (int i = 0; texto[i] != '\0'; i++) { //PERCORRE O TEXTO ATÉ O NULL TERMINATOR INDICANDO O FIM
        char c = texto[i];

        if (isalpha((unsigned char)c)) { //VERIFICA SE O CARACTERE É UMA LETRA
            char base = isupper((unsigned char)c) ? 'A' : 'a'; //VERIFICA O CARACTERE EM MAIÚSCULO
            char letraChave = toupper((unsigned char)chave[indiceChave % tamChave]); //GARANTE QUE NUNCA VAI PASSAR DO TAMANHO DA CHAVE
            int deslocamento = letraChave - 'A';

            char caractereCriptografado = ((c - base + deslocamento) % 26) + base;
            saida[i] = caractereCriptografado;

            indiceChave++;
        } else {
            saida[i] = c;
        }
    }

    saida[strlen(texto)] = '\0';
}

void descriptografar(const char *textoCifrado, const char *chave, char *saida) {
    int tamChave = strlen(chave);
    int indiceChave = 0;

    for (int i = 0; textoCifrado[i] != '\0'; i++) {
        char c = textoCifrado[i];

        if (isalpha((unsigned char)c)) {
            char base = isupper((unsigned char)c) ? 'A' : 'a';
            char letraChave = toupper((unsigned char)chave[indiceChave % tamChave]);
            int deslocamento = letraChave - 'A';

            char caractereDescriptografado = ((c - base - deslocamento + 26) % 26) + base;
            saida[i] = caractereDescriptografado;

            indiceChave++;
        } else {
            saida[i] = c;
        }
    }

    saida[strlen(textoCifrado)] = '\0';
}

int main() {
    const char *texto = "fffwfefef";
    const char *chave = "CHAVE";

    char cifrado[256];
    char decifrado[256];

    criptografar(texto, chave, cifrado);
    descriptografar(cifrado, chave, decifrado);

    printf("Texto original: %s\n", texto);
    printf("Criptografado: %s\n", cifrado);
    printf("Descriptografado: %s\n", decifrado);

    return 0;
}
