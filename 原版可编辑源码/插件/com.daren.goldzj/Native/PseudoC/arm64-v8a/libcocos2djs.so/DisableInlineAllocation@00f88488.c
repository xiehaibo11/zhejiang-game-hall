
/* v8::internal::Heap::DisableInlineAllocation() */

void __thiscall v8::internal::Heap::DisableInlineAllocation(Heap *this)

{
  PagedSpace *this_00;
  uint uVar1;
  CodeSpaceMemoryModificationScope aCStack_18 [8];
  
  if (this[0x5e0] == (Heap)0x0) {
    this[0x5e0] = (Heap)0x1;
    (**(code **)(**(long **)(this + 0xe8) + 0x88))(*(long **)(this + 0xe8),0);
    CodeSpaceMemoryModificationScope::CodeSpaceMemoryModificationScope(aCStack_18,this);
    this_00 = *(PagedSpace **)(this + 0xf0);
    if (this_00 != (PagedSpace *)0x0) {
      uVar1 = 3;
LAB_00f884e0:
      do {
        PagedSpace::FreeLinearAllocationArea(this_00);
        if (4 < uVar1) break;
        switch(uVar1) {
        default:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        case 2:
          this_00 = *(PagedSpace **)(this + 0xf0);
          uVar1 = uVar1 + 1;
          if (this_00 == (PagedSpace *)0x0) goto LAB_00f88524;
          goto LAB_00f884e0;
        case 3:
          this_00 = *(PagedSpace **)(this + 0xf8);
          break;
        case 4:
          this_00 = *(PagedSpace **)(this + 0x100);
        }
        uVar1 = uVar1 + 1;
      } while (this_00 != (PagedSpace *)0x0);
    }
LAB_00f88524:
    CodeSpaceMemoryModificationScope::~CodeSpaceMemoryModificationScope(aCStack_18);
  }
  return;
}

