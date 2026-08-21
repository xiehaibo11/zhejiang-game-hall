
/* v8::internal::compiler::SimplifiedOperatorReducer::ReplaceBoolean(bool) */

void __thiscall
v8::internal::compiler::SimplifiedOperatorReducer::ReplaceBoolean
          (SimplifiedOperatorReducer *this,bool param_1)

{
  if (param_1) {
    JSGraph::TrueConstant(*(JSGraph **)(this + 0x10));
    return;
  }
  JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
  return;
}

