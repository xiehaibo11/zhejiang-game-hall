
/* v8::internal::compiler::Typer::Visitor::FalsifyUndefined(v8::base::Flags<v8::internal::compiler::Typer::Visitor::ComparisonOutcomeFlags,
   int>, v8::internal::compiler::Typer*) */

undefined8 v8::internal::compiler::Typer::Visitor::FalsifyUndefined(uint param_1,long param_2)

{
  if (param_1 == 0) {
    return 1;
  }
  if ((param_1 & 6) != 0) {
    if ((param_1 & 1) == 0) {
      return *(undefined8 *)(param_2 + 0xa0);
    }
    return 0x201;
  }
  return *(undefined8 *)(param_2 + 0xa8);
}

