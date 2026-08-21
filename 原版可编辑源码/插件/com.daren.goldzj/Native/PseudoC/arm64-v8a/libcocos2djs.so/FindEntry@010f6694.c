
/* v8::internal::HashTable<v8::internal::CompilationCacheTable,
   v8::internal::CompilationCacheShape>::FindEntry(v8::internal::Isolate*,
   v8::internal::HashTableKey*) */

ulong __thiscall
v8::internal::HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>::
FindEntry(HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape> *this,
         Isolate *param_1,HashTableKey *param_2)

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
  uVar1 = *(uint *)(param_1 + 0xa0);
  uVar7 = *(undefined8 *)(param_1 + 0xa8);
  uVar3 = (*(int *)(uVar5 + 0xf) >> 1) - 1;
  uVar6 = (ulong)(uVar3 & *(uint *)(param_2 + 8));
  uVar2 = *(uint *)(uVar5 + ((long)(uVar6 * 0xc00000000 + 0xc00000000) >> 0x20) + 7);
  if (uVar2 != uVar1) {
    uVar4 = uVar5 & 0xffffffff00000000 | (ulong)uVar2;
    iVar8 = 1;
    do {
      if (uVar2 != (uint)uVar7) {
        uVar5 = (*(code *)**(undefined8 **)param_2)(param_2,uVar4);
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

