
/* v8::internal::HashTable<v8::internal::StringTable,
   v8::internal::StringTableShape>::FindEntry(v8::internal::Isolate*, v8::internal::StringTableKey*)
    */

ulong __thiscall
v8::internal::HashTable<v8::internal::StringTable,v8::internal::StringTableShape>::FindEntry
          (HashTable<v8::internal::StringTable,v8::internal::StringTableShape> *this,
          Isolate *param_1,StringTableKey *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  
  uVar6 = *(ulong *)this;
  uVar2 = *(uint *)(param_1 + 0xa0);
  uVar7 = *(undefined8 *)(param_1 + 0xa8);
  uVar4 = (*(int *)(uVar6 + 0xf) >> 1) - 1;
  uVar1 = uVar4 & *(uint *)(param_2 + 8) >> 3;
  uVar3 = *(uint *)(uVar6 + (long)(int)(uVar1 * 4 + 0xc) + 7);
  if (uVar3 != uVar2) {
    uVar5 = uVar6 & 0xffffffff00000000 | (ulong)uVar3;
    iVar8 = 1;
    do {
      if (((uVar3 != (uint)uVar7) && (*(int *)(uVar5 + 3) == *(int *)(param_2 + 8))) &&
         (*(int *)(uVar5 + 7) == *(int *)(param_2 + 0xc))) {
        uVar6 = (**(code **)(*(long *)param_2 + 0x18))(param_2);
        if ((uVar6 & 1) != 0) {
          return (ulong)uVar1;
        }
        uVar6 = *(ulong *)this;
      }
      uVar1 = uVar1 + iVar8 & uVar4;
      uVar3 = *(uint *)(uVar6 + (long)(int)(uVar1 * 4 + 0xc) + 7);
      iVar8 = iVar8 + 1;
      uVar5 = uVar6 & 0xffffffff00000000 | (ulong)uVar3;
    } while (uVar3 != uVar2);
  }
  return 0xffffffffffffffff;
}

