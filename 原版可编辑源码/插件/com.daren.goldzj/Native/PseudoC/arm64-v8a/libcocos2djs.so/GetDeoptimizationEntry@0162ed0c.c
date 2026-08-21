
/* v8::internal::compiler::CodeGenerator::GetDeoptimizationEntry(v8::internal::compiler::Instruction*,
   unsigned long) */

void __thiscall
v8::internal::compiler::CodeGenerator::GetDeoptimizationEntry
          (CodeGenerator *this,Instruction *param_1,ulong param_2)

{
  undefined8 *puVar1;
  InstructionSequence *this_00;
  InstructionSequence *pIVar2;
  ulong uVar3;
  InstructionSequence *pIVar4;
  int iVar5;
  InstructionSequence *pIVar6;
  undefined8 local_30;
  undefined8 uStack_28;
  
  this_00 = *(InstructionSequence **)(this + 0x28);
  uVar3 = *(ulong *)(param_1 + ((byte)param_1[4] + param_2) * 8 + 0x28);
  if ((uVar3 & 7) == 3) {
    if (((uint)uVar3 >> 3 & 1) == 0) {
      Constant::Constant((Constant *)&local_30,(int)(uVar3 >> 0x20));
      this_00 = *(InstructionSequence **)(this + 0x28);
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(this_00 + 0x60) + ((long)uVar3 >> 0x20) * 0x10);
      uStack_28 = puVar1[1];
      local_30 = *puVar1;
    }
    iVar5 = (int)uStack_28;
    goto LAB_0162edb8;
  }
  pIVar2 = this_00 + 0x48;
  pIVar6 = *(InstructionSequence **)pIVar2;
  if (pIVar6 == (InstructionSequence *)0x0) {
LAB_0162ed98:
    pIVar4 = pIVar2;
  }
  else {
    pIVar4 = pIVar2;
    do {
      iVar5 = (int)(uVar3 >> 3);
      if (iVar5 <= *(int *)(pIVar6 + 0x20)) {
        pIVar4 = pIVar6;
      }
      pIVar6 = *(InstructionSequence **)(pIVar6 + (ulong)(*(int *)(pIVar6 + 0x20) < iVar5) * 8);
    } while (pIVar6 != (InstructionSequence *)0x0);
    if ((pIVar4 == pIVar2) || (iVar5 < *(int *)(pIVar4 + 0x20))) goto LAB_0162ed98;
  }
  iVar5 = (int)*(undefined8 *)(pIVar4 + 0x30);
LAB_0162edb8:
  InstructionSequence::GetDeoptimizationEntry(this_00,iVar5);
  return;
}

