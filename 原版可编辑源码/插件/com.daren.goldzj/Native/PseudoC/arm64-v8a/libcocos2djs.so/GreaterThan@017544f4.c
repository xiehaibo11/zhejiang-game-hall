
/* v8::internal::compiler::JSOperatorBuilder::GreaterThan(v8::internal::CompareOperationHint) */

long __thiscall
v8::internal::compiler::JSOperatorBuilder::GreaterThan(JSOperatorBuilder *this,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  
  switch(param_2) {
  case 0:
    lVar1 = *(long *)this;
    lVar2 = 0x1140;
    break;
  case 1:
    lVar1 = *(long *)this;
    lVar2 = 0x1170;
    break;
  case 2:
    lVar1 = *(long *)this;
    lVar2 = 0x11a0;
    break;
  case 3:
    lVar1 = *(long *)this;
    lVar2 = 0x11d0;
    break;
  case 4:
    lVar1 = *(long *)this;
    lVar2 = 0x1200;
    break;
  case 5:
    lVar1 = *(long *)this;
    lVar2 = 0x1230;
    break;
  case 6:
    lVar1 = *(long *)this;
    lVar2 = 0x1260;
    break;
  case 7:
    lVar1 = *(long *)this;
    lVar2 = 0x1290;
    break;
  case 8:
    lVar1 = *(long *)this;
    lVar2 = 0x12c0;
    break;
  case 9:
    lVar1 = *(long *)this;
    lVar2 = 0x12f0;
    break;
  case 10:
    lVar1 = *(long *)this;
    lVar2 = 0x1320;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return lVar1 + lVar2;
}

