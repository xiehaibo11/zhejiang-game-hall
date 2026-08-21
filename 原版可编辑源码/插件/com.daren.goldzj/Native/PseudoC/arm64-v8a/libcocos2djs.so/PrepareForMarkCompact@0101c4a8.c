
/* v8::internal::PagedSpace::PrepareForMarkCompact() */

void __thiscall v8::internal::PagedSpace::PrepareForMarkCompact(PagedSpace *this)

{
  FreeLinearAllocationArea(this);
                    /* WARNING: Could not recover jumptable at 0x0101c4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x60) + 0x30))();
  return;
}

