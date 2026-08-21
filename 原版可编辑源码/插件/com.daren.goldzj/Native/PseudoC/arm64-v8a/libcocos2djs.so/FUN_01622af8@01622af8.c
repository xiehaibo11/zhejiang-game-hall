
void FUN_01622af8(InstructionSelector *param_1,Node *param_2,long param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  InstructionSequence *this;
  BinopMatcher<v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>,v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>>
  aBStack_78 [8];
  Node *local_70;
  float local_68;
  char local_64;
  Node *local_60;
  float local_58;
  char local_54;
  undefined1 local_50 [16];
  
  v8::internal::compiler::
  BinopMatcher<v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>,v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>>
  ::BinopMatcher(aBStack_78,param_2);
  if ((local_54 == '\0') || (local_58 != 0.0)) {
    if ((local_64 == '\0') || (local_68 != 0.0)) {
      uVar2 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,local_70);
      v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,local_70);
      uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,local_60);
      uVar3 = (uVar3 & 0xffffffff) << 3 | 0x5800000001;
      v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,local_60);
      goto LAB_01622c34;
    }
    uVar1 = v8::internal::compiler::CommuteFlagsCondition(*(undefined4 *)(param_3 + 4));
    *(undefined4 *)(param_3 + 4) = uVar1;
    uVar2 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,local_60);
    v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,local_60);
    local_60 = local_70;
  }
  else {
    uVar2 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,local_70);
    v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,local_70);
  }
  this = *(InstructionSequence **)(param_1 + 0x10);
  local_50 = v8::internal::compiler::OperandGenerator::ToConstant(local_60);
  uVar3 = v8::internal::compiler::InstructionSequence::AddImmediate(this,(Constant *)local_50);
LAB_01622c34:
  v8::internal::compiler::InstructionSelector::EmitWithContinuation
            (param_1,0xac,(uVar2 & 0xffffffff) << 3 | 0x5800000001,uVar3,param_3);
  return;
}

