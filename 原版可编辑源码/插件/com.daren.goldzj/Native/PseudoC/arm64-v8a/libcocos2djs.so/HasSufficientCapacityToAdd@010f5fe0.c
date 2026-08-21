
/* v8::internal::HashTable<v8::internal::StringTable,
   v8::internal::StringTableShape>::HasSufficientCapacityToAdd(int) */

undefined8 __thiscall
v8::internal::HashTable<v8::internal::StringTable,v8::internal::StringTableShape>::
HasSufficientCapacityToAdd
          (HashTable<v8::internal::StringTable,v8::internal::StringTableShape> *this,int param_1)

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

