
/* v8::internal::compiler::InstructionSequence::InputRpo(v8::internal::compiler::Instruction*,
   unsigned long) */

ulong __thiscall
v8::internal::compiler::InstructionSequence::InputRpo
          (InstructionSequence *this,Instruction *param_1,ulong param_2)

{
  InstructionSequence *pIVar1;
  ulong uVar2;
  InstructionSequence *pIVar3;
  int iVar4;
  ulong uVar5;
  InstructionSequence *pIVar6;
  
  uVar2 = *(ulong *)(param_1 + ((byte)param_1[4] + param_2) * 8 + 0x28);
  if ((uVar2 & 7) == 3) {
    uVar5 = (long)uVar2 >> 0x20;
    if (((uint)uVar2 >> 3 & 1) == 0) goto LAB_01648d78;
    pIVar3 = (InstructionSequence *)(*(long *)(this + 0x60) + uVar5 * 0x10 + 8);
  }
  else {
    pIVar1 = this + 0x48;
    pIVar6 = *(InstructionSequence **)pIVar1;
    if (pIVar6 == (InstructionSequence *)0x0) {
LAB_01648d6c:
      pIVar3 = pIVar1;
    }
    else {
      pIVar3 = pIVar1;
      do {
        iVar4 = (int)(uVar2 >> 3);
        if (iVar4 <= *(int *)(pIVar6 + 0x20)) {
          pIVar3 = pIVar6;
        }
        pIVar6 = *(InstructionSequence **)(pIVar6 + (ulong)(*(int *)(pIVar6 + 0x20) < iVar4) * 8);
      } while (pIVar6 != (InstructionSequence *)0x0);
      if ((pIVar3 == pIVar1) || (iVar4 < *(int *)(pIVar3 + 0x20))) goto LAB_01648d6c;
    }
    pIVar3 = pIVar3 + 0x30;
  }
  uVar5 = (ulong)*(uint *)pIVar3;
LAB_01648d78:
  return uVar5 & 0xffffffff;
}

