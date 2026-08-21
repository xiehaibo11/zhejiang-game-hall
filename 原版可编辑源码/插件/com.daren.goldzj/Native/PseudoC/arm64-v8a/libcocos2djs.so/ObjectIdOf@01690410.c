
/* v8::internal::compiler::ObjectIdOf(v8::internal::compiler::Operator const*) */

undefined4 v8::internal::compiler::ObjectIdOf(Operator *param_1)

{
  short sVar1;
  Operator *pOVar2;
  
  sVar1 = *(short *)(param_1 + 0x10);
  if (sVar1 == 0x30) {
    pOVar2 = param_1 + 0x30;
  }
  else {
    if ((sVar1 != 0x2f) && (sVar1 != 0x2e)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pOVar2 = param_1 + 0x2c;
  }
  return *(undefined4 *)pOVar2;
}

