
/* v8::internal::compiler::Arm64OperandGenerator::UseOperand(v8::internal::compiler::Node*,
   v8::internal::compiler::ImmediateMode) */

ulong v8::internal::compiler::Arm64OperandGenerator::UseOperand
                (Arm64OperandGenerator *param_1,Node *param_2)

{
  ulong uVar1;
  long lVar2;
  InstructionSequence *this;
  Constant local_30 [16];
  
  lVar2 = *(long *)param_2;
  if (*(ushort *)(lVar2 + 0x10) - 0x17 < 2) {
    if (*(ushort *)(lVar2 + 0x10) == 0x17) {
      lVar2 = (long)*(int *)(lVar2 + 0x2c);
    }
    else {
      lVar2 = *(long *)(lVar2 + 0x30);
    }
    uVar1 = CanBeImmediate(param_1,lVar2);
    if ((uVar1 & 1) != 0) {
      this = *(InstructionSequence **)(*(long *)param_1 + 0x10);
      local_30 = (Constant  [16])OperandGenerator::ToConstant(param_2);
      uVar1 = InstructionSequence::AddImmediate(this,local_30);
      return uVar1;
    }
  }
  uVar1 = InstructionSelector::GetVirtualRegister(*(InstructionSelector **)param_1,param_2);
  InstructionSelector::MarkAsUsed(*(InstructionSelector **)param_1,param_2);
  return (uVar1 & 0xffffffff) << 3 | 0x5800000001;
}

