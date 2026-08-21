
/* v8::internal::MarkCompactCollector::TrimEnumCache(v8::internal::Map,
   v8::internal::DescriptorArray) */

void __thiscall
v8::internal::MarkCompactCollector::TrimEnumCache
          (MarkCompactCollector *this,long param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_40;
  long lStack_38;
  
  uVar1 = *(uint *)(param_2 + 0xb) & 0x3ff;
  local_40 = param_3;
  lStack_38 = param_2;
  if (uVar1 == 0x3ff) {
    uVar1 = Map::NumberOfEnumerableProperties((Map *)&lStack_38);
  }
  if (uVar1 == 0) {
    DescriptorArray::ClearEnumCache((DescriptorArray *)&local_40);
  }
  else {
    uVar2 = local_40 & 0xffffffff00000000;
    uVar3 = uVar2 | *(uint *)(local_40 + 0xb);
    if (0 < (int)((*(int *)((uVar2 | *(uint *)(uVar3 + 3)) + 3) >> 1) - uVar1)) {
      Heap::RightTrimFixedArray(*(Heap **)(this + 8));
      if (0 < (int)((*(int *)((uVar2 | *(uint *)(uVar3 + 7)) + 3) >> 1) - uVar1)) {
        Heap::RightTrimFixedArray(*(Heap **)(this + 8));
      }
    }
  }
  return;
}

