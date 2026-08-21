
/* v8::internal::FreeListLegacy::SelectFreeListCategoryType(unsigned long) */

undefined4 __thiscall
v8::internal::FreeListLegacy::SelectFreeListCategoryType(FreeListLegacy *this,ulong param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x29) {
    return 0;
  }
  if (param_1 < 0x7d) {
    return 1;
  }
  if (param_1 < 0x3fd) {
    return 2;
  }
  if (param_1 < 0x1ffd) {
    return 3;
  }
  uVar1 = 4;
  if (0x7ffc < param_1) {
    uVar1 = 5;
  }
  return uVar1;
}

