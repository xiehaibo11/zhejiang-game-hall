
void FUN_0161fb58(InstructionSelector *param_1,Node *param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  InstructionSequence *this;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_b0 [8];
  Node *local_a8;
  uint local_90;
  char local_8c;
  undefined4 local_88 [4];
  undefined8 local_78;
  undefined4 local_70;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  v8::internal::compiler::
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_b0,param_2);
  if (((local_8c == '\0') || (local_90 < 0x80000001)) ||
     (uVar2 = v8::internal::Assembler::IsImmAddSub(-(long)(int)local_90), (uVar2 & 1) == 0)) {
    local_88[0] = 0;
    local_78 = 0;
    local_70 = 0xffffffff;
    FUN_01622dd0(param_1,param_2,param_3,0,local_88);
  }
  else {
    uVar2 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,param_2);
    v8::internal::compiler::InstructionSelector::MarkAsDefined(param_1,param_2);
    uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,local_a8);
    v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,local_a8);
    this = *(InstructionSequence **)(param_1 + 0x10);
    v8::internal::compiler::Constant::Constant((Constant *)local_88,-local_90);
    uVar4 = v8::internal::compiler::InstructionSequence::AddImmediate(this,(Constant *)local_88);
    v8::internal::compiler::InstructionSelector::Emit
              (param_1,param_4,(uVar2 & 0xffffffff) << 3 | 0xd800000001,
               (uVar3 & 0xffffffff) << 3 | 0x5800000001,uVar4,0,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

