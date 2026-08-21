
/* v8::internal::compiler::InstructionSelector::VisitFloat64Pow(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitFloat64Pow
          (InstructionSelector *this,Node *param_1)

{
  VisitFloat64Ieee754Binop(this,param_1,0x5b);
  return;
}

