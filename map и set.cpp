#include <iostream>
#include <stack>
#include <queue> // очередь подключить
#include <list> //  лист подключаеть
#include <set>
#include <map>
#include <string>
using namespace std;
sl;dfms;dfs;afls;falsf;lsfasf
int main()
{
    
    // STACK
    /*
    stack<int> st;
    st.push(5); // добавляет элемент в конец
    st.push(10);

    cout << st. size() << endl; // узнать размер 

    int num = st.top();  // узнать последний элемент

    cout << num << " " << st.size() << endl;
    
    st.push(14);
    st.push(30);
    
    st.pop();  // удаляет послдений элемент 
    
    cout << st.top() << endl; 
    
    // empty -  возращает 1 если стек пустой и 0 если не пустой
    
    if (st.empty() == 1) {
        cout << "Я ПУСТОЙ";
    } else {
        cout << "Я НЕ ПУСТОЙ";
    }
    
    */
    /*
    // ОЧЕРЕДЬ
    queue<int> q;
    
    q.push(5);   // добавляет в конец
    q.push(10);  
    q.push(15);
    
    cout << "РАЗМЕР: " << q.size() << endl; // УЗНАТЬ РАЗМЕР ОЧЕРЕДИ
    
    cout << "ПОСЛЕДНИЙ ЭЛЕМЕНТ ОЧЕРЕДИ: " << q.back() << endl; // ПОСЛЕДНИЙ ЭЛЕМЕНТ БЕЗ УДАЛЕНИЯ!
    
    cout << "ПЕРЫЙ ЭЛЕМЕНТ ОЧЕРЕДИ: " << q.front() << endl;  // ПЕРВЫЙ ЭЛЕМЕНТ БЕЗ УДАЛЕНИЯ!
    
    
    q.pop(); // УДАЛЯЕТ ПЕРВЫЙ ЭЛЕМЕНТ ОЧЕРЕДИ
    cout << "ПЕРЫЙ НОВЫЙ ЭЛЕМЕНТ ОЧЕРЕДИ: " << q.front() << endl; 
    
    int len_q = q.size();
    for (int i = 0; i < len_q; i++) {
        cout << q.front() << " ";
        q.pop();
    }
    */
    
    // LIST
    /*
    list<int> li;
    
    li.push_back(10);   
    li.push_front(15);     //     15 10 100
    li.push_back(100);
    
    
    cout <<"ПЕРВЫЙ ЭЛЕМЕНТ "<<li.front() << endl;
    
    cout << "ПОСЛЕДНИЙ ЭЛЕМЕНТ " << li.back() << endl;
    
    
    for (int x: li) {
        cout << x << " ";
    }
    
    li.reverse();
    cout << endl;
    for (int x: li) {
        cout << x << " ";
    }
    
    cout << endl;
    
    li.sort();
    
    
    for (int x: li) {
        cout << x << " ";
    }
    
    */
    
    // SET ОН ХРАНИТ ЧИСЛА ПО ВОЗРАСТАНИЮ И ТОЛЬКО УНИКАЛЬНЫЕ ОБЪЕКТЫ
    /*
    set<int> s;
    int t;
    for(int i = 0; i < 6; i++) {
        cin >> t;
        s.insert(t);
    }
    
    for (int x: s) {
        cout << x << " ";
    }
    s.erase(20);
    s.erase(1);
    s.erase(99);
    for (int i = 0; i < 3; i++) {
        cin >> t;
        s.erase(t);
    }
    cout << endl;
    for (int x: s) {
        cout << x << " ";
    }
    
    
    /*
    vector<int> mass;
    
    mass.begin()
    */
    /*
    auto it = s.find(30); // находит ссылку на элемент 
    
    if (it == s.end()) {
        cout << "ТАКОГО ЭЛЕМЕНТА НЕТУ";
    }
    if (it != s.end()) {
        //s.erase(it); // удаляем 
        // ЭЛЕМЕНТ СУЩЕСТВУЕТ 
    }
    for (int x: s) {
        cout << x << " ";
    }
    
    
    s.count();
    */
    
    // MAP
    
    map<string, int> m;
  
    m["VOVA"] = 20;
    m["ROMA"] = 14;
    m["YARIK"] = 13;
    m["SLAVA"] = 30;
        
    for (int i = 0; i < 10; i++) {
        cin >> ИМЯ;
        cin >> КОЛИЧЕСТВО ЛЕТ;
        m[ИМЯ] = КОЛИЧЕСТВО ЛЕТ;
    }
    
    for (auto x: m) {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    cout << endl;
    m.erase("YARIK");
     for (auto x: m) {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
    
}
