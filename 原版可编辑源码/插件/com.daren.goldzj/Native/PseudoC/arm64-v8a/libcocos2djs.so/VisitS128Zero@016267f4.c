
/* v8::internal::compiler::InstructionSelector::VisitS128Zero(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitS128Zero(InstructionSelector *this,Node *param_1)

{
  ulong uVar1;
  
  uVar1 = GetVirtualRegister(this,param_1);
  MarkAsDefined(this,param_1);
  Emit(this,0x18b,(uVar1 & 0xffffffff) << 3 | 0xd800000001,0,0);
  return;
}

