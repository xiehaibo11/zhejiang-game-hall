
/* v8::internal::PagedSpaceIterator::Next() */

undefined8 __thiscall v8::internal::PagedSpaceIterator::Next(PagedSpaceIterator *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  *(int *)(this + 8) = iVar1 + 1;
  switch(iVar1) {
  case 0:
  case 1:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 2:
    return *(undefined8 *)(*(long *)this + 0xf0);
  case 3:
    return *(undefined8 *)(*(long *)this + 0xf8);
  case 4:
    return *(undefined8 *)(*(long *)this + 0x100);
  default:
    return 0;
  }
}

