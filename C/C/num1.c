#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó da lista
typedef struct list {
    int info;           // Armazena o dado do nó
    struct list *next;  // Ponteiro para o próximo nó na lista
} list;

// Função para criar um novo nó
list* createNode(int info) {
    list *newlist = (list*)malloc(sizeof(list)); // Aloca memória para o novo nó
    if (newlist == NULL) { // Verifica se a alocação de memória foi bem-sucedida
        printf("Erro: Não foi possível alocar memória.\n");
        exit(EXIT_FAILURE);
    }
    newlist->info = info; // Define o dado do novo nó
    newlist->next = NULL; // Inicializa o ponteiro para o próximo nó como NULL
    return newlist; // Retorna o endereço do novo nó criado
}

// Função para inserir um novo nó no final da lista
void insert(list **head, int info) {
    list *newlist = createNode(info); // Cria um novo nó com o dado especificado
    if (*head == NULL) { // Se a lista estiver vazia
        *head = newlist; // O novo nó se torna o primeiro nó da lista
    } else {
        list *temp = *head; // Cria um nó temporário para percorrer a lista
        while (temp->next != NULL) { // Enquanto não chegar ao final da lista
            temp = temp->next; // Avança para o próximo nó
        }
        temp->next = newlist; // Insere o novo nó no final da lista
    }
}

// Função para imprimir os elementos da lista
void printList(list *head) {
    list *temp = head; // Cria um nó temporário para percorrer a lista
    printf("Lista: ");
    while (temp != NULL) { // Enquanto não chegar ao final da lista
        printf("%d ", temp->info); // Imprime o dado do nó atual
        temp = temp->next; // Avança para o próximo nó
    }
    printf("\n");
}

int main() {
    list *head = NULL; // Cria uma lista vazia, então o ponteiro para o primeiro nó é NULL

    // Inserindo elementos na lista
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    insert(&head, 40);

    // Imprimindo os elementos da lista
    printList(head);

    return 0;
}
