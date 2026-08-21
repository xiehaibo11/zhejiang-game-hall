
void FUN_010681a8(ulong param_1,uint param_2,int param_3,char *param_4,undefined8 param_5,
                 int *param_6,int *param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (-0x41 < (int)param_2) {
    param_2 = -param_2;
    uVar3 = (ulong)param_2;
    if ((0 < param_3) && (param_1 != 0)) {
      iVar5 = *param_6;
      iVar7 = 1;
      do {
        param_2 = (int)uVar3 - 1;
        uVar3 = (ulong)param_2;
        uVar9 = param_1 * 5 >> (uVar3 & 0x3f);
        param_4[iVar5] = (char)uVar9 + '0';
        iVar5 = *param_6 + 1;
        param_1 = param_1 * 5 - ((long)(int)uVar9 << (uVar3 & 0x3f));
        *param_6 = iVar5;
        if (param_3 <= iVar7) break;
        iVar7 = iVar7 + 1;
      } while (param_1 != 0);
    }
    if ((int)param_2 < 1) {
      return;
    }
    if ((param_1 >> ((ulong)(param_2 - 1) & 0x3f) & 1) == 0) {
      return;
    }
    iVar5 = *param_6;
    if (iVar5 == 0) goto LAB_010683dc;
    param_4[(long)iVar5 + -1] = param_4[(long)iVar5 + -1] + '\x01';
    uVar6 = *param_6 - 1;
    if (0 < (int)uVar6) {
      pcVar4 = param_4 + (*param_6 + -2);
      do {
        if (param_4[uVar6] != ':') {
          return;
        }
        param_4[uVar6] = '0';
        uVar6 = uVar6 - 1;
        *pcVar4 = *pcVar4 + '\x01';
        pcVar4 = pcVar4 + -1;
      } while (0 < (int)uVar6);
    }
    goto LAB_010683b8;
  }
  uVar6 = -param_2 - 0x40;
  uVar3 = param_1;
  if (uVar6 == 0x40) {
LAB_010682a0:
    param_1 = 0;
    if (uVar3 == 0) goto LAB_01068414;
LAB_010682ac:
    if (param_3 < 1) goto LAB_01068414;
    uVar8 = 1;
    uVar9 = 0x3f;
    do {
      uVar1 = (uVar3 & 0xffffffff) + (uVar3 & 0xffffffff) * 4;
      iVar5 = (int)uVar9;
      uVar6 = iVar5 + 0x40;
      uVar2 = (uVar3 >> 0x20) * 5 + (uVar1 >> 0x20);
      uVar3 = uVar1 & 0xffffffff | uVar2 << 0x20;
      uVar1 = param_1 * 5 + (uVar2 >> 0x20);
      if ((int)uVar6 < 0x40) {
        uVar9 = uVar3 >> ((ulong)uVar6 & 0x3f);
        param_1 = 0;
        iVar7 = (int)(uVar1 << (uVar8 & 0x3f)) + (int)uVar9;
        uVar3 = uVar3 - (uVar9 << ((ulong)uVar6 & 0x3f));
      }
      else {
        iVar7 = (int)(uVar1 >> (uVar9 & 0x3f));
        param_1 = uVar1 - ((long)iVar7 << (uVar9 & 0x3f));
      }
      uVar9 = (ulong)(iVar5 - 1);
      param_4[*param_6] = (char)iVar7 + '0';
      *param_6 = *param_6 + 1;
    } while ((param_1 != 0 || uVar3 != 0) &&
            (iVar7 = (int)uVar8, uVar8 = (ulong)(iVar7 + 1), iVar7 < param_3));
    if (iVar5 + 0x3f < 0x40) {
      param_1 = uVar3 >> (uVar9 & 0x3f);
    }
    else {
      param_1 = param_1 >> (uVar9 & 0x3f);
    }
    if ((param_1 & 1) == 0) {
      return;
    }
  }
  else {
    if (uVar6 == 0) {
      uVar3 = 0;
      if (param_1 != 0) goto LAB_010682ac;
    }
    else {
      if (uVar6 == 0xffffffc0) {
        uVar3 = 0;
        goto LAB_010682a0;
      }
      uVar3 = param_1 << ((ulong)param_2 & 0x3f);
      param_1 = param_1 >> ((ulong)uVar6 & 0x3f);
      if (param_1 != 0 || uVar3 != 0) goto LAB_010682ac;
    }
LAB_01068414:
    if (-1 < (long)param_1) {
      return;
    }
  }
  iVar5 = *param_6;
  if (iVar5 == 0) {
LAB_010683dc:
    *param_4 = '1';
    *param_7 = 1;
    *param_6 = 1;
    return;
  }
  param_4[(long)iVar5 + -1] = param_4[(long)iVar5 + -1] + '\x01';
  uVar6 = *param_6 - 1;
  if (0 < (int)uVar6) {
    pcVar4 = param_4 + (*param_6 + -2);
    do {
      if (param_4[uVar6] != ':') {
        return;
      }
      param_4[uVar6] = '0';
      uVar6 = uVar6 - 1;
      *pcVar4 = *pcVar4 + '\x01';
      pcVar4 = pcVar4 + -1;
    } while (0 < (int)uVar6);
  }
LAB_010683b8:
  if (*param_4 != ':') {
    return;
  }
  *param_4 = '1';
  *param_7 = *param_7 + 1;
  return;
}

