
/* v8::internal::HashTable<v8::internal::NumberDictionary,
   v8::internal::NumberDictionaryShape>::EntryForProbe(v8::internal::ReadOnlyRoots,
   v8::internal::Object, int, v8::internal::InternalIndex) */

ulong __thiscall
v8::internal::HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
EntryForProbe(HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape> *this,
             long param_2,ulong param_3,int param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  double dVar5;
  
  if ((param_3 & 1) == 0) {
    dVar5 = (double)((int)param_3 >> 1);
  }
  else {
    dVar5 = *(double *)(param_3 + 3);
  }
  uVar3 = *(ulong *)(*(long *)(param_2 + 0x410) + 7);
  uVar3 = (uVar3 ^ (ulong)(uint)(int)dVar5 ^ 0xffffffffffffffff) +
          (uVar3 ^ (uint)(int)dVar5) * 0x40000;
  uVar2 = (*(int *)(*(long *)this + 0xf) >> 1) - 1;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uVar3 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uVar3 = (ulong)(((uint)(uVar3 >> 0x16) ^ (uint)uVar3) & uVar2 & 0x3fffffff);
  if (1 < param_4) {
    iVar4 = 1;
    do {
      if (uVar3 == param_5) {
        return param_5;
      }
      uVar1 = (int)uVar3 + iVar4;
      iVar4 = iVar4 + 1;
      uVar3 = (ulong)(uVar1 & uVar2);
    } while (param_4 != iVar4);
  }
  return uVar3;
}

