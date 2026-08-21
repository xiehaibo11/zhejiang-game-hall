
/* v8::internal::compiler::Typer::Visitor::Invert(v8::base::Flags<v8::internal::compiler::Typer::Visitor::ComparisonOutcomeFlags,
   int>, v8::internal::compiler::Typer*) */

ulong v8::internal::compiler::Typer::Visitor::Invert(ulong param_1)

{
  return param_1 & 4 | (ulong)(uint)((int)param_1 << 1) & 3 | param_1 >> 1 & 1;
}

