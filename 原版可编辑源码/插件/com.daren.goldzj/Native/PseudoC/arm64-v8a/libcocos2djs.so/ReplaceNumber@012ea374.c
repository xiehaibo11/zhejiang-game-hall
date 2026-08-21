
/* v8::internal::compiler::SimplifiedOperatorReducer::ReplaceNumber(double) */

void __thiscall
v8::internal::compiler::SimplifiedOperatorReducer::ReplaceNumber
          (SimplifiedOperatorReducer *this,double param_1)

{
  JSGraph::Constant(*(JSGraph **)(this + 0x10),param_1);
  return;
}

