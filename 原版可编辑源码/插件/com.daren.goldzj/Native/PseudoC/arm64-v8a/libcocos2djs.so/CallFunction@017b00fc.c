
/* v8::internal::Builtins::CallFunction(v8::internal::ConvertReceiverMode) */

void __thiscall v8::internal::Builtins::CallFunction(Builtins *this,uint param_2)

{
  if (param_2 < 3) {
    builtin_handle(this,param_2 + 4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

