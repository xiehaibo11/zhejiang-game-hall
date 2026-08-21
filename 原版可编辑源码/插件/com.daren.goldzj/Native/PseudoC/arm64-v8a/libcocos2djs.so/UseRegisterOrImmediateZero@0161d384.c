
/* v8::internal::compiler::Arm64OperandGenerator::UseRegisterOrImmediateZero(v8::internal::compiler::Node*)
    */

ulong __thiscall
v8::internal::compiler::Arm64OperandGenerator::UseRegisterOrImmediateZero
          (Arm64OperandGenerator *this,Node *param_1)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  InstructionSequence *this_00;
  Constant local_30 [16];
  
  lVar3 = *(long *)param_1;
  uVar1 = *(ushort *)(lVar3 + 0x10);
  if (uVar1 - 0x17 < 2) {
    if (uVar1 == 0x17) {
      if (*(int *)(lVar3 + 0x2c) != 0) goto LAB_0161d3f4;
    }
    else {
      lVar3 = *(long *)(lVar3 + 0x30);
joined_r0x0161d42c:
      if (lVar3 != 0) goto LAB_0161d3f4;
    }
LAB_0161d430:
    this_00 = *(InstructionSequence **)(*(long *)this + 0x10);
    local_30 = (Constant  [16])OperandGenerator::ToConstant(param_1);
    uVar2 = InstructionSequence::AddImmediate(this_00,local_30);
  }
  else {
    if (uVar1 - 0x19 < 2) {
      if (uVar1 != 0x19) {
        lVar3 = *(long *)(lVar3 + 0x30);
        goto joined_r0x0161d42c;
      }
      if ((double)*(float *)(lVar3 + 0x2c) == 0.0) goto LAB_0161d430;
    }
LAB_0161d3f4:
    uVar2 = InstructionSelector::GetVirtualRegister(*(InstructionSelector **)this,param_1);
    uVar2 = (uVar2 & 0xffffffff) << 3 | 0x5800000001;
    InstructionSelector::MarkAsUsed(*(InstructionSelector **)this,param_1);
  }
  return uVar2;
}

