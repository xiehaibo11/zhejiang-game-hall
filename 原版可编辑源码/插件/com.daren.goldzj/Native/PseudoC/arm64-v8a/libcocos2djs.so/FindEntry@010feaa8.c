
/* v8::internal::HashTable<v8::internal::NumberDictionary,
   v8::internal::NumberDictionaryShape>::FindEntry(v8::internal::Isolate*, unsigned int) */

ulong __thiscall
v8::internal::HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
FindEntry(HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape> *this,
         Isolate *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  double dVar6;
  
  uVar4 = *(ulong *)this;
  uVar3 = (*(ulong *)(*(long *)(param_1 + 0x490) + 7) ^ (ulong)param_2 ^ 0xffffffffffffffff) +
          (*(ulong *)(*(long *)(param_1 + 0x490) + 7) ^ (ulong)param_2) * 0x40000;
  uVar2 = (*(int *)(uVar4 + 0xf) >> 1) - 1;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uVar3 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uVar3 = (ulong)(uVar2 & ((uint)(uVar3 >> 0x16) ^ (uint)uVar3) & 0x3fffffff);
  uVar1 = *(uint *)(((long)(uVar3 * 0xc00000000 + 0x1000000000) >> 0x20) + uVar4 + 7);
  if (uVar1 != *(uint *)(param_1 + 0xa0)) {
    iVar5 = 1;
    do {
      if (uVar1 != (uint)*(undefined8 *)(param_1 + 0xa8)) {
        if ((uVar1 & 1) == 0) {
          dVar6 = (double)((int)uVar1 >> 1);
        }
        else {
          dVar6 = *(double *)((uVar4 & 0xffffffff00000000 | (ulong)uVar1) + 3);
        }
        if ((int)dVar6 == param_2) {
          return uVar3;
        }
      }
      uVar3 = (ulong)((int)uVar3 + iVar5 & uVar2);
      uVar1 = *(uint *)(((long)(uVar3 * 0xc00000000 + 0x1000000000) >> 0x20) + uVar4 + 7);
      iVar5 = iVar5 + 1;
    } while (uVar1 != *(uint *)(param_1 + 0xa0));
  }
  return 0xffffffffffffffff;
}

