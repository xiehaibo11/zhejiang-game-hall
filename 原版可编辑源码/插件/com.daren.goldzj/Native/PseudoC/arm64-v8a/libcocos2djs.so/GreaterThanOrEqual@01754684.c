
/* v8::internal::compiler::JSOperatorBuilder::GreaterThanOrEqual(v8::internal::CompareOperationHint)
    */

long __thiscall
v8::internal::compiler::JSOperatorBuilder::GreaterThanOrEqual
          (JSOperatorBuilder *this,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  
  switch(param_2) {
  case 0:
    lVar1 = *(long *)this;
    lVar2 = 0x1560;
    break;
  case 1:
    lVar1 = *(long *)this;
    lVar2 = 0x1590;
    break;
  case 2:
    lVar1 = *(long *)this;
    lVar2 = 0x15c0;
    break;
  case 3:
    lVar1 = *(long *)this;
    lVar2 = 0x15f0;
    break;
  case 4:
    lVar1 = *(long *)this;
    lVar2 = 0x1620;
    break;
  case 5:
    lVar1 = *(long *)this;
    lVar2 = 0x1650;
    break;
  case 6:
    lVar1 = *(long *)this;
    lVar2 = 0x1680;
    break;
  case 7:
    lVar1 = *(long *)this;
    lVar2 = 0x16b0;
    break;
  case 8:
    lVar1 = *(long *)this;
    lVar2 = 0x16e0;
    break;
  case 9:
    lVar1 = *(long *)this;
    lVar2 = 0x1710;
    break;
  case 10:
    lVar1 = *(long *)this;
    lVar2 = 0x1740;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return lVar1 + lVar2;
}

