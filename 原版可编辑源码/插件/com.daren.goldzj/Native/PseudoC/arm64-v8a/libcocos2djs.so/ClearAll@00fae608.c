
/* v8::internal::RememberedSet<(v8::internal::RememberedSetType)1>::ClearAll(v8::internal::Heap*) */

void v8::internal::RememberedSet<(v8::internal::RememberedSetType)1>::ClearAll(Heap *param_1)

{
  MemoryChunk *this;
  MemoryChunk *pMVar1;
  MemoryChunk *pMVar2;
  MemoryChunk *pMVar3;
  MemoryChunk *pMVar4;
  MemoryChunk *pMVar5;
  MemoryChunk *pMVar6;
  MemoryChunk *pMVar7;
  MemoryChunk *pMVar8;
  MemoryChunk *pMVar9;
  MemoryChunk *pMVar10;
  uint uVar11;
  
  pMVar8 = *(MemoryChunk **)(*(long *)(param_1 + 0xf0) + 0x20);
  pMVar7 = *(MemoryChunk **)(*(long *)(param_1 + 0xf8) + 0x20);
  pMVar6 = *(MemoryChunk **)(*(long *)(param_1 + 0x100) + 0x20);
  pMVar9 = *(MemoryChunk **)(*(long *)(param_1 + 0x108) + 0x20);
  pMVar10 = *(MemoryChunk **)(*(long *)(param_1 + 0x110) + 0x20);
  uVar11 = 0;
  do {
    pMVar1 = pMVar7;
    pMVar2 = pMVar8;
    pMVar3 = pMVar10;
    pMVar4 = pMVar9;
    pMVar5 = pMVar6;
    switch(uVar11) {
    default:
      if (pMVar8 == (MemoryChunk *)0x0) goto switchD_00fae664_caseD_1;
      uVar11 = 0;
      pMVar2 = *(MemoryChunk **)(pMVar8 + 0xe0);
      this = pMVar8;
      break;
    case 1:
switchD_00fae664_caseD_1:
      if (pMVar6 == (MemoryChunk *)0x0) goto switchD_00fae664_caseD_2;
      uVar11 = 1;
      pMVar5 = *(MemoryChunk **)(pMVar6 + 0xe0);
      this = pMVar6;
      break;
    case 2:
switchD_00fae664_caseD_2:
      if (pMVar7 == (MemoryChunk *)0x0) goto switchD_00fae664_caseD_3;
      uVar11 = 2;
      pMVar1 = *(MemoryChunk **)(pMVar7 + 0xe0);
      this = pMVar7;
      break;
    case 3:
switchD_00fae664_caseD_3:
      if (pMVar9 == (MemoryChunk *)0x0) goto switchD_00fae664_caseD_4;
      uVar11 = 3;
      pMVar4 = *(MemoryChunk **)(pMVar9 + 0xe0);
      this = pMVar9;
      break;
    case 4:
switchD_00fae664_caseD_4:
      if (pMVar10 == (MemoryChunk *)0x0) {
        return;
      }
      uVar11 = 4;
      pMVar3 = *(MemoryChunk **)(pMVar10 + 0xe0);
      this = pMVar10;
      break;
    case 5:
      goto switchD_00fae664_caseD_5;
    }
    pMVar6 = pMVar5;
    pMVar9 = pMVar4;
    pMVar10 = pMVar3;
    pMVar8 = pMVar2;
    pMVar7 = pMVar1;
    if (this == (MemoryChunk *)0x0) {
switchD_00fae664_caseD_5:
      return;
    }
    MemoryChunk::ReleaseSlotSet<(v8::internal::RememberedSetType)1>();
    MemoryChunk::ReleaseTypedSlotSet<(v8::internal::RememberedSetType)1>(this);
    MemoryChunk::ReleaseInvalidatedSlots<(v8::internal::RememberedSetType)1>(this);
    if (5 < uVar11) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  } while( true );
}

