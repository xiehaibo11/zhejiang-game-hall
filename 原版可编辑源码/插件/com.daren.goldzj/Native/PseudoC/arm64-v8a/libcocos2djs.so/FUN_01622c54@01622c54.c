
void FUN_01622c54(InstructionSelector *param_1,Node *param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  InstructionSequence *this;
  undefined1 local_90 [16];
  BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
  aBStack_80 [8];
  Node *local_78;
  double local_70;
  char local_68;
  Node *local_60;
  double local_58;
  char local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  v8::internal::compiler::
  BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
  ::BinopMatcher(aBStack_80,param_2);
  if ((local_50 == '\0') || (local_58 != 0.0)) {
    if ((local_68 == '\0') || (local_70 != 0.0)) {
      uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,local_78);
      v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,local_78);
      uVar4 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,local_60);
      uVar4 = (uVar4 & 0xffffffff) << 3 | 0x5800000001;
      v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,local_60);
      goto LAB_01622d9c;
    }
    uVar2 = v8::internal::compiler::CommuteFlagsCondition(*(undefined4 *)(param_3 + 4));
    *(undefined4 *)(param_3 + 4) = uVar2;
    uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,local_60);
    v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,local_60);
    local_60 = local_78;
  }
  else {
    uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,local_78);
    v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,local_78);
  }
  this = *(InstructionSequence **)(param_1 + 0x10);
  local_90 = v8::internal::compiler::OperandGenerator::ToConstant(local_60);
  uVar4 = v8::internal::compiler::InstructionSequence::AddImmediate(this,(Constant *)local_90);
LAB_01622d9c:
  v8::internal::compiler::InstructionSelector::EmitWithContinuation
            (param_1,0xb8,(uVar3 & 0xffffffff) << 3 | 0x5800000001,uVar4,param_3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

