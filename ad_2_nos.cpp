#include <iostream>

struct Node{
    int data;
    Node* next;
};

class LinkedList{
    private:
    Node* head;

    public:
    LinkedList(){
        head = NULL;
    }

    void insert(int x) {
        Node* newNode = new Node;
        if (newNode == NULL) {
            std::cout << "Memory issue";
            return;
        }
        newNode->data = x; 
        newNode->next = NULL; 

        if (head == NULL) {
            head = newNode;
        } 
        else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display(){
        Node* temp = head;
        while(temp){
            std::cout << temp->data << '\t';
            temp = temp->next;
        }
    }

    Node* getHead(){
        return head;
    }
};

void addTwoNumbers(Node* l1, Node* l2){
    LinkedList l3;
    int carry = 0;

    while(l1 && l2){
        int sum = l1->data + l2->data + carry;
        if(sum > 9){
            carry = 1;
            l3.insert(sum % 10);
        }
        else{
            carry = 0;
            l3.insert(sum);
        }
        
        if(l1 == NULL){
            l3->next = l2;
        }
        else if(l2 == NULL){
            l3->next = l1;
        }
        else{
            l1 = l1->next;
            l2 = l2->next;
        }
    }

    l3.display();
}

int main(){
    LinkedList l1;
    LinkedList l2;
    l1.insert(2);
    l1.insert(4);
    l1.insert(3);

    l2.insert(5);
    l2.insert(6);
    l2.insert(4);

    addTwoNumbers(l1.getHead(), l2.getHead());
    return 0;
}
