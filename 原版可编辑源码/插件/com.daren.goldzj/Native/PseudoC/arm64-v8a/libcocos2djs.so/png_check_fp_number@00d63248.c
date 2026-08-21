
uint png_check_fp_number(long param_1,ulong param_2,uint *param_3,ulong *param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_3;
  for (uVar1 = *param_4; uVar1 < param_2; uVar1 = uVar1 + 1) {
    uVar3 = 4;
    switch(*(undefined1 *)(param_1 + uVar1)) {
    case 0x2b:
      break;
    default:
      goto switchD_00d632a8_caseD_2c;
    case 0x2d:
      uVar3 = 0x84;
      break;
    case 0x2e:
      uVar3 = 0x10;
      break;
    case 0x30:
      uVar3 = 8;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      uVar3 = 0x108;
      break;
    case 0x45:
    case 0x65:
      uVar3 = 0x20;
    }
    switch(uVar3 & 0x3f | uVar2 & 3) {
    case 4:
      if ((uVar2 & 0x3c) != 0) goto switchD_00d632a8_caseD_2c;
LAB_00d63344:
      uVar2 = uVar3 | uVar2;
      break;
    default:
      goto switchD_00d632a8_caseD_2c;
    case 6:
      if ((uVar2 & 0x3c) != 0) goto switchD_00d632a8_caseD_2c;
      uVar2 = uVar2 | 4;
      break;
    case 8:
      if ((uVar2 & 0x10) != 0) {
        uVar2 = uVar2 & 0x180 | 0x11;
      }
    case 9:
      uVar2 = uVar2 | uVar3 | 0x40;
      break;
    case 10:
      uVar2 = uVar2 | 0x48;
      break;
    case 0x10:
      if ((uVar2 >> 4 & 1) != 0) goto switchD_00d632a8_caseD_2c;
      if ((uVar2 >> 3 & 1) != 0) goto LAB_00d63344;
      uVar2 = uVar2 & 0x1c0 | uVar3 | 1;
      break;
    case 0x20:
    case 0x21:
      if ((uVar2 >> 3 & 1) == 0) goto switchD_00d632a8_caseD_2c;
      uVar2 = uVar2 & 0x1c0 | 2;
    }
  }
switchD_00d632a8_caseD_2c:
  *param_3 = uVar2;
  *param_4 = uVar1;
  return uVar2 >> 3 & 1;
}

