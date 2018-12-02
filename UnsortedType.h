//unsorted LL from Lab 5
#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
template <class ItemType>
class UnsortedType
{
struct NodeType {
 ItemType info = ItemType();
 NodeType* next = nullptr;
 };
public:
 UnsortedType();
 ~UnsortedType();
bool IsFull();
int GetLength();
void MakeEmpty();
bool IsEmpty();
ItemType GetItem(ItemType item, bool& found);
bool PutItem(ItemType item);
bool DeleteItem(ItemType item);
//Iterator Operations
void ResetList();
bool HasNextItem();
ItemType GetNextItem();
//Printing List Contents
void PrintList();
private:
NodeType* listData = nullptr;
int length = 0;
NodeType* currentPos = nullptr;
};
#endif 
