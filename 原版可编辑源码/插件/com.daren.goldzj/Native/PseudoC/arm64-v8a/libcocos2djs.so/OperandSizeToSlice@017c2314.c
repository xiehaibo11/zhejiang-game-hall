
/* v8::internal::interpreter::ConstantArrayBuilder::OperandSizeToSlice(v8::internal::interpreter::OperandSize)
   const */

undefined8 __thiscall
v8::internal::interpreter::ConstantArrayBuilder::OperandSizeToSlice
          (ConstantArrayBuilder *this,undefined1 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
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
    goto switchD_017c2344_caseD_3;
  case 4:
    this = this + 0x10;
  }
  uVar1 = *(undefined8 *)this;
switchD_017c2344_caseD_3:
  return uVar1;
}

