
/* v8::internal::compiler::SimplifiedOperatorBuilder::SpeculativeNumberShiftRight(v8::internal::compiler::NumberOperationHint)
    */

long __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::SpeculativeNumberShiftRight
          (SimplifiedOperatorBuilder *this,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  
  switch(param_2) {
  case 0:
    lVar1 = *(long *)this;
    lVar2 = 0x3d50;
    break;
  case 1:
    lVar1 = *(long *)this;
    lVar2 = 0x3d80;
    break;
  case 2:
    lVar1 = *(long *)this;
    lVar2 = 0x3db0;
    break;
  case 3:
    lVar1 = *(long *)this;
    lVar2 = 0x3de0;
    break;
  case 4:
    lVar1 = *(long *)this;
    lVar2 = 0x3e10;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return lVar1 + lVar2;
}

