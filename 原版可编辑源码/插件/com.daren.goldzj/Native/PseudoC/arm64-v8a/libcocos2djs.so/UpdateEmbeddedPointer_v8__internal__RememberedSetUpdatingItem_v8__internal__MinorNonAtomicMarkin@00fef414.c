
/* v8::internal::SlotCallbackResult
   v8::internal::UpdateTypedSlotHelper::UpdateEmbeddedPointer<v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)2>::UpdateTypedPointers()::{lambda(v8::internal::FullMaybeObjectSlot)#1}>(v8::internal::Heap*,
   v8::internal::RelocInfo*,
   v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)2>::UpdateTypedPointers()::{lambda(v8::internal::FullMaybeObjectSlot)#1})
    */

bool v8::internal::UpdateTypedSlotHelper::
     UpdateEmbeddedPointer<v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,(v8::internal::GarbageCollector)2>::UpdateTypedPointers()::_lambda(v8::internal::FullMaybeObjectSlot)_1_>
               (long param_1,undefined8 *param_2)

{
  Instruction *pIVar1;
  Instruction IVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  Instruction *pIVar7;
  ulong uVar8;
  ulong uVar9;
  Instruction *pIVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  Instruction *pIVar14;
  undefined8 uVar15;
  
  pIVar7 = (Instruction *)*param_2;
  if (*(char *)(param_2 + 1) == '\x02') {
    if (pIVar7[3] != (Instruction)0x18) goto LAB_00fef620;
    puVar4 = (uint *)Instruction::ImmPCOffsetTarget(pIVar7);
    pIVar7 = (Instruction *)(param_1 + -0x8850 + (ulong)*puVar4);
  }
  else {
    IVar2 = pIVar7[3];
    pIVar7 = (Instruction *)Instruction::ImmPCOffsetTarget(pIVar7);
    if (IVar2 == (Instruction)0x58) {
      pIVar7 = *(Instruction **)pIVar7;
    }
  }
  iVar3 = (int)pIVar7;
  if (iVar3 == 3) {
    return true;
  }
  if (((ulong)pIVar7 & 1) == 0) {
    return true;
  }
  uVar9 = (ulong)pIVar7 & 0xfffffffffffc0000;
  uVar11 = (uint)*(undefined8 *)(uVar9 + 8);
  if ((uVar11 >> 3 & 1) == 0) {
    if ((uVar11 >> 4 & 1) != 0) {
      if ((*(byte *)(uVar9 + 9) >> 2 & 1) == 0) {
        return false;
      }
      uVar8 = ((ulong)pIVar7 & 0xfffffffffffffffd) - uVar9;
      return (*(uint *)(*(long *)(uVar9 + 0x108) + (uVar8 >> 7 & 0x1ffffff) * 4) >>
              (ulong)((uint)(uVar8 >> 2) & 0x1f) & 1) == 0;
    }
LAB_00fef508:
    bVar13 = true;
    iVar12 = (int)pIVar7;
  }
  else {
    uVar11 = *(uint *)(((ulong)pIVar7 & 0xfffffffffffffffd) - 1);
    if ((uVar11 & 1) == 0) {
      uVar9 = ((ulong)pIVar7 & 0xffffffff00000000 | (ulong)uVar11) + 1;
      pIVar10 = (Instruction *)(uVar9 | (ulong)pIVar7 & 2);
      uVar11 = (uint)uVar9 & 1;
      pIVar14 = pIVar10;
    }
    else {
      uVar11 = 1;
      pIVar10 = (Instruction *)((ulong)pIVar7 & 0xffffffff);
      pIVar14 = pIVar7;
    }
    pIVar1 = pIVar14;
    if (((int)pIVar10 != 3 & uVar11) == 0) {
      pIVar1 = pIVar7;
    }
    pIVar7 = pIVar14;
    if ((*(byte *)(((ulong)pIVar1 & 0xfffffffffffc0000) + 8) >> 4 & 1) == 0) goto LAB_00fef508;
    bVar13 = false;
    iVar12 = (int)pIVar14;
  }
  if (iVar12 != iVar3) {
    pIVar14 = (Instruction *)*param_2;
    if (*(char *)(param_2 + 1) == '\x02') {
      if (pIVar14[3] != (Instruction)0x18) {
LAB_00fef620:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
      }
      puVar5 = (undefined4 *)Instruction::ImmPCOffsetTarget(pIVar14);
      *puVar5 = (int)pIVar7;
    }
    else if (pIVar14[3] == (Instruction)0x58) {
      puVar6 = (undefined8 *)Instruction::ImmPCOffsetTarget(pIVar14);
      *puVar6 = pIVar7;
    }
    else {
      pIVar10 = pIVar14;
      if (pIVar7 != (Instruction *)0x0) {
        pIVar10 = pIVar7;
      }
      Instruction::SetBranchImmTarget(pIVar14,pIVar10);
      FlushInstructionCache(pIVar14,4);
    }
    if ((((ulong)pIVar7 & 1) != 0) && (uVar15 = param_2[3], (int)uVar15 != 0)) {
      uVar9 = *(ulong *)(((ulong)pIVar7 & 0xfffffffffffc0000) + 8);
      uVar11 = (uint)uVar9;
      if ((uVar9 & 0x18) != 0) {
        Heap_GenerationalBarrierForCodeSlow(uVar15,param_2,pIVar7);
        uVar11 = (uint)*(undefined8 *)((ulong)pIVar7 & 0xfffffffffffc0000 | 8);
      }
      if ((uVar11 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierForCodeSlow(uVar15,param_2,pIVar7);
      }
    }
  }
  return bVar13;
}

