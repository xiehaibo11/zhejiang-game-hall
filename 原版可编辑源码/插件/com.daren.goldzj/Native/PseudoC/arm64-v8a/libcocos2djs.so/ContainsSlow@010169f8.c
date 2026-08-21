
/* v8::internal::PagedSpace::ContainsSlow(unsigned long) */

undefined8 __thiscall v8::internal::PagedSpace::ContainsSlow(PagedSpace *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(this + 0x20);
  if (uVar1 != 0) {
    do {
      if (uVar1 == (param_1 & 0xfffffffffffc0000)) {
        return 1;
      }
      uVar1 = *(ulong *)(uVar1 + 0xe0);
    } while (uVar1 != 0);
  }
  return 0;
}

