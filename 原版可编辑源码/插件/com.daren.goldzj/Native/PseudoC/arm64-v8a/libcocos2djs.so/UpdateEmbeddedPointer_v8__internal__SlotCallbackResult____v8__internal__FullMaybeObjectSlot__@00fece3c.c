
/* v8::internal::SlotCallbackResult
   v8::internal::UpdateTypedSlotHelper::UpdateEmbeddedPointer<v8::internal::SlotCallbackResult
   (*)(v8::internal::FullMaybeObjectSlot)>(v8::internal::Heap*, v8::internal::RelocInfo*,
   v8::internal::SlotCallbackResult (*)(v8::internal::FullMaybeObjectSlot)) */

undefined1
v8::internal::UpdateTypedSlotHelper::
UpdateEmbeddedPointer<v8::internal::SlotCallbackResult(*)(v8::internal::FullMaybeObjectSlot)>
          (Heap *param_1,RelocInfo *param_2,_func_SlotCallbackResult_FullMaybeObjectSlot *param_3)

{
  Instruction *pIVar1;
  Instruction IVar2;
  Instruction *pIVar3;
  SlotCallbackResult SVar4;
  uint *puVar5;
  int *piVar6;
  undefined8 *puVar7;
  uint uVar8;
  Instruction *pIVar9;
  int iVar11;
  undefined8 uVar12;
  Instruction *local_28;
  ulong uVar10;
  
  pIVar9 = *(Instruction **)param_2;
  if (param_2[8] == (RelocInfo)0x2) {
    if (pIVar9[3] != (Instruction)0x18) goto LAB_00fecf98;
    puVar5 = (uint *)Instruction::ImmPCOffsetTarget(pIVar9);
    pIVar9 = (Instruction *)(param_1 + ((ulong)*puVar5 - 0x8850));
  }
  else {
    IVar2 = pIVar9[3];
    pIVar9 = (Instruction *)Instruction::ImmPCOffsetTarget(pIVar9);
    if (IVar2 == (Instruction)0x58) {
      pIVar9 = *(Instruction **)pIVar9;
    }
  }
  local_28 = pIVar9;
  SVar4 = (*param_3)((char)&local_28);
  pIVar3 = local_28;
  iVar11 = (int)local_28;
  if (iVar11 != (int)pIVar9) {
    pIVar9 = *(Instruction **)param_2;
    if (param_2[8] == (RelocInfo)0x2) {
      if (pIVar9[3] != (Instruction)0x18) {
LAB_00fecf98:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
      }
      piVar6 = (int *)Instruction::ImmPCOffsetTarget(pIVar9);
      *piVar6 = iVar11;
    }
    else if (pIVar9[3] == (Instruction)0x58) {
      puVar7 = (undefined8 *)Instruction::ImmPCOffsetTarget(pIVar9);
      *puVar7 = pIVar3;
    }
    else {
      pIVar1 = pIVar9;
      if (local_28 != (Instruction *)0x0) {
        pIVar1 = local_28;
      }
      Instruction::SetBranchImmTarget(pIVar9,pIVar1);
      FlushInstructionCache(pIVar9,4);
    }
    if ((((ulong)pIVar3 & 1) != 0) && (uVar12 = *(undefined8 *)(param_2 + 0x18), (int)uVar12 != 0))
    {
      uVar10 = *(ulong *)(((ulong)pIVar3 & 0xfffffffffffc0000) + 8);
      uVar8 = (uint)uVar10;
      if ((uVar10 & 0x18) != 0) {
        Heap_GenerationalBarrierForCodeSlow(uVar12,param_2,pIVar3);
        uVar8 = (uint)*(undefined8 *)((ulong)pIVar3 & 0xfffffffffffc0000 | 8);
      }
      if ((uVar8 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierForCodeSlow(uVar12,param_2,pIVar3);
      }
    }
  }
  return SVar4;
}

