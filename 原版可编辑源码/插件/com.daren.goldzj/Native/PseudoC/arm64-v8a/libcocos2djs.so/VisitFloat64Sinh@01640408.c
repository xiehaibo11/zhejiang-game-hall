
/* v8::internal::compiler::InstructionSelector::VisitFloat64Sinh(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitFloat64Sinh
          (InstructionSelector *this,Node *param_1)

{
  VisitFloat64Ieee754Unop(this,param_1,0x5d);
  return;
}

