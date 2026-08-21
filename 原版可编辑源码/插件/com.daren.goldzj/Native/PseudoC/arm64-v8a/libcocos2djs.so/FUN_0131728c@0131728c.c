
undefined8 FUN_0131728c(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x204;
  switch(param_1) {
  case 0xa8:
  case 0xaa:
    goto switchD_013172c4_caseD_fc00;
  case 0xa9:
  case 0xab:
switchD_013172c4_caseD_fc01:
    uVar1 = 0x304;
switchD_013172c4_caseD_fc00:
    return uVar1;
  case 0xac:
  case 0xad:
switchD_013172c4_default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0xae:
  case 0xb0:
switchD_013172c4_caseD_fc04:
    return 0x405;
  case 0xaf:
  case 0xb1:
switchD_013172c4_caseD_fc05:
    return 0x505;
  default:
    switch(param_1) {
    case 0xfc00:
    case 0xfc02:
      goto switchD_013172c4_caseD_fc00;
    case 0xfc01:
    case 0xfc03:
      goto switchD_013172c4_caseD_fc01;
    case 0xfc04:
    case 0xfc06:
      goto switchD_013172c4_caseD_fc04;
    case 0xfc05:
    case 0xfc07:
      goto switchD_013172c4_caseD_fc05;
    default:
      goto switchD_013172c4_default;
    }
  }
}

