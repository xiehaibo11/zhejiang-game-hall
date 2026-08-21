
/* v8::internal::FreeListFastAlloc::SelectFreeListCategoryType(unsigned long) */

undefined4 __thiscall
v8::internal::FreeListFastAlloc::SelectFreeListCategoryType(FreeListFastAlloc *this,ulong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (0x7ffc < param_1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (0x1ffc < param_1) {
    uVar1 = uVar2;
  }
  return uVar1;
}

