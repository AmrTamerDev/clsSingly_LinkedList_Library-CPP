# 📌 clsSinglyLinkedList – C++ Template-Based Singly Linked List

A simple and efficient generic singly linked list implementation in C++. This library supports essential list operations such as insertion, deletion, searching, and traversal using C++ templates for flexibility with any data type. 🚀

---

## 🌟 Project Overview

`clsSinglyLinkedList` is a singly linked list class in C++ that manages nodes connected in one direction. It allows dynamic data management with these key features:

- 🔄 Insert nodes at the beginning, end, or after a specific value  
- ❌ Delete nodes by value, first node, or last node  
- 🔍 Search nodes by value  
- 🖨️ Print all elements of the list for easy traversal visualization  
- ♻️ Automatic cleanup of allocated memory in the destructor  

This template class is type-agnostic, allowing storage of any data type.

---

## ✨ Features

### 🔹 Insertion Operations
- `InsertAtBeginning(Value)`: Insert a node at the start of the list.  
- `InsertAtEnd(Value)`: Insert a node at the end of the list.  
- `InsertAtAfter(ValuePrev, Value)`: Insert a node after a node containing `ValuePrev`.  

### 🔹 Deletion Operations
- `DeleteNode(Value)`: Delete the node containing the specified value.  
- `DeleteFirstNode()`: Remove the first node in the list.  
- `DeleteLastNode()`: Remove the last node in the list.  

### 🔹 Searching & Traversal
- `Find(Node*, Value)`: Internal function to find a node by value.  
- `PrintNode()`: Print all node values from head to end.  

### 🔹 Memory Management
- The destructor frees all allocated nodes automatically to prevent memory leaks.

---

## 🚀 How It Works

- **Insertion**: New nodes can be dynamically added at various positions.  
- **Deletion**: Nodes can be safely deleted by value or position, maintaining list integrity.  
- **Traversal**: You can print or search the list efficiently using simple pointer traversal.  
- **Memory Safety**: The destructor ensures all nodes are deleted when the list object is destroyed.

---

## ⚙️ Technologies Used

- **Language**: C++  
- **Templates**: Enable generic programming for any data type  
- **Pointers**: Manage dynamic nodes and link them in a chain  
- **Singly Linked List**: A linear data structure with nodes linked in one direction only

---

## 🎯 Learning Outcomes

This project helps you understand:

- ✅ Dynamic memory allocation and pointer manipulation in C++  
- ✅ Basic linked list operations such as insertion, deletion, and searching  
- ✅ Template programming for type-agnostic data structures  
- ✅ Implementing data structures from scratch for educational purposes

---

## 📜 License

This project is open-source! Feel free to use, modify, and enhance it in your own projects. 🚀

---

## 🤝 Contributing

Contributions and improvements are welcome! Please open an issue or submit a pull request with your ideas.

---

## 🏁 Getting Started

1. Download or clone the repository.  
2. Include `clsSinglyLinkedList.h` in your C++ project.  
3. Compile your code with a standard C++ compiler:  
   ```bash
   g++ main.cpp -o output
