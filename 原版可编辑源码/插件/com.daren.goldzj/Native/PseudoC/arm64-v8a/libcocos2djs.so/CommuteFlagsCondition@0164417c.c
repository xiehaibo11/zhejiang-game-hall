
/* v8::internal::compiler::CommuteFlagsCondition(v8::internal::compiler::FlagsCondition) */

undefined4 v8::internal::compiler::CommuteFlagsCondition(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  switch(param_1) {
  case 0:
  case 1:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    return param_1;
  case 2:
    goto switchD_016441ac_caseD_2;
  case 3:
    uVar1 = 4;
switchD_016441ac_caseD_2:
    return uVar1;
  case 4:
    return 3;
  case 5:
    return 2;
  case 6:
    return 9;
  case 7:
    return 8;
  case 8:
    return 7;
  case 9:
    return 6;
  case 10:
    return 0xd;
  case 0xb:
    return 0xc;
  case 0xc:
    return 0xb;
  case 0xd:
    return 10;
  case 0xe:
    return 0x11;
  case 0xf:
    return 0x10;
  case 0x10:
    return 0xf;
  case 0x11:
    return 0xe;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
}

