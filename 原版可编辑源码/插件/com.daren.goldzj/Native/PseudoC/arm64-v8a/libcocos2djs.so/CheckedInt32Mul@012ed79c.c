
/* v8::internal::compiler::SimplifiedOperatorBuilder::CheckedInt32Mul(v8::internal::compiler::CheckForMinusZeroMode)
    */

long __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::CheckedInt32Mul
          (SimplifiedOperatorBuilder *this,char param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 == '\x01') {
    lVar1 = *(long *)this;
    lVar2 = 0x2e78;
  }
  else {
    if (param_2 != '\0') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar1 = *(long *)this;
    lVar2 = 0x2e48;
  }
  return lVar1 + lVar2;
}

