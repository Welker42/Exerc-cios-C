#include <stdio.h>
#include <stdlib.h>
 
// Definição da estrutura do nó da lista
typedef struct Node {
    int data;
    struct Node* next;
} Node;
 
// Função para contar o número de células da lista
int countNodes(Node* head) {
    int count = 0;
    Node* current = head;
    // Percorre a lista enquanto o ponteiro não for nulo
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}
 
// Função para adicionar um nó no início da lista
void push(Node** head_ref, int new_data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
 
// Função principal
int main() {
    Node* head = NULL;
    // Adiciona alguns elementos na lista
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    // Chama a função para contar o número de células e imprime o resultado
    printf("O numero de celulas na lista e: %d\n", countNodes(head));
    return 0;
}