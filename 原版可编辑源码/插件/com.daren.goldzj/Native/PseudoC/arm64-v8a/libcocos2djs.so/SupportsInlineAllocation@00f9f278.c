
/* v8::internal::PagedSpace::SupportsInlineAllocation() */

bool __thiscall v8::internal::PagedSpace::SupportsInlineAllocation(PagedSpace *this)

{
  if (*(int *)(this + 0x48) == 2) {
    return *(int *)(this + 0x9c) == 0;
  }
  return false;
}

