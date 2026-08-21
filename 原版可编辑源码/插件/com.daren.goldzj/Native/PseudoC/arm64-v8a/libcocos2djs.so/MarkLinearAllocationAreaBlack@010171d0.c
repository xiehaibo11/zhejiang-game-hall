
/* v8::internal::PagedSpace::MarkLinearAllocationAreaBlack() */

void __thiscall v8::internal::PagedSpace::MarkLinearAllocationAreaBlack(PagedSpace *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(this + 0x68);
  if ((uVar1 != 0) && (uVar1 != *(ulong *)(this + 0x70))) {
    Page::CreateBlackArea((Page *)(uVar1 - 4 & 0xfffffffffffc0000),uVar1,*(ulong *)(this + 0x70));
    return;
  }
  return;
}

