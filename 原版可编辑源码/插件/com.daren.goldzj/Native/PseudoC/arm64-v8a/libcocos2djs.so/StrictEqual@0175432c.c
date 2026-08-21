
/* v8::internal::compiler::JSOperatorBuilder::StrictEqual(v8::internal::CompareOperationHint) */

long __thiscall
v8::internal::compiler::JSOperatorBuilder::StrictEqual(JSOperatorBuilder *this,undefined1 param_2)

{
  switch(param_2) {
  case 0:
    return *(long *)this + 0xd20;
  case 1:
    return *(long *)this + 0xd50;
  case 2:
    return *(long *)this + 0xd80;
  case 3:
    return *(long *)this + 0xdb0;
  case 4:
    return *(long *)this + 0xde0;
  case 5:
    return *(long *)this + 0xe10;
  case 6:
    return *(long *)this + 0xe40;
  case 7:
    return *(long *)this + 0xe70;
  case 8:
    return *(long *)this + 0xea0;
  case 9:
    return *(long *)this + 0xed0;
  case 10:
    return *(long *)this + 0xf00;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
}

