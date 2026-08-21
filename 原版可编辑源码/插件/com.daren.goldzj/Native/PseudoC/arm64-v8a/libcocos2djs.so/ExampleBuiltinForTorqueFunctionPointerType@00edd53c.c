
/* v8::internal::ExampleBuiltinForTorqueFunctionPointerType(unsigned long) */

undefined4 v8::internal::ExampleBuiltinForTorqueFunctionPointerType(ulong param_1)

{
  if (param_1 < 0xc) {
    return *(undefined4 *)(&DAT_019a3bf4 + param_1 * 4);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

