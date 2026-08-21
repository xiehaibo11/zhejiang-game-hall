
/* v8::internal::compiler::TopLevelLiveRange::SetSpillOperand(v8::internal::compiler::InstructionOperand*)
    */

void __thiscall
v8::internal::compiler::TopLevelLiveRange::SetSpillOperand
          (TopLevelLiveRange *this,InstructionOperand *param_1)

{
  *(InstructionOperand **)(this + 0x70) = param_1;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffff9f | 0x20;
  return;
}

