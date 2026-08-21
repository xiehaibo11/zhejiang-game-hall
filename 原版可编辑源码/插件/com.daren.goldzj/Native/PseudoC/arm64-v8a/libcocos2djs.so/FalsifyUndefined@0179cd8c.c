
/* v8::internal::compiler::OperationTyper::FalsifyUndefined(v8::base::Flags<v8::internal::compiler::OperationTyper::ComparisonOutcomeFlags,
   int>) */

undefined8 __thiscall
v8::internal::compiler::OperationTyper::FalsifyUndefined(OperationTyper *this,uint param_2)

{
  if ((param_2 & 6) == 0) {
    return *(undefined8 *)(this + 0x38);
  }
  if ((param_2 & 1) == 0) {
    return *(undefined8 *)(this + 0x30);
  }
  return 0x201;
}

