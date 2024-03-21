#include <stdio.h>
#include <stdlib.h>

typedef struct Node {

    int data;
    struct Node *next;

} Node;

Node *createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node)); // Aloca memoria para o novo no
    if (newNode == NULL) {
        printf("Erro: Falha na alocação de memória. \n");
        exit(1);

    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(Node **head, int data) {
    Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void printList(Node *head) {
    Node *current = head;
    printf("Lista: ");
    while (current != NULL) { 
        printf("%d -> ", current->data);
        current = current->next;
    }

printf("NULL\n");
}

int main() {
        Node *head = NULL;

        insertAtBeginning(&head, 5);
        insertAtBeginning(&head, 10);
        insertAtBeginning(&head, 15);
       
        printList(head);

     return 0;
}


