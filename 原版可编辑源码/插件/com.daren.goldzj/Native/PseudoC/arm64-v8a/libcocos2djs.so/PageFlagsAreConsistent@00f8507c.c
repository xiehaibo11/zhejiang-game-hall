
/* v8::internal::Heap::PageFlagsAreConsistent(v8::internal::HeapObject) */

undefined8 v8::internal::Heap::PageFlagsAreConsistent(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  
  param_1 = param_1 & 0xfffffffffffc0000;
  uVar2 = *(ulong *)(param_1 + 8);
  bVar1 = (uVar2 & 0x18) == 0;
  if (bVar1 == !bVar1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","chunk->InYoungGeneration() == slim_chunk->InYoungGeneration()");
  }
  if (((uint)(uVar2 >> 0x12) & 1) != (uint)((uVar2 & 0x40000) == 0)) {
    if (((uint)uVar2 >> 0x15 & 1) == 0) {
      uVar2 = *(ulong *)(param_1 | 8);
      iVar3 = *(int *)(*(long *)(param_1 + 0x58) + 0x48);
    }
    else {
      iVar3 = 0;
    }
    if ((iVar3 == 1 || iVar3 == 7) != ((uVar2 & 0x18) == 0)) {
      if (((uint)(uVar2 >> 0x15) & 1) == (uint)((*(ulong *)(param_1 + 8) & 0x200000) == 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","chunk->InReadOnlySpace() == slim_chunk->InReadOnlySpace()");
      }
      if ((*(long *)(param_1 + 0x18) == 0) && (((uint)*(ulong *)(param_1 + 8) >> 0x15 & 1) != 0)) {
        if (((uint)uVar2 >> 0x12 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","!slim_chunk->IsMarking()");
        }
      }
      else if (((uVar2 & 0x40000) == 0) ==
               1 < *(int *)(*(long *)(*(long *)(param_1 + 0x18) + 0x828) + 0x58)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "slim_chunk->IsMarking() == heap->incremental_marking()->IsMarking()");
      }
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "identity == NEW_SPACE || identity == NEW_LO_SPACE == slim_chunk->InYoungGeneration()")
    ;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "chunk->IsFlagSet(MemoryChunk::INCREMENTAL_MARKING) == slim_chunk->IsMarking()");
}

