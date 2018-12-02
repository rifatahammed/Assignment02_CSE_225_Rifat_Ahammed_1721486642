#include "UnsortedType.h"
#include <exception>
#include <iostream>
template <class ItemType>
UnsortedType<ItemType>::UnsortedType(){
 length = 0;
 listData = nullptr;
 currentPos = nullptr;
}
template<class ItemType>
UnsortedType<ItemType>::~UnsortedType(){
 MakeEmpty();
}
template<class ItemType>
void UnsortedType<ItemType>::MakeEmpty(){
NodeType* locationToDelete = nullptr;
while (listData != nullptr){
 locationToDelete = listData;
 listData = listData->next;
 if (currentPos == locationToDelete){
 //Iterator is pointing to the item to be deleted
 currentPos = currentPos->next;
 }
 delete locationToDelete;
 length--;
 }
}
template<class ItemType>
bool UnsortedType<ItemType>::IsFull(){
try{
 NodeType* newNode = new NodeType;
 delete newNode;
 }
catch (std::bad_alloc exception){
 //This means a new node can not be allocated
 //From the dynamic memory.
 //This means we have reached capacity.
 return true;
 }
return false;
}
template<class ItemType>
int UnsortedType<ItemType>::GetLength(){
return length;
}
template<class ItemType>
bool UnsortedType<ItemType>::IsEmpty(){
return (length == 0 && listData == nullptr);
}
template<class ItemType>
ItemType UnsortedType<ItemType>::GetItem(ItemType item, bool & found){
NodeType* curr = listData;
found = false;
while (curr != nullptr && !found){
 if (curr->info != item)
 curr = curr->next;
 else{
 //Found a copy of the item inside the linked list.
 //return the fresh copy of the item inside the list.
 found = true;
 return curr->info;
 }
 }
return item;
}
template<class ItemType>
bool UnsortedType<ItemType>::PutItem(ItemType item){
if (IsFull())
 return false;
NodeType* newNode = new NodeType;
 newNode->info = item;
 newNode->next = listData;
 listData = newNode;
 length++;
return true;
}
template<class ItemType>
void UnsortedType<ItemType>::ResetList(){
 currentPos = nullptr;
} 
template<class ItemType>
bool UnsortedType<ItemType>::DeleteItem(ItemType item){
NodeType* curr = listData;
NodeType* prev = nullptr;
bool found = false;
while (curr != nullptr && !found){
 if (curr->info == item) {
 found = true;
 if (prev == nullptr) {
 //This means, the item to delete is the linked list
//Head. This means, after deleteing current node,
//we need to update listData head pointer.
 listData = curr->next;
 }
 else {
 prev->next = curr->next;
 }
 delete curr;
 length--;
 }
 else {
 prev = curr;
 curr = curr->next;
 }
 }
return found;
}
template<class ItemType>
bool UnsortedType<ItemType>::HasNextItem(){
if (currentPos == nullptr)
 return (listData != nullptr);

return (currentPos->next != nullptr);
}
template<class ItemType>
ItemType UnsortedType<ItemType>::GetNextItem(){
 currentPos = ((currentPos == nullptr) ? listData : currentPos->next);
return currentPos->info;
}
 
