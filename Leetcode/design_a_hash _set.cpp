/*Design a hash set without using in built hash function*/

class MyHashSet {
public:
    vector<list<int>> val;
    int size;
    MyHashSet() {
        size=100;
        val.resize(size);
    }
    int index(int key){
        return key%size;
    }
    list<int>::iterator value(int key){
        int i= index(key);
        return find(val[i].begin(),val[i].end(),key);
    }
    void add(int key) {
        if(contains(key)){ 
            return;
        }
        else{
            int i=index(key);
            val[i].push_back(key);
        }
    }
    
    void remove(int key) {
        if(contains(key)){
        int i = index(key);
        val[i].erase(value(key));
        }
        else {
            return;
        }
    }
    
    bool contains(int key) {
        int i=index(key);
        if(value(key)!=val[i].end()){
            return true;
        }
        else 
            return false;
    }
};
