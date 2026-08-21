
/* v8::internal::Assembler::RemoveBranchFromLabelLinkChain(v8::internal::Instruction*,
   v8::internal::Label*, v8::internal::Instruction*) */

void __thiscall
v8::internal::Assembler::RemoveBranchFromLabelLinkChain
          (Assembler *this,Instruction *param_1,Label *param_2,Instruction *param_3)

{
  bool bVar1;
  Instruction *pIVar2;
  ulong uVar3;
  Instruction *pIVar4;
  Instruction *pIVar5;
  uint uVar6;
  
  uVar6 = *(uint *)param_2;
  if ((int)uVar6 < 0) {
    uVar6 = ~uVar6;
  }
  else {
    if (uVar6 == 0) goto LAB_0125f5b4;
    uVar6 = uVar6 - 1;
  }
  pIVar2 = (Instruction *)(*(long *)(this + 0x10) + (long)(int)uVar6);
  if ((Instruction *)(*(long *)(this + 0x10) + (long)(int)uVar6) == param_1) {
    pIVar2 = (Instruction *)Instruction::ImmPCOffsetTarget(param_1);
  }
  else {
    do {
      pIVar4 = pIVar2;
      pIVar2 = (Instruction *)Instruction::ImmPCOffsetTarget(pIVar4);
      if (pIVar2 == param_1) break;
    } while (pIVar4 != pIVar2);
    pIVar2 = (Instruction *)Instruction::ImmPCOffsetTarget(param_1);
    if (pIVar4 != param_1) {
      pIVar5 = pIVar4;
      if ((pIVar2 == param_1) ||
         (uVar3 = Instruction::IsTargetInImmPCOffsetRange(pIVar4,pIVar2), pIVar5 = pIVar2,
         (uVar3 & 1) != 0)) {
        Instruction::SetImmPCOffsetTarget(pIVar4,(AssemblerOptions *)(this + 0xa0),pIVar5);
        return;
      }
      if (param_3 != (Instruction *)0x0) {
        Instruction::SetImmPCOffsetTarget(pIVar4,(AssemblerOptions *)(this + 0xa0),pIVar4);
        do {
          pIVar4 = (Instruction *)Instruction::ImmPCOffsetTarget(pIVar2);
          Instruction::SetImmPCOffsetTarget(pIVar2,(AssemblerOptions *)(this + 0xa0),param_3);
          bVar1 = pIVar2 != pIVar4;
          pIVar2 = pIVar4;
        } while (bVar1);
        return;
      }
      uVar3 = Instruction::IsTargetInImmPCOffsetRange(pIVar4,pIVar2);
      if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","prev_link->IsTargetInImmPCOffsetRange(next_link)");
      }
LAB_0125f5b4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  if (pIVar2 == param_1) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    *(int *)param_2 = ((int)pIVar2 - *(int *)(this + 0x10)) + 1;
  }
  return;
}

