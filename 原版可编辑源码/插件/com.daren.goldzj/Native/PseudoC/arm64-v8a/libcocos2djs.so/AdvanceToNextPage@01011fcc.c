
/* v8::internal::PagedSpaceObjectIterator::AdvanceToNextPage() */

undefined8 __thiscall
v8::internal::PagedSpaceObjectIterator::AdvanceToNextPage(PagedSpaceObjectIterator *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x38);
  if (*(long *)(this + 0x30) != lVar1) {
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(lVar1 + 0xe0);
    *(undefined8 *)(this + 8) = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(lVar1 + 0x28);
    return 1;
  }
  return 0;
}

