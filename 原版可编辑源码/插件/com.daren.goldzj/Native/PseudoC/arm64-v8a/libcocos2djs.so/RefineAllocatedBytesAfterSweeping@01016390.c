
/* v8::internal::PagedSpace::RefineAllocatedBytesAfterSweeping(v8::internal::Page*) */

void __thiscall
v8::internal::PagedSpace::RefineAllocatedBytesAfterSweeping(PagedSpace *this,Page *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0xa8) == 0) {
    lVar1 = *(ulong *)(param_1 + 0x68) - *(ulong *)(param_1 + 0xc0);
    if (*(ulong *)(param_1 + 0xc0) <= *(ulong *)(param_1 + 0x68) && lVar1 != 0) {
      *(long *)(this + 0xb8) = *(long *)(this + 0xb8) - lVar1;
      lVar2 = *(long *)(*(long *)(this + 0x40) + 0x890);
      if (lVar2 != 0) {
        *(long *)(*(long *)(this + 0x40) + 0x890) = lVar2 - lVar1;
      }
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","page->SweepingDone()");
}

