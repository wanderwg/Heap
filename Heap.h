#pragma once
typedef int HPDatatype;
typedef struct Heap
{
	HPDatatype* _array;
	int _capacity;
	int _size;
}Heap;
 
//用数组初始化堆
void InitHeap(Heap* hp, HPDatatype* array, int size);

//初始化一个空堆
void InitEmptyHeap(Heap* hp, int capacity);

//在堆中插入值为data的元素
void InsertHeap(Heap* hp, HPDatatype data);

//删除堆顶元素
void EraseHeap(Heap* hp);

//获取堆中有效元素个数
int HeapSize(Heap* hp);

//检测堆是否为空堆
int HeapEmpty(Heap* hp);

//获取堆顶元素
HPDatatype HeapTop(Heap* hp);

//销毁堆
void DestoryHeap(Heap* hp);