
/* v8::internal::compiler::SimplifiedOperatorBuilder::ConvertReceiver(v8::internal::ConvertReceiverMode)
    */

long __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::ConvertReceiver
          (SimplifiedOperatorBuilder *this,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 == 0) {
    lVar1 = *(long *)this;
    lVar2 = 0x32a0;
  }
  else if (param_2 == 1) {
    lVar1 = *(long *)this;
    lVar2 = 0x32d8;
  }
  else {
    if (param_2 != 2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar1 = *(long *)this;
    lVar2 = 0x3268;
  }
  return lVar1 + lVar2;
}

