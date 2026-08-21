
/* v8::internal::CodeFactory::ArraySingleArgumentConstructor(v8::internal::Isolate*,
   v8::internal::ElementsKind, v8::internal::AllocationSiteOverrideMode) */

void v8::internal::CodeFactory::ArraySingleArgumentConstructor
               (Builtins *param_1,byte param_2,int param_3)

{
  if ((param_2 < 2) && (param_3 == 0)) {
    if (param_2 == 0) {
      Builtins::CallableFor(param_1,0xa5);
      return;
    }
    if (param_2 == 1) {
      Builtins::CallableFor(param_1,0xa6);
      return;
    }
  }
  else if (param_2 < 6) {
    Builtins::CallableFor(param_1,param_2 + 0xa7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

