
undefined8
FUN_00b0422c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            ulong param_5,uint param_6,int param_7,uint param_8,uint param_9)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  char cVar5;
  ulong uVar6;
  size_t sVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  char acStack_7d [29];
  
  if ((param_9 >> 6 & 1) == 0) {
    if ((long)param_5 < 0) {
      param_5 = -param_5;
      iVar12 = 0x2d;
    }
    else if ((param_9 >> 1 & 1) == 0) {
      iVar12 = (param_9 & 4) << 3;
    }
    else {
      iVar12 = 0x2b;
    }
  }
  else {
    iVar12 = 0;
  }
  pcVar13 = "";
  if ((param_9 >> 3 & 1) != 0) {
    pcVar4 = "0";
    if (param_6 != 8) {
      pcVar4 = "";
    }
    pcVar13 = "0x";
    if (param_6 != 0x10) {
      pcVar13 = pcVar4;
    }
  }
  lVar9 = 0;
  param_8 = param_8 & ((int)param_8 >> 0x1f ^ 0xffffffffU);
  uVar10 = (ulong)param_6;
  pcVar4 = "0123456789ABCDEF";
  if ((param_9 & 0x20) == 0) {
    pcVar4 = "0123456789abcdef";
  }
  do {
    uVar6 = 0;
    if (uVar10 != 0) {
      uVar6 = param_5 / uVar10;
    }
    lVar2 = lVar9 + 1;
    acStack_7d[lVar9 + 1] = pcVar4[param_5 - uVar6 * uVar10];
  } while ((uVar10 <= param_5) && (bVar1 = lVar9 < 0x19, param_5 = uVar6, lVar9 = lVar2, bVar1));
  uVar11 = (uint)lVar2;
  uVar3 = uVar11 - 1;
  if (uVar11 != 0x1a) {
    uVar3 = uVar11;
  }
  uVar11 = param_8;
  if ((int)param_8 < (int)uVar3) {
    uVar11 = uVar3;
  }
  lVar9 = (long)(int)uVar3;
  acStack_7d[lVar9 + 1] = '\0';
  sVar7 = strlen(pcVar13);
  uVar11 = ((param_7 - (uint)(iVar12 != 0)) - uVar11) - (int)sVar7;
  uVar3 = param_8 - uVar3 & ((int)(param_8 - uVar3) >> 0x1f ^ 0xffffffffU);
  uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
  uVar14 = uVar11;
  if ((param_9 & 0x10) != 0) {
    uVar14 = 0;
  }
  if ((int)uVar3 < (int)uVar11 && (param_9 & 0x10) != 0) {
    uVar3 = uVar11;
  }
  uVar11 = -uVar14;
  if ((param_9 & 1) == 0) {
    uVar11 = uVar14;
  }
  uVar14 = uVar11;
  if (0 < (int)uVar11) {
    do {
      uVar8 = FUN_00b040d8(param_1,param_2,param_3,param_4,0x20);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      uVar11 = uVar14 - 1;
      bVar1 = 0 < (int)uVar14;
      uVar14 = uVar11;
    } while (uVar11 != 0 && bVar1);
  }
  if ((iVar12 != 0) &&
     (uVar8 = FUN_00b040d8(param_1,param_2,param_3,param_4,iVar12), (int)uVar8 == 0)) {
    return uVar8;
  }
  cVar5 = *pcVar13;
  while (cVar5 != '\0') {
    pcVar13 = pcVar13 + 1;
    uVar8 = FUN_00b040d8(param_1,param_2,param_3,param_4,cVar5);
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    cVar5 = *pcVar13;
  }
  if (uVar3 != 0) {
    iVar12 = uVar3 + 1;
    do {
      uVar8 = FUN_00b040d8(param_1,param_2,param_3,param_4,0x30);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      iVar12 = iVar12 + -1;
    } while (1 < iVar12);
  }
  do {
    if (lVar9 < 1) {
      if (-1 < (int)uVar11) {
        return 1;
      }
      iVar12 = uVar11 - 1;
      do {
        uVar8 = FUN_00b040d8(param_1,param_2,param_3,param_4,0x20);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < -1);
      return 1;
    }
    pcVar13 = acStack_7d + lVar9;
    lVar9 = lVar9 + -1;
    uVar8 = FUN_00b040d8(param_1,param_2,param_3,param_4,*pcVar13);
  } while ((int)uVar8 != 0);
  return uVar8;
}

