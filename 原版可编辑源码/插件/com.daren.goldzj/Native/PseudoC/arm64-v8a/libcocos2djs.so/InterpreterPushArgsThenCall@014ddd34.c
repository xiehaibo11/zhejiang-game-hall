
/* v8::internal::CodeFactory::InterpreterPushArgsThenCall(v8::internal::Isolate*,
   v8::internal::ConvertReceiverMode, v8::internal::InterpreterPushArgsMode) */

void v8::internal::CodeFactory::InterpreterPushArgsThenCall
               (Builtins *param_1,uint param_2,int param_3)

{
  if (param_3 == 1) {
    Builtins::CallableFor(param_1,0x3b);
    return;
  }
  if ((param_3 == 2) && (param_2 < 3)) {
    Builtins::CallableFor(param_1,*(undefined4 *)(&DAT_01a41f7c + (long)(int)param_2 * 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

