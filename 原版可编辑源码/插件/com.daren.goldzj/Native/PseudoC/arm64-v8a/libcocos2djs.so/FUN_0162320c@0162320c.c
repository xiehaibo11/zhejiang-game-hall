
void FUN_0162320c(InstructionSelector *param_1,Node *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_68 [8];
  Node *local_60;
  Node *local_50;
  
  v8::internal::compiler::
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_68,param_2);
  uVar1 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,param_2);
  uVar3 = (uVar1 & 0xffffffff) << 3 | 0xd800000001;
  v8::internal::compiler::InstructionSelector::MarkAsDefined(param_1,param_2);
  uVar1 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,local_60);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,local_60);
  uVar2 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,local_50);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,local_50);
  v8::internal::compiler::InstructionSelector::Emit
            (param_1,0x7a,uVar3,(uVar1 & 0xffffffff) << 3 | 0x5800000001,
             (uVar2 & 0xffffffff) << 3 | 0x5800000001,0,0);
  v8::internal::compiler::InstructionSelector::EmitWithContinuation
            (param_1,0x1668,uVar3,uVar3,param_3);
  return;
}

