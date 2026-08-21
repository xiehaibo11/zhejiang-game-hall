
/* v8::internal::Page::ResetAllocationStatistics() */

void __thiscall v8::internal::Page::ResetAllocationStatistics(Page *this)

{
  *(undefined8 *)(this + 0xd8) = 0;
  *(long *)(this + 0xc0) = *(long *)(this + 0x28) - *(long *)(this + 0x20);
  return;
}

