
/* v8::internal::compiler::InstructionSelector::VisitFloat64Tan(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitFloat64Tan
          (InstructionSelector *this,Node *param_1)

{
  VisitFloat64Ieee754Unop(this,param_1,0x5e);
  return;
}

