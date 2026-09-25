class Node{
    public:
    Node * next;
    int val;
    Node(int v):val(v), next(nullptr){}
};

class LinkedList {
    Node *head;
    int size = 0;
public:
    LinkedList() {
        head = nullptr;
    }

    int get(int index) {
        int j = -1;
        if(index < size){
            Node *r = head;
            for(int i = 0; i <index; i++){
                r = r->next;
            }
            j = r->val;
        }
        return j;
    }

    void insertHead(int value) {
        Node *temp = new Node(value);
        temp->next = head;
        head = temp;
        size++;
    }
    
    void insertTail(int val) {
        Node* temp = head;
        if(head != nullptr){
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = new Node(val);
        }
        else{
            head = new Node(val);
        }
        size++;
    }

    bool remove(int index) {
        if (index >= size){
            return false;
        }
        Node *slow = head;
        Node *fast = head->next;
        if (index == 0){
            head = head->next;
            delete slow;
        }
        else{
            for(int i = 0; i< index-1;i++){
                slow = slow->next;
                fast = fast->next;
            }
            slow->next = fast->next;
            delete fast;
        }
        size--;
        return true;
    }

    vector<int> getValues() {
        vector<int> vec;
        Node* temp = head;
        while(temp != nullptr){
            vec.push_back(temp->val);
            temp = temp->next;
        }
        return vec;
    }
};
