
/* v8::internal::CodeFactory::FastNewFunctionContext(v8::internal::Isolate*,
   v8::internal::ScopeType) */

void v8::internal::CodeFactory::FastNewFunctionContext(Builtins *param_1,char param_2)

{
  if (param_2 == '\x01') {
    Builtins::CallableFor(param_1,0x21);
    return;
  }
  if (param_2 == '\x02') {
    Builtins::CallableFor(param_1,0x22);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

