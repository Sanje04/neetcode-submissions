class DynamicArray {
private:
    int *dynamicArray;
    int size;
    int arrayCapacity;

public:

    DynamicArray(int capacity) {
        dynamicArray = new int[capacity];
        size = 0;
        arrayCapacity = capacity;
    }

    int get(int i) {
        return dynamicArray[i];
    }

    void set(int i, int n) {
        dynamicArray[i] = n;
    }

    void pushback(int n) {
        // for (int i = 0; i<dynamicArray.size(); i++){
        //     if (dynamicArray[i] == null){
        //         dynamicArray[i] = n;
        //         return;
        //     }
        // }
        if (size == arrayCapacity){
            resize();
        }
        dynamicArray[size] = n;
        size++;
    }

    int popback() {
        int pop = dynamicArray[size-1];
        dynamicArray[size-1] = 0;
        size--;
        return pop;
    }

    void resize() {
        int *resizedArray = new int[arrayCapacity*2];
        for (int i=0; i<size; i++){
            resizedArray[i] = dynamicArray[i];
        }

        delete[] dynamicArray;

        dynamicArray = resizedArray;
        arrayCapacity *= 2; 
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return arrayCapacity;
    }
};
