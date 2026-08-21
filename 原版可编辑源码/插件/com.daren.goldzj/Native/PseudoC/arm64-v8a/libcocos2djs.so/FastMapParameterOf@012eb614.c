
/* v8::internal::compiler::FastMapParameterOf(v8::internal::compiler::Operator const*) */

undefined8 v8::internal::compiler::FastMapParameterOf(Operator *param_1)

{
  Operator *pOVar1;
  
  if (*(short *)(param_1 + 0x10) == 0xfa) {
    pOVar1 = param_1 + 0x30;
  }
  else {
    if (*(short *)(param_1 + 0x10) != 0xf8) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pOVar1 = param_1 + 0x38;
  }
  return *(undefined8 *)pOVar1;
}

