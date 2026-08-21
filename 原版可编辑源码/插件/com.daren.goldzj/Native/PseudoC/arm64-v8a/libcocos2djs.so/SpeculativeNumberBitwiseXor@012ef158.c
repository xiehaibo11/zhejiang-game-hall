
/* v8::internal::compiler::SimplifiedOperatorBuilder::SpeculativeNumberBitwiseXor(v8::internal::compiler::NumberOperationHint)
    */

long __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::SpeculativeNumberBitwiseXor
          (SimplifiedOperatorBuilder *this,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  
  switch(param_2) {
  case 0:
    lVar1 = *(long *)this;
    lVar2 = 0x3b70;
    break;
  case 1:
    lVar1 = *(long *)this;
    lVar2 = 0x3ba0;
    break;
  case 2:
    lVar1 = *(long *)this;
    lVar2 = 0x3bd0;
    break;
  case 3:
    lVar1 = *(long *)this;
    lVar2 = 0x3c00;
    break;
  case 4:
    lVar1 = *(long *)this;
    lVar2 = 0x3c30;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return lVar1 + lVar2;
}

