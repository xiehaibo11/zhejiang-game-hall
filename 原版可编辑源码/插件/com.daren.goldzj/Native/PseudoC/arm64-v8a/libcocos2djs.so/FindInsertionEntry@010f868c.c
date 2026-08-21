
/* v8::internal::HashTable<v8::internal::ObjectHashTable,
   v8::internal::ObjectHashTableShape>::FindInsertionEntry(unsigned int) */

uint __thiscall
v8::internal::HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
FindInsertionEntry(HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape> *this
                  ,uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  
  uVar6 = *(ulong *)this;
  uVar4 = (*(int *)(uVar6 + 0xf) >> 1) - 1;
  uVar5 = uVar4 & param_1;
  iVar7 = *(int *)(uVar6 + 7 + (long)(int)(uVar5 * 8 + 0xc));
  iVar1 = *(int *)((uVar6 & 0xffffffff00000000) + 0xa8);
  if ((iVar7 != iVar1) && (iVar2 = *(int *)((uVar6 & 0xffffffff00000000) + 0xa0), iVar7 != iVar2)) {
    iVar7 = 1;
    do {
      uVar5 = uVar5 + iVar7 & uVar4;
      iVar3 = *(int *)(uVar6 + 7 + (long)(int)(uVar5 * 8 + 0xc));
      if (iVar3 == iVar1) {
        return uVar5;
      }
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar2);
  }
  return uVar5;
}

