
char * FUN_00bff3ac(char *param_1,uint param_2)

{
  ulong uVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  
  if ((int)param_2 < 0) {
    param_2 = -param_2;
    *param_1 = '-';
    param_1 = param_1 + 1;
  }
  if (param_2 < 10000) {
    if (param_2 < 10) goto LAB_00bff3f4;
    pcVar2 = param_1;
    if (99 < param_2) {
      if (999 < param_2) goto LAB_00bff438;
      goto LAB_00bff458;
    }
  }
  else {
    uVar1 = (ulong)param_2;
    uVar3 = (uint)(uVar1 / 10000);
    param_2 = param_2 + uVar3 * -10000;
    if (uVar3 < 10000) {
      if (9 < uVar3) {
        pcVar2 = param_1;
        if (99 < uVar3) {
          if (999 < uVar3) goto LAB_00bff4ac;
          goto LAB_00bff4cc;
        }
        goto LAB_00bff4f0;
      }
    }
    else {
      uVar4 = (uint)((uVar1 / 10000) / 10000);
      uVar3 = uVar3 + uVar4 * -10000;
      pcVar2 = param_1;
      if (9 < uVar4) {
        pcVar2 = param_1 + 1;
        *param_1 = (char)(uVar4 / 10) + '0';
        uVar4 = uVar4 % 10;
      }
      *pcVar2 = (char)uVar4 + '0';
      pcVar2 = pcVar2 + 1;
LAB_00bff4ac:
      param_1 = pcVar2 + 1;
      uVar4 = uVar3 * 0x20c5 >> 0x17;
      *pcVar2 = (char)uVar4 + '0';
      uVar3 = uVar3 + uVar4 * -1000;
LAB_00bff4cc:
      pcVar2 = param_1 + 1;
      uVar4 = uVar3 * 0x29 >> 0xc;
      *param_1 = (char)uVar4 + '0';
      uVar3 = uVar3 + uVar4 * -100;
LAB_00bff4f0:
      param_1 = pcVar2 + 1;
      uVar4 = uVar3 * 0x67 >> 10;
      *pcVar2 = (char)uVar4 + '0';
      uVar3 = uVar3 + uVar4 * -10;
    }
    *param_1 = (char)uVar3 + '0';
    pcVar2 = param_1 + 1;
LAB_00bff438:
    param_1 = pcVar2 + 1;
    uVar3 = param_2 * 0x20c5 >> 0x17;
    *pcVar2 = (char)uVar3 + '0';
    param_2 = param_2 + uVar3 * -1000;
LAB_00bff458:
    pcVar2 = param_1 + 1;
    uVar3 = param_2 * 0x29 >> 0xc;
    *param_1 = (char)uVar3 + '0';
    param_2 = param_2 + uVar3 * -100;
  }
  param_1 = pcVar2 + 1;
  uVar3 = param_2 * 0x67 >> 10;
  *pcVar2 = (char)uVar3 + '0';
  param_2 = param_2 + uVar3 * -10;
LAB_00bff3f4:
  *param_1 = (char)param_2 + '0';
  return param_1 + 1;
}

