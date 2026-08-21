
undefined8 FUN_009fa908(undefined1 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 8;
  switch(*param_1) {
  case 0x46:
    return 1;
  default:
    uVar1 = 0xffffffff;
switchD_009fa930_caseD_62:
    return uVar1;
  case 0x49:
    return 3;
  case 0x4a:
    return 0x12;
  case 0x55:
    return 4;
  case 0x58:
    return 6;
  case 0x59:
    return 0x10;
  case 0x62:
    goto switchD_009fa930_caseD_62;
  case 0x66:
    return 2;
  case 0x69:
    return 5;
  case 0x6a:
    return 0x11;
  case 0x75:
    return 0xd;
  case 0x78:
    return 7;
  case 0x79:
    return 0xf;
  }
}

