
/* v8::internal::HashTable<v8::internal::StringSet,
   v8::internal::StringSetShape>::FindEntry(v8::internal::Isolate*, v8::internal::String) */

ulong __thiscall
v8::internal::HashTable<v8::internal::StringSet,v8::internal::StringSetShape>::FindEntry
          (HashTable<v8::internal::StringSet,v8::internal::StringSetShape> *this,long param_1,
          ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  ulong local_58;
  
  if ((*(uint *)(param_3 + 3) & 1) == 0) {
    uVar4 = *(uint *)(param_3 + 3) >> 3;
  }
  else {
    local_58 = param_3;
    uVar4 = String::ComputeAndSetHash((String *)&local_58);
  }
  uVar6 = *(ulong *)this;
  uVar1 = *(uint *)(param_1 + 0xa0);
  uVar8 = *(undefined8 *)(param_1 + 0xa8);
  uVar3 = (*(int *)(uVar6 + 0xf) >> 1) - 1;
  uVar4 = uVar3 & uVar4;
  uVar2 = *(uint *)(uVar6 + (long)(int)(uVar4 * 4 + 0xc) + 7);
  if (uVar2 != uVar1) {
    uVar7 = uVar6 & 0xffffffff00000000;
    uVar5 = uVar7 | uVar2;
    iVar9 = 1;
    do {
      if (uVar2 != (uint)uVar8) {
        if (uVar2 == (uint)param_3) {
LAB_01119364:
          return (ulong)uVar4;
        }
        if ((0x1f < *(ushort *)((param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_3 - 1)))
           || (0x1f < *(ushort *)((uVar7 | 7) + (ulong)*(uint *)(uVar5 - 1)))) {
          local_58 = param_3;
          uVar6 = String::SlowEquals((String *)&local_58);
          if ((uVar6 & 1) != 0) goto LAB_01119364;
          uVar6 = *(ulong *)this;
        }
      }
      uVar4 = uVar4 + iVar9 & uVar3;
      uVar2 = *(uint *)(uVar6 + (long)(int)(uVar4 * 4 + 0xc) + 7);
      uVar7 = uVar6 & 0xffffffff00000000;
      iVar9 = iVar9 + 1;
      uVar5 = uVar7 | uVar2;
    } while (uVar2 != uVar1);
  }
  return 0xffffffffffffffff;
}

