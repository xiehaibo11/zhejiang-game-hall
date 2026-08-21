
uint FUN_0100d3dc(long param_1,undefined8 *param_2,Scavenger *param_3)

{
  Instruction *pIVar1;
  Instruction IVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  uint uVar7;
  Instruction *pIVar8;
  int iVar10;
  int iVar11;
  Instruction *this;
  undefined8 uVar12;
  Instruction *local_28;
  ulong uVar9;
  
  pIVar8 = (Instruction *)*param_2;
  if (*(char *)(param_2 + 1) == '\x02') {
    if (pIVar8[3] != (Instruction)0x18) goto LAB_0100d568;
    puVar4 = (uint *)v8::internal::Instruction::ImmPCOffsetTarget(pIVar8);
    local_28 = (Instruction *)(param_1 + -0x8850 + (ulong)*puVar4);
  }
  else {
    IVar2 = pIVar8[3];
    local_28 = (Instruction *)v8::internal::Instruction::ImmPCOffsetTarget(pIVar8);
    if (IVar2 == (Instruction)0x58) {
      local_28 = *(Instruction **)local_28;
    }
  }
  iVar11 = (int)local_28;
  uVar3 = 1;
  if ((iVar11 != 3) && (((ulong)local_28 & 1) != 0)) {
    uVar3 = (uint)*(undefined8 *)(((ulong)local_28 & 0xfffffffffffc0000) + 8);
    if ((uVar3 >> 3 & 1) == 0) {
      uVar3 = (uVar3 >> 4 ^ 0xffffffff) & 1;
    }
    else {
      uVar3 = v8::internal::Scavenger::ScavengeObject<v8::internal::FullHeapObjectSlot>
                        (param_3,&local_28,(ulong)local_28 & 0xfffffffffffffffd);
      pIVar8 = local_28;
      iVar10 = (int)local_28;
      if (iVar10 != iVar11) {
        this = (Instruction *)*param_2;
        if (*(char *)(param_2 + 1) == '\x02') {
          if (this[3] != (Instruction)0x18) {
LAB_0100d568:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
          }
          piVar5 = (int *)v8::internal::Instruction::ImmPCOffsetTarget(this);
          *piVar5 = iVar10;
        }
        else if (this[3] == (Instruction)0x58) {
          puVar6 = (undefined8 *)v8::internal::Instruction::ImmPCOffsetTarget(this);
          *puVar6 = pIVar8;
        }
        else {
          pIVar1 = this;
          if (local_28 != (Instruction *)0x0) {
            pIVar1 = local_28;
          }
          v8::internal::Instruction::SetBranchImmTarget(this,pIVar1);
          v8::internal::FlushInstructionCache(this,4);
        }
        if ((((ulong)pIVar8 & 1) != 0) && (uVar12 = param_2[3], (int)uVar12 != 0)) {
          uVar9 = *(ulong *)(((ulong)pIVar8 & 0xfffffffffffc0000) + 8);
          uVar7 = (uint)uVar9;
          if ((uVar9 & 0x18) != 0) {
            v8::internal::Heap_GenerationalBarrierForCodeSlow(uVar12,param_2,pIVar8);
            uVar7 = (uint)*(undefined8 *)((ulong)pIVar8 & 0xfffffffffffc0000 | 8);
          }
          if ((uVar7 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierForCodeSlow(uVar12,param_2,pIVar8);
          }
        }
      }
    }
  }
  return uVar3;
}

