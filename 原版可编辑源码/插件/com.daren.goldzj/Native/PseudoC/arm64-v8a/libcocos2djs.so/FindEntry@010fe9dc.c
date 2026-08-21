
/* v8::internal::HashTable<v8::internal::NumberDictionary,
   v8::internal::NumberDictionaryShape>::FindEntry(v8::internal::ReadOnlyRoots, unsigned int, int)
    */

ulong __thiscall
v8::internal::HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
FindEntry(HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape> *this,
         long param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  double dVar6;
  
  uVar4 = *(ulong *)this;
  uVar2 = (*(int *)(uVar4 + 0xf) >> 1) - 1;
  uVar3 = (ulong)(uVar2 & param_4);
  uVar1 = *(uint *)(uVar4 + 7 + ((long)(uVar3 * 0xc00000000 + 0x1000000000) >> 0x20));
  if (uVar1 != *(uint *)(param_2 + 0x20)) {
    iVar5 = 1;
    do {
      if (uVar1 != (uint)*(undefined8 *)(param_2 + 0x28)) {
        if ((uVar1 & 1) == 0) {
          dVar6 = (double)((int)uVar1 >> 1);
        }
        else {
          dVar6 = *(double *)((uVar4 & 0xffffffff00000000 | (ulong)uVar1) + 3);
        }
        if ((int)dVar6 == param_3) {
          return uVar3;
        }
      }
      uVar3 = (ulong)((int)uVar3 + iVar5 & uVar2);
      uVar1 = *(uint *)(uVar4 + 7 + ((long)(uVar3 * 0xc00000000 + 0x1000000000) >> 0x20));
      iVar5 = iVar5 + 1;
    } while (uVar1 != *(uint *)(param_2 + 0x20));
  }
  return 0xffffffffffffffff;
}

