
/* v8::internal::compiler::JSOperatorBuilder::Equal(v8::internal::CompareOperationHint) */

long __thiscall
v8::internal::compiler::JSOperatorBuilder::Equal(JSOperatorBuilder *this,undefined1 param_2)

{
  switch(param_2) {
  case 0:
    return *(long *)this + 0xb10;
  case 1:
    return *(long *)this + 0xb40;
  case 2:
    return *(long *)this + 0xb70;
  case 3:
    return *(long *)this + 0xba0;
  case 4:
    return *(long *)this + 0xbd0;
  case 5:
    return *(long *)this + 0xc00;
  case 6:
    return *(long *)this + 0xc30;
  case 7:
    return *(long *)this + 0xc60;
  case 8:
    return *(long *)this + 0xc90;
  case 9:
    return *(long *)this + 0xcc0;
  case 10:
    return *(long *)this + 0xcf0;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
}

