class LinkedList {
private:
    struct Node {
        int val;
        Node* next;
        Node(int val) : val(val), next(nullptr) {}
    };

    Node* head;
    int length;
public:
    LinkedList() {
        head = nullptr;
        length = 0;
    }
        
    int get(int index) {
        int retVal = 0;
        Node* temp = head;
        if (index >= length || index < 0) {
            return -1;
        }
        for (int i = 0; i < index; i++) {
            temp = temp->next;
        }

        return temp->val;
    }

    void insertHead(int val) {
        Node* newHead = new Node(val);
        newHead->next = head;
        head = newHead;
        length++;
    }
    
    void insertTail(int val) {
        Node* newTail = new Node(val);
        length++;
        if (head == nullptr) {   // missing this
            head = newTail;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newTail;
    }

    bool remove(int index) {
        if (index >= length || index < 0) {  // >= not >
            return false;
        }

        if (index == 0) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            length--;
            return true;
        }

        Node* temp = head;
        for (int i = 0; i < index - 1; i++) {  // stop at node BEFORE index
            temp = temp->next;
        }

        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
        length--;
        return true;
    }

    vector<int> getValues() {
        vector<int> arrayVal;
        Node* temp = head;
        for (int i = 0; i < length; i++){
            arrayVal.push_back(temp->val);
            temp = temp->next; // iterate to the next temp 
        }
        return arrayVal;
    }
};
