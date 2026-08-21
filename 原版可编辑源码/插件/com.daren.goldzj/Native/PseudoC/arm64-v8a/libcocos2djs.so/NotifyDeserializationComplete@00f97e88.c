
/* v8::internal::Heap::NotifyDeserializationComplete() */

void __thiscall v8::internal::Heap::NotifyDeserializationComplete(Heap *this)

{
  PagedSpace *this_00;
  int iVar1;
  
  this_00 = *(PagedSpace **)(this + 0xf0);
  if (this_00 == (PagedSpace *)0x0) {
LAB_00f97f0c:
    this[0xb44] = (Heap)0x1;
    return;
  }
  iVar1 = 3;
LAB_00f97eb8:
  do {
    if ((*(long *)(this + 0x2f98) != 0) && (*(int *)(*(long *)(this + 0x2f98) + 8) != 0)) {
      PagedSpace::ShrinkImmortalImmovablePages(this_00);
    }
    if (3 < iVar1 - 1U) break;
    switch(iVar1) {
    case 1:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case 2:
      this_00 = *(PagedSpace **)(this + 0xf0);
      break;
    case 3:
      this_00 = *(PagedSpace **)(this + 0xf8);
      break;
    case 4:
      goto switchD_00f97ee8_caseD_4;
    }
    iVar1 = iVar1 + 1;
  } while (this_00 != (PagedSpace *)0x0);
  goto LAB_00f97f0c;
switchD_00f97ee8_caseD_4:
  this_00 = *(PagedSpace **)(this + 0x100);
  iVar1 = iVar1 + 1;
  if (this_00 == (PagedSpace *)0x0) goto LAB_00f97f0c;
  goto LAB_00f97eb8;
}

