
/* v8::internal::interpreter::GetJumpWithConstantOperand(v8::internal::interpreter::Bytecode) */

undefined8 v8::internal::interpreter::GetJumpWithConstantOperand(undefined1 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x8c;
  switch(param_1) {
  case 0x8b:
    goto switchD_017be470_caseD_8b;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x97:
    return 0x95;
  case 0x98:
    return 0x96;
  case 0x99:
    uVar1 = 0x92;
switchD_017be470_caseD_8b:
    return uVar1;
  case 0x9a:
    return 0x93;
  case 0x9b:
    return 0x8d;
  case 0x9c:
    return 0x8e;
  case 0x9d:
    return 0x8f;
  case 0x9e:
    return 0x90;
  case 0x9f:
    return 0x91;
  case 0xa0:
    return 0x94;
  }
}

