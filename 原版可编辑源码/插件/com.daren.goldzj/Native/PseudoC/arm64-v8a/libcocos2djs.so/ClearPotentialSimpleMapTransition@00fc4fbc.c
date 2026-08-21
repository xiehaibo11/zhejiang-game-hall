
/* v8::internal::MarkCompactCollector::ClearPotentialSimpleMapTransition(v8::internal::Map,
   v8::internal::Map) */

void __thiscall
v8::internal::MarkCompactCollector::ClearPotentialSimpleMapTransition
          (MarkCompactCollector *this,ulong param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong local_18;
  
  if (((*(uint *)(param_2 + 0xb) & 0xffc00) != 0) &&
     (*(uint *)(param_2 + 0x17) == *(uint *)(param_3 + 0x17))) {
    uVar2 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0x17);
    uVar1 = *(uint *)(param_2 + 0xb) >> 10 & 0x3ff;
    if (uVar1 != 0) {
      if (0 < (int)((int)*(short *)(uVar2 + 3) - uVar1)) {
        *(short *)(uVar2 + 5) = (short)uVar1;
        local_18 = uVar2;
        RightTrimDescriptorArray(this,uVar2);
        TrimEnumCache(this,param_2,uVar2);
        DescriptorArray::Sort((DescriptorArray *)&local_18);
      }
      *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 0x400000;
    }
  }
  return;
}

