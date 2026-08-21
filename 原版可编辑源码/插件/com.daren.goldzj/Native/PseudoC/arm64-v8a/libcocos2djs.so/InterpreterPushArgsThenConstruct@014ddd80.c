
/* v8::internal::CodeFactory::InterpreterPushArgsThenConstruct(v8::internal::Isolate*,
   v8::internal::InterpreterPushArgsMode) */

void v8::internal::CodeFactory::InterpreterPushArgsThenConstruct(Builtins *param_1,uint param_2)

{
  if (param_2 < 3) {
    Builtins::CallableFor(param_1,*(undefined4 *)(&DAT_01a41f88 + (long)(int)param_2 * 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

