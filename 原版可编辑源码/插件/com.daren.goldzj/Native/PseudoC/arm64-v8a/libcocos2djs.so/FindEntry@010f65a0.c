
/* v8::internal::HashTable<v8::internal::CompilationCacheTable,
   v8::internal::CompilationCacheShape>::FindEntry(v8::internal::ReadOnlyRoots,
   v8::internal::HashTableKey*, int) */

ulong __thiscall
v8::internal::HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>::
FindEntry(HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape> *this,
         long param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  
  uVar5 = *(ulong *)this;
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = (*(int *)(uVar5 + 0xf) >> 1) - 1;
  uVar6 = (ulong)(uVar3 & param_4);
  uVar2 = *(uint *)(uVar5 + ((long)(uVar6 * 0xc00000000 + 0xc00000000) >> 0x20) + 7);
  if (uVar2 != uVar1) {
    uVar4 = uVar5 & 0xffffffff00000000 | (ulong)uVar2;
    iVar8 = 1;
    do {
      if (uVar2 != (uint)uVar7) {
        uVar5 = (**(code **)*param_3)(param_3,uVar4);
        if ((uVar5 & 1) != 0) {
          return uVar6;
        }
        uVar5 = *(ulong *)this;
      }
      uVar6 = (ulong)((int)uVar6 + iVar8 & uVar3);
      uVar2 = *(uint *)(uVar5 + ((long)(uVar6 * 0xc00000000 + 0xc00000000) >> 0x20) + 7);
      iVar8 = iVar8 + 1;
      uVar4 = uVar5 & 0xffffffff00000000 | (ulong)uVar2;
    } while (uVar2 != uVar1);
  }
  return 0xffffffffffffffff;
}

