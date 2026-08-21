
/* v8::internal::PagedSpace::UnmarkLinearAllocationArea() */

void __thiscall v8::internal::PagedSpace::UnmarkLinearAllocationArea(PagedSpace *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(this + 0x68);
  if ((uVar1 != 0) && (uVar1 != *(ulong *)(this + 0x70))) {
    Page::DestroyBlackArea((Page *)(uVar1 - 4 & 0xfffffffffffc0000),uVar1,*(ulong *)(this + 0x70));
    return;
  }
  return;
}

