
/* v8::internal::compiler::JSOperatorBuilder::Add(v8::internal::BinaryOperationHint) */

long __thiscall
v8::internal::compiler::JSOperatorBuilder::Add(JSOperatorBuilder *this,undefined1 param_2)

{
  switch(param_2) {
  case 0:
    return *(long *)this + 0x960;
  case 1:
    return *(long *)this + 0x990;
  case 2:
    return *(long *)this + 0x9c0;
  case 3:
    return *(long *)this + 0x9f0;
  case 4:
    return *(long *)this + 0xa20;
  case 5:
    return *(long *)this + 0xa50;
  case 6:
    return *(long *)this + 0xa80;
  case 7:
    return *(long *)this + 0xab0;
  case 8:
    return *(long *)this + 0xae0;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
}

