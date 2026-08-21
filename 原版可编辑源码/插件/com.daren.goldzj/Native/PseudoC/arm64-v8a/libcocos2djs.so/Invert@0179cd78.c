
/* v8::internal::compiler::OperationTyper::Invert(v8::base::Flags<v8::internal::compiler::OperationTyper::ComparisonOutcomeFlags,
   int>) */

ulong __thiscall v8::internal::compiler::OperationTyper::Invert(undefined8 param_1,uint param_2)

{
  return (ulong)param_2 & 4 | (ulong)(param_2 << 1) & 3 | ((ulong)param_2 & 2) >> 1;
}

