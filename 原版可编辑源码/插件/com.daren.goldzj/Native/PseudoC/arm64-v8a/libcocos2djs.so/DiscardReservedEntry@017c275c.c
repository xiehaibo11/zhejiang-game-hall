
/* v8::internal::interpreter::ConstantArrayBuilder::DiscardReservedEntry(v8::internal::interpreter::OperandSize)
    */

void __thiscall
v8::internal::interpreter::ConstantArrayBuilder::DiscardReservedEntry
          (ConstantArrayBuilder *this,undefined1 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  switch(param_2) {
  case 0:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 1:
    break;
  case 2:
    this = this + 8;
    break;
  default:
    goto switchD_017c278c_caseD_3;
  case 4:
    this = this + 0x10;
  }
  lVar1 = *(long *)this;
switchD_017c278c_caseD_3:
  *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + -1;
  return;
}

