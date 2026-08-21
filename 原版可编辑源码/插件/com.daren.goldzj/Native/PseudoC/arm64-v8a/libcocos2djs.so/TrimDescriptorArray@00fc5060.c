
/* v8::internal::MarkCompactCollector::TrimDescriptorArray(v8::internal::Map,
   v8::internal::DescriptorArray) */

void __thiscall
v8::internal::MarkCompactCollector::TrimDescriptorArray
          (MarkCompactCollector *this,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long local_18;
  
  uVar2 = *(uint *)(param_2 + 0xb) >> 10 & 0x3ff;
  if (uVar2 != 0) {
    iVar1 = (int)*(short *)(param_3 + 3) - uVar2;
    if (0 < iVar1) {
      *(short *)(param_3 + 5) = (short)uVar2;
      local_18 = param_3;
      RightTrimDescriptorArray(this,param_3,iVar1);
      TrimEnumCache(this,param_2,param_3);
      DescriptorArray::Sort((DescriptorArray *)&local_18);
    }
    *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 0x400000;
  }
  return;
}

