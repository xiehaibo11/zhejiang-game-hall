
/* v8::internal::HashTable<v8::internal::SimpleNumberDictionary,
   v8::internal::SimpleNumberDictionaryShape>::FindEntry(v8::internal::Isolate*, unsigned int) */

ulong __thiscall
v8::internal::
HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::FindEntry
          (HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>
           *this,Isolate *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  double dVar7;
  
  uVar5 = *(ulong *)this;
  uVar4 = (*(ulong *)(*(long *)(param_1 + 0x490) + 7) ^ (ulong)param_2 ^ 0xffffffffffffffff) +
          (*(ulong *)(*(long *)(param_1 + 0x490) + 7) ^ (ulong)param_2) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uVar4 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uVar3 = (*(int *)(uVar5 + 0xf) >> 1) - 1;
  uVar2 = uVar3 & ((uint)(uVar4 >> 0x16) ^ (uint)uVar4);
  uVar1 = uVar2 & 0x3fffffff;
  uVar2 = *(uint *)(uVar5 + 7 + (long)(int)(uVar2 * 8 + 0xc));
  if (uVar2 != *(uint *)(param_1 + 0xa0)) {
    iVar6 = 1;
    do {
      if (uVar2 != (uint)*(undefined8 *)(param_1 + 0xa8)) {
        if ((uVar2 & 1) == 0) {
          dVar7 = (double)((int)uVar2 >> 1);
        }
        else {
          dVar7 = *(double *)((uVar5 & 0xffffffff00000000 | (ulong)uVar2) + 3);
        }
        if ((int)dVar7 == param_2) {
          return (ulong)uVar1;
        }
      }
      uVar1 = uVar1 + iVar6 & uVar3;
      uVar2 = *(uint *)(uVar5 + 7 + (long)(int)(uVar1 * 8 + 0xc));
      iVar6 = iVar6 + 1;
    } while (uVar2 != *(uint *)(param_1 + 0xa0));
  }
  return 0xffffffffffffffff;
}

