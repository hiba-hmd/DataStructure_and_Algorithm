/* You have a browser of one tab where you start on the homepage and you can visit another url, get back in the history number of steps or move forward in the history number of steps.

Implement the BrowserHistory class:

BrowserHistory(string homepage) Initializes the object with the homepage of the browser.
void visit(string url) Visits url from the current page. It clears up all the forward history.
string back(int steps) Move steps back in history. If you can only return x steps in the history and steps > x, you will return only x steps. Return the current url after moving back in history at most steps.
string forward(int steps) Move steps forward in history. If you can only forward x steps in the history and steps > x, you will forward only x steps. Return the current url after forwarding in history at most steps.*/
class BrowserHistory {

public:
    struct Node{
        string name;
        Node* next;
        Node* prev;
    };
    Node* head=NULL;
    Node* tail=NULL;
    BrowserHistory(string homepage) {
        Node* page = new Node();
        page->name = homepage;
        head = page;
        tail = page;      
    }
    void visit(string url) {
        Node* page = new Node();
        page->name = url;
        tail->next = page;
        page->prev = tail;
        tail = page;    
    }
    string back(int steps) {
     while((steps > 0) && (tail->prev!=NULL)){
         tail = tail->prev;
         steps--;
     } 
     return tail->name;
    }
    
    string forward(int steps) {
        while((steps > 0) && (tail->next!=NULL)){
         tail = tail->next;
         steps--;
     }
     return tail->name; 
        
    }
};
