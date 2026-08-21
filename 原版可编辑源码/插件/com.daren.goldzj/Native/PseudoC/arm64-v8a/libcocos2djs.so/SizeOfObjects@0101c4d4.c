
/* v8::internal::PagedSpace::SizeOfObjects() */

long __thiscall v8::internal::PagedSpace::SizeOfObjects(PagedSpace *this)

{
  long lVar1;
  
  if (*(ulong *)(this + 0x68) <= *(ulong *)(this + 0x70)) {
    lVar1 = (**(code **)(*(long *)this + 0x48))();
    return (lVar1 - *(long *)(this + 0x70)) + *(long *)(this + 0x68);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","limit() >= top()");
}

