
/* v8::internal::compiler::JSOperatorBuilder::LessThan(v8::internal::CompareOperationHint) */

long __thiscall
v8::internal::compiler::JSOperatorBuilder::LessThan(JSOperatorBuilder *this,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  
  switch(param_2) {
  case 0:
    return *(long *)this + 0xf30;
  case 1:
    return *(long *)this + 0xf60;
  case 2:
    return *(long *)this + 0xf90;
  case 3:
    return *(long *)this + 0xfc0;
  case 4:
    return *(long *)this + 0xff0;
  case 5:
    lVar1 = *(long *)this;
    lVar2 = 0x1020;
    break;
  case 6:
    lVar1 = *(long *)this;
    lVar2 = 0x1050;
    break;
  case 7:
    lVar1 = *(long *)this;
    lVar2 = 0x1080;
    break;
  case 8:
    lVar1 = *(long *)this;
    lVar2 = 0x10b0;
    break;
  case 9:
    lVar1 = *(long *)this;
    lVar2 = 0x10e0;
    break;
  case 10:
    lVar1 = *(long *)this;
    lVar2 = 0x1110;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return lVar1 + lVar2;
}

