
/* v8::internal::HashTable<v8::internal::ObjectHashTable,
   v8::internal::ObjectHashTableShape>::HasSufficientCapacityToAdd(int) */

undefined8 __thiscall
v8::internal::HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
HasSufficientCapacityToAdd
          (HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape> *this,
          int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)this;
  iVar2 = *(int *)(lVar3 + 0xf) >> 1;
  iVar1 = param_1 + (*(int *)(lVar3 + 7) >> 1);
  if (((iVar2 - iVar1 != 0 && iVar1 <= iVar2) && (*(int *)(lVar3 + 0xb) >> 1 <= iVar2 - iVar1 >> 1))
     && (iVar1 + (iVar1 >> 1) <= iVar2)) {
    return 1;
  }
  return 0;
}

