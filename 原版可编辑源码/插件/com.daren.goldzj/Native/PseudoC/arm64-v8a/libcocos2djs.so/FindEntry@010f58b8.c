
/* v8::internal::HashTable<v8::internal::StringTable,
   v8::internal::StringTableShape>::FindEntry(v8::internal::ReadOnlyRoots,
   v8::internal::StringTableKey*, int) */

ulong __thiscall
v8::internal::HashTable<v8::internal::StringTable,v8::internal::StringTableShape>::FindEntry
          (HashTable<v8::internal::StringTable,v8::internal::StringTableShape> *this,long param_2,
          long *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  
  uVar5 = *(ulong *)this;
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = (*(int *)(uVar5 + 0xf) >> 1) - 1;
  param_4 = uVar3 & param_4;
  uVar2 = *(uint *)(uVar5 + (long)(int)(param_4 * 4 + 0xc) + 7);
  if (uVar2 != uVar1) {
    uVar4 = uVar5 & 0xffffffff00000000 | (ulong)uVar2;
    iVar7 = 1;
    do {
      if (((uVar2 != (uint)uVar6) && (*(int *)(uVar4 + 3) == (int)param_3[1])) &&
         (*(int *)(uVar4 + 7) == *(int *)((long)param_3 + 0xc))) {
        uVar5 = (**(code **)(*param_3 + 0x18))(param_3);
        if ((uVar5 & 1) != 0) {
          return (ulong)param_4;
        }
        uVar5 = *(ulong *)this;
      }
      param_4 = param_4 + iVar7 & uVar3;
      uVar2 = *(uint *)(uVar5 + (long)(int)(param_4 * 4 + 0xc) + 7);
      iVar7 = iVar7 + 1;
      uVar4 = uVar5 & 0xffffffff00000000 | (ulong)uVar2;
    } while (uVar2 != uVar1);
  }
  return 0xffffffffffffffff;
}

