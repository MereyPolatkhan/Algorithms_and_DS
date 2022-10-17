// щщс 4 сагатым ай
// 4 сагат кеттигой са*бал

#include <bits/stdc++.h> 

using namespace std;

struct Node { 
    int data;
    int index;
    Node *next;
    Node() {
        this->data = -55555;
        this->index = -55555;
        this->next = NULL;
    }
    Node(int data, int index) {
        this->data = data;
        this->index = index;
        this->next = NULL;
    }

    Node (int data, int index, Node* next) {
        this->data = data;
        this->index = index;
        this->next = next;
    }
};

struct LinkedList {
    
    Node *head;
    Node *tail;
    LinkedList() {
        this->head = NULL;
        this->tail = head;
    }
    void pushBack(int data, int ind) {
        Node* newNode = new Node(data, ind);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;

    }

    int distance(int k) {
        int min = 10000000;
        int offset;
        Node* v = head;
        while (v != NULL) {
            v->data = abs(v->data - k);
            if (v->data < min) {
                min = v->data;
                offset = v->index;
            }
            v = v->next;
        }
        return offset;
    }

    void print(){
        Node *cur = head;
        while (cur != NULL) {
            cout << cur->data << "  " << cur->index << endl;
            cur = cur->next;
        }
    }
};


int main() {
    int n;
    cin >> n;   

    LinkedList* ll = new LinkedList();

    for (int i = 0; i < n; i++) {
        int data; cin >> data;
        ll->pushBack(data, i);
    }


    int k; 
    cin >> k;
    // ll->print();

    cout << ll->distance(k);
    
    return 0;
}