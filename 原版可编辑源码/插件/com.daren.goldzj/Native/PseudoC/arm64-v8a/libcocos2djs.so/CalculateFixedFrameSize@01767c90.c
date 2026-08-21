
/* v8::internal::compiler::CallDescriptor::CalculateFixedFrameSize(v8::internal::Code::Kind) const
    */

undefined4 __thiscall
v8::internal::compiler::CallDescriptor::CalculateFixedFrameSize(CallDescriptor *this,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 3;
  switch(*(undefined4 *)this) {
  case 0:
  case 6:
    goto switchD_01767cc0_caseD_0;
  case 1:
    uVar1 = 4;
    if (((byte)this[0x48] & 0x20) != 0) {
      uVar1 = 5;
    }
switchD_01767cc0_caseD_0:
    return uVar1;
  case 2:
    uVar1 = 4;
    if (param_2 != 0xb) {
      uVar1 = 2;
    }
    return uVar1;
  case 3:
    return 5;
  case 4:
  case 5:
    return 4;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
}

