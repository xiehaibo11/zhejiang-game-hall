
/* v8::internal::compiler::InstructionSequence::GetSourcePosition(v8::internal::compiler::Instruction
   const*, v8::internal::SourcePosition*) const */

undefined8 __thiscall
v8::internal::compiler::InstructionSequence::GetSourcePosition
          (InstructionSequence *this,Instruction *param_1,SourcePosition *param_2)

{
  InstructionSequence *pIVar1;
  InstructionSequence *pIVar2;
  InstructionSequence *pIVar3;
  
  pIVar1 = this + 0x28;
  pIVar3 = *(InstructionSequence **)pIVar1;
  pIVar2 = pIVar1;
  if (pIVar3 != (InstructionSequence *)0x0) {
    do {
      if (*(Instruction **)(pIVar3 + 0x20) >= param_1) {
        pIVar2 = pIVar3;
      }
      pIVar3 = *(InstructionSequence **)
                (pIVar3 + (ulong)(*(Instruction **)(pIVar3 + 0x20) < param_1) * 8);
    } while (pIVar3 != (InstructionSequence *)0x0);
    if ((pIVar2 != pIVar1) && (*(Instruction **)(pIVar2 + 0x20) <= param_1)) {
      *(undefined8 *)param_2 = *(undefined8 *)(pIVar2 + 0x28);
      return 1;
    }
  }
  return 0;
}

