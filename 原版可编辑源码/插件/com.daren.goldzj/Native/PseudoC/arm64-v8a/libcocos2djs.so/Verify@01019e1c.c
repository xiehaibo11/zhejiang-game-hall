
/* v8::internal::SemiSpace::Verify() */

void __thiscall v8::internal::SemiSpace::Verify(SemiSpace *this)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long local_40;
  long local_38;
  
  iVar3 = *(int *)(this + 0x8c);
  local_40 = 0;
  local_38 = 0;
  lVar4 = *(long *)(this + 0x20);
  if (lVar4 == 0) {
    local_38 = 0;
    local_40 = 0;
  }
  else {
    uVar1 = 8;
    if (iVar3 != 0) {
      uVar1 = 0x10;
    }
    uVar2 = 0x10;
    if (iVar3 != 0) {
      uVar2 = 8;
    }
    do {
      if (this != *(SemiSpace **)(lVar4 + 0x58)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","page->owner() == this");
      }
      uVar6 = *(ulong *)(lVar4 + 8);
      uVar5 = (uint)uVar6;
      if (((uVar5 >> 5 & 1) != 0) || ((uVar6 & 0x18) == 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","page->InNewSpace()");
      }
      if ((uVar6 & uVar1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "page->IsFlagSet(is_from_space ? MemoryChunk::FROM_PAGE : MemoryChunk::TO_PAGE)");
      }
      if ((uVar6 & uVar2) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "!page->IsFlagSet(is_from_space ? MemoryChunk::TO_PAGE : MemoryChunk::FROM_PAGE)");
      }
      if ((uVar5 >> 1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "page->IsFlagSet(MemoryChunk::POINTERS_TO_HERE_ARE_INTERESTING)");
      }
      if (iVar3 != 0) {
        if (*(int *)(*(long *)(*(long *)(lVar4 + 0x18) + 0x828) + 0x58) < 2) {
          if ((uVar5 >> 2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.",
                     "!page->IsFlagSet(MemoryChunk::POINTERS_FROM_HERE_ARE_INTERESTING)");
          }
        }
        else if ((uVar5 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.",
                   "page->IsFlagSet(MemoryChunk::POINTERS_FROM_HERE_ARE_INTERESTING)");
        }
      }
      local_40 = local_40 + *(long *)(lVar4 + 200);
      local_38 = local_38 + *(long *)(lVar4 + 0xd0);
      if ((*(long *)(lVar4 + 0xe8) != 0) && (*(long *)(*(long *)(lVar4 + 0xe8) + 0xe0) != lVar4)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "page->list_node().prev() implies page->list_node().prev()->list_node().next() == page"
                );
      }
      lVar4 = *(long *)(lVar4 + 0xe0);
    } while (lVar4 != 0);
  }
  lVar4 = (**(code **)(*(long *)this + 0x78))(this,0);
  if ((local_40 == lVar4) &&
     (lVar4 = (**(code **)(*(long *)this + 0x78))(this,1), local_38 == lVar4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","external_backing_store_bytes[t] == ExternalBackingStoreBytes(t)");
}

