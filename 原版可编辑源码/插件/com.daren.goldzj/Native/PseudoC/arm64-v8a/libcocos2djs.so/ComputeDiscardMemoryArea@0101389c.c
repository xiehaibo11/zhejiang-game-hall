
/* v8::internal::MemoryAllocator::ComputeDiscardMemoryArea(unsigned long, unsigned long) */

undefined1  [16]
v8::internal::MemoryAllocator::ComputeDiscardMemoryArea(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  if (FLAG_v8_os_page_size == 0) {
    lVar1 = CommitPageSize();
  }
  else {
    lVar1 = (long)FLAG_v8_os_page_size << 10;
  }
  if (param_2 < lVar1 + 0xcU) {
    lVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar3 = param_2 + param_1 & -lVar1;
    uVar2 = param_1 + lVar1 + 0xb & -lVar1;
    lVar1 = 0;
    if (uVar2 <= uVar3) {
      lVar1 = uVar3 - uVar2;
    }
    if (uVar2 > uVar3 || uVar3 - uVar2 == 0) {
      uVar2 = 0;
    }
  }
  auVar4._8_8_ = lVar1;
  auVar4._0_8_ = uVar2;
  return auVar4;
}

