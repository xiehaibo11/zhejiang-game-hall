
/* v8::internal::HashTable<v8::internal::SimpleNumberDictionary,
   v8::internal::SimpleNumberDictionaryShape>::FindEntry(v8::internal::ReadOnlyRoots, unsigned int,
   int) */

ulong __thiscall
v8::internal::
HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::FindEntry
          (HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>
           *this,long param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  double dVar5;
  
  uVar3 = *(ulong *)this;
  uVar2 = (*(int *)(uVar3 + 0xf) >> 1) - 1;
  param_4 = uVar2 & param_4;
  uVar1 = *(uint *)(uVar3 + 7 + (long)(int)(param_4 * 8 + 0xc));
  if (uVar1 != *(uint *)(param_2 + 0x20)) {
    iVar4 = 1;
    do {
      if (uVar1 != (uint)*(undefined8 *)(param_2 + 0x28)) {
        if ((uVar1 & 1) == 0) {
          dVar5 = (double)((int)uVar1 >> 1);
        }
        else {
          dVar5 = *(double *)((uVar3 & 0xffffffff00000000 | (ulong)uVar1) + 3);
        }
        if ((int)dVar5 == param_3) {
          return (ulong)param_4;
        }
      }
      param_4 = param_4 + iVar4 & uVar2;
      uVar1 = *(uint *)(uVar3 + 7 + (long)(int)(param_4 * 8 + 0xc));
      iVar4 = iVar4 + 1;
    } while (uVar1 != *(uint *)(param_2 + 0x20));
  }
  return 0xffffffffffffffff;
}

