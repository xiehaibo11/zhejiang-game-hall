
/* v8::internal::compiler::JSOperatorBuilder::LessThanOrEqual(v8::internal::CompareOperationHint) */

long __thiscall
v8::internal::compiler::JSOperatorBuilder::LessThanOrEqual
          (JSOperatorBuilder *this,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  
  switch(param_2) {
  case 0:
    lVar1 = *(long *)this;
    lVar2 = 0x1350;
    break;
  case 1:
    lVar1 = *(long *)this;
    lVar2 = 0x1380;
    break;
  case 2:
    lVar1 = *(long *)this;
    lVar2 = 0x13b0;
    break;
  case 3:
    lVar1 = *(long *)this;
    lVar2 = 0x13e0;
    break;
  case 4:
    lVar1 = *(long *)this;
    lVar2 = 0x1410;
    break;
  case 5:
    lVar1 = *(long *)this;
    lVar2 = 0x1440;
    break;
  case 6:
    lVar1 = *(long *)this;
    lVar2 = 0x1470;
    break;
  case 7:
    lVar1 = *(long *)this;
    lVar2 = 0x14a0;
    break;
  case 8:
    lVar1 = *(long *)this;
    lVar2 = 0x14d0;
    break;
  case 9:
    lVar1 = *(long *)this;
    lVar2 = 0x1500;
    break;
  case 10:
    lVar1 = *(long *)this;
    lVar2 = 0x1530;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return lVar1 + lVar2;
}

