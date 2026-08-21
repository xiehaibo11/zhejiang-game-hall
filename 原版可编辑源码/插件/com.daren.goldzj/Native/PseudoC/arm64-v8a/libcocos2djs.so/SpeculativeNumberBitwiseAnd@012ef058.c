
/* v8::internal::compiler::SimplifiedOperatorBuilder::SpeculativeNumberBitwiseAnd(v8::internal::compiler::NumberOperationHint)
    */

long __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::SpeculativeNumberBitwiseAnd
          (SimplifiedOperatorBuilder *this,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  
  switch(param_2) {
  case 0:
    lVar1 = *(long *)this;
    lVar2 = 0x3990;
    break;
  case 1:
    lVar1 = *(long *)this;
    lVar2 = 0x39c0;
    break;
  case 2:
    lVar1 = *(long *)this;
    lVar2 = 0x39f0;
    break;
  case 3:
    lVar1 = *(long *)this;
    lVar2 = 0x3a20;
    break;
  case 4:
    lVar1 = *(long *)this;
    lVar2 = 0x3a50;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return lVar1 + lVar2;
}

