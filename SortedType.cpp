//copied from Lab 6
#include"SortedType.h"
#include<iostream>
#include <exception>
using namespace std;

template<class ItemType>
SortedType<ItemType>::SortedType()
{
    length=0;
    listData=NULL;
    currentPos=NULL;

}
template<class ItemType>
int SortedType<ItemType>::GetLength()
{
    return length;
}
template<class ItemType>
bool SortedType<ItemType>::IsFull()
{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc exception)
    {
        return true;
    }
}
template<class ItemType>
bool SortedType<ItemType>::PutItem(ItemType item)
{
    NodeType* newNode;
    if(IsFull())
    {
        return false;
    }
    else
    {
        newNode=new NodeType;
        newNode->info=item;
    }
    NodeType* currentPos = listData;
    NodeType* previous = NULL;
    while(currentPos!= NULL)
    {
        if(currentPos->info>=item)
        {
            newNode->next=currentPos;
            if(previous == NULL)
            {
                listData = newNode;
                length++;

            }
            else
            {
                length++;

                previous->next = newNode;
            }
            return true;
        }
        else
        {
            previous = currentPos;
            currentPos = currentPos->next;
        }
    }
    newNode->next = currentPos;
    if(previous== NULL)
    {
        length++;
        listData = newNode;
    }
    else
    {
        length++;
        previous->next = newNode;

    }
}
template<class ItemType>
bool SortedType<ItemType>::DeleteItem(ItemType item)
{
    NodeType* currentLocation = listData;
    NodeType* previousLocation = NULL;
    bool found = false;

    if(currentLocation != NULL)
    {
        if((item == (currentLocation->info)))
        {
            found = true;
            listData = listData->next;
            delete previousLocation;
            length--;

        }

        else
        {


            previousLocation = currentLocation;
            currentLocation = currentLocation->next;
            bool moreToSearch = (currentLocation !=NULL);

            while (moreToSearch && !found)
            {
                if(item ==(currentLocation->info))
                {
                    found = true;
                    NodeType* locationToDelete = currentLocation;
                    previousLocation->next = currentLocation->next;
                    locationToDelete->next = NULL;
                    delete locationToDelete;
                    length--;
                }
                else
                {
                    previousLocation = currentLocation;
                    currentLocation = currentLocation->next;
                    moreToSearch = (currentLocation !=NULL);

                }
            }

        }

    }

    return found;
}
template<class ItemType>
void SortedType<ItemType>::ResetList()
{
    currentPos = NULL;
}
template<class ItemType>

ItemType SortedType<ItemType>::GetNextItem()
{
    if(currentPos == NULL)
    {
        currentPos =listData;

    }
    else
        currentPos = currentPos->next;
    if(currentPos == NULL)
    {
        cout<< "Reached at the end of the list"<<endl;
        cout<<"Printing Garbage Value"<<endl;
        return ItemType();

    }
    return currentPos->info;
}
template<class ItemType>
ItemType SortedType<ItemType>::GetItem(ItemType item,bool&found)
{
    ItemType returnItem;
    NodeType* location = listData;
    found = false;
    returnItem = item;
    while(location != NULL)
    {
        if(item == location->info)
        {
            found = true;
            returnItem = location->info;
            break;

        }
        else
            location = location->next;
    }
    return returnItem;
}
template<class ItemType>
void SortedType<ItemType>::MakeEmpty()
{
    NodeType* locationToDelete = NULL;

    while(listData!=NULL)
    {
        locationToDelete = listData;
        listData= listData->next;
        if(locationToDelete == currentPos)
        {
            currentPos = currentPos->next;
        }
        delete locationToDelete;
        length--;

    }
}
template<class ItemType>
SortedType<ItemType>::~SortedType()
{
    MakeEmpty();
}

template<class ItemType>
void SortedType<ItemType>::print()
{
    NodeType *temp =listData;
    while(temp!=NULL)
    {
        cout<<temp->info;
        temp=temp->next;
        cout<<"\t";
    }
}


