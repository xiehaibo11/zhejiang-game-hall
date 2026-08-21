
/* v8::internal::CodeFactory::StringAdd(v8::internal::Isolate*, v8::internal::StringAddFlags) */

void v8::internal::CodeFactory::StringAdd(Builtins *param_1,uint param_2)

{
  if (param_2 < 3) {
    Builtins::CallableFor(param_1,*(undefined4 *)(&DAT_01a41f70 + (long)(int)param_2 * 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

