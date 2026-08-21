
/* v8::internal::FreeListFastAlloc::GuaranteedAllocatable(unsigned long) */

undefined8 __thiscall
v8::internal::FreeListFastAlloc::GuaranteedAllocatable(FreeListFastAlloc *this,ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x7ffc;
  if (param_1 < 0x7ffd) {
    uVar1 = 0x1ffc;
  }
  uVar2 = 0;
  if (0x1ffc < param_1) {
    uVar2 = uVar1;
  }
  return uVar2;
}

