
/* v8::internal::PagedSpace::CountTotalPages() */

int __thiscall v8::internal::PagedSpace::CountTotalPages(PagedSpace *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x20);
  if (lVar2 != 0) {
    iVar1 = 0;
    do {
      lVar2 = *(long *)(lVar2 + 0xe0);
      iVar1 = iVar1 + 1;
    } while (lVar2 != 0);
    return iVar1;
  }
  return 0;
}

