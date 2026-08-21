
/* v8::internal::MacroAssembler::SafepointRegisterStackIndex(int) */

int v8::internal::MacroAssembler::SafepointRegisterStackIndex(int param_1)

{
  if (0xf < (uint)param_1) {
    if (0xc < param_1 - 0x12U) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    param_1 = param_1 + -2;
  }
  return param_1;
}

