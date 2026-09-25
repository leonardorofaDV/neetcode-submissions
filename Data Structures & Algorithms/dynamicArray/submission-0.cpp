class DynamicArray {
    int capacity = 0;
    int size = 0;
    int* arr;
public:

    DynamicArray(int capacity) {
        this->capacity = capacity;
       arr = new int[capacity];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (size == capacity){
            resize();
        }
        arr[size] = n;
        size++;
    }

    int popback() {
        int i = arr[size-1];
        arr[size -1] = 0;
        size--;
        return i;
    }

    void resize() {
        capacity = capacity*2;
        int *temp = new int[capacity];
        for(int i = 0; i<size;i++){
            temp[i] = arr[i];
        } 
        delete[] arr;
        arr = temp;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
};
