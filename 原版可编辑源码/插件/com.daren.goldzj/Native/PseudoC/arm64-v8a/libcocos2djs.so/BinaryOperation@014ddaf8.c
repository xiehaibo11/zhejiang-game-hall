
/* v8::internal::CodeFactory::BinaryOperation(v8::internal::Isolate*, v8::internal::Operation) */

void v8::internal::CodeFactory::BinaryOperation(Builtins *param_1,uint param_2)

{
  if ((param_2 < 0xc) && ((0xfdfU >> (ulong)(param_2 & 0x1f) & 1) != 0)) {
    Builtins::CallableFor(param_1,*(undefined4 *)(&DAT_01a41f40 + (long)(int)param_2 * 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

