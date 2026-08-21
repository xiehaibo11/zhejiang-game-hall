
void FUN_011fadf0(void)

{
  int iVar1;
  long *plVar2;
  
  if (((DAT_01d3fc88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3fc88), iVar1 != 0)) {
    plVar2 = (long *)v8::internal::V8::GetCurrentPlatform();
    DAT_01d3fc80 = (undefined *)(**(code **)(*plVar2 + 0x10))();
    if (DAT_01d3fc80 == (undefined *)0x0) {
      if (((DAT_01d3fca8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3fca8), iVar1 != 0)) {
        v8::base::PageAllocator::PageAllocator((PageAllocator *)&DAT_01d3fc90);
        __cxa_guard_release(&DAT_01d3fca8);
      }
      DAT_01d3fc80 = &DAT_01d3fc90;
    }
    __cxa_guard_release(&DAT_01d3fc88);
    return;
  }
  return;
}

