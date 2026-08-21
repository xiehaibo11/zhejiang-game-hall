
/* v8::internal::Page::AvailableInFreeList() */

long __thiscall v8::internal::Page::AvailableInFreeList(Page *this)

{
  long lVar1;
  long lVar2;
  long local_8;
  
  local_8 = 0;
  if (0 < *(int *)(*(long *)(*(long *)(this + 0x58) + 0x60) + 8)) {
    lVar2 = 0;
    do {
      lVar1 = lVar2 * 8;
      lVar2 = lVar2 + 1;
      local_8 = local_8 + (ulong)*(uint *)(*(long *)(*(long *)(this + 0xf0) + lVar1) + 4);
    } while (lVar2 < *(int *)(*(long *)(*(long *)(this + 0x58) + 0x60) + 8));
  }
  return local_8;
}

