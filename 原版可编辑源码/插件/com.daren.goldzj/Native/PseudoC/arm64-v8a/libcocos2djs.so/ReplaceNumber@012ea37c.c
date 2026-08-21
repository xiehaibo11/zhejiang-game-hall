
/* v8::internal::compiler::SimplifiedOperatorReducer::ReplaceNumber(int) */

void __thiscall
v8::internal::compiler::SimplifiedOperatorReducer::ReplaceNumber
          (SimplifiedOperatorReducer *this,int param_1)

{
  JSGraph::Constant(*(JSGraph **)(this + 0x10),(double)param_1);
  return;
}

