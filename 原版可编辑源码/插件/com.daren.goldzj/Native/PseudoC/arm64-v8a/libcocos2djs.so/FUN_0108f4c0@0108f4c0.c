
void FUN_0108f4c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  switch(param_5) {
  case 0:
    FUN_0108f570(param_2,param_3,param_4,param_6,param_7,param_8);
    return;
  case 1:
    FUN_0108f5f8(param_2,param_3,param_4,param_6,param_8);
    return;
  case 2:
  case 3:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    FUN_0108f7d0(param_2,param_3,param_4,param_6,param_8);
    return;
  case 4:
  case 5:
    FUN_0108f6a8(param_2,param_3,param_4,param_6,param_8);
    return;
  case 0xc:
    FUN_0108f8a8();
    return;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  default:
    return;
  }
}

