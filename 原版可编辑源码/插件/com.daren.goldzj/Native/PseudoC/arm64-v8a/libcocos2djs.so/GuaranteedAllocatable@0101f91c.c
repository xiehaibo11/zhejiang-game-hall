
/* v8::internal::FreeListLegacy::GuaranteedAllocatable(unsigned long) */

ulong __thiscall
v8::internal::FreeListLegacy::GuaranteedAllocatable(FreeListLegacy *this,ulong param_1)

{
  ulong uVar1;
  
  if (param_1 < 0x29) {
    return 0;
  }
  if (param_1 < 0x7d) {
    return 0x28;
  }
  if (param_1 < 0x3fd) {
    return 0x7c;
  }
  if (param_1 < 0x1ffd) {
    return 0x3fc;
  }
  uVar1 = 0x1ffc;
  if (0x7ffc < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

