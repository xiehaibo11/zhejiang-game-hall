
undefined8 inflateSync(long *param_1)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  char acStack_4 [4];
  
  if (param_1 == (long *)0x0) {
    return 0xfffffffe;
  }
  piVar8 = (int *)param_1[7];
  if (piVar8 == (int *)0x0) {
    return 0xfffffffe;
  }
  uVar12 = *(uint *)(param_1 + 1);
  if ((uVar12 == 0) && ((uint)piVar8[0x14] < 8)) {
    return 0xfffffffb;
  }
  if (*piVar8 == 0x1f) {
    uVar6 = piVar8[0x21];
  }
  else {
    *piVar8 = 0x1f;
    uVar12 = piVar8[0x14] & 0xfffffff8;
    uVar11 = *(long *)(piVar8 + 0x12) << (piVar8[0x14] & 7U);
    *(ulong *)(piVar8 + 0x12) = uVar11;
    piVar8[0x14] = uVar12;
    if (uVar12 < 8) {
      uVar6 = 0;
      piVar8[0x21] = 0;
    }
    else {
      uVar5 = 7 - uVar12;
      if (uVar5 < 0xfffffff9) {
        uVar5 = 0xfffffff8;
      }
      uVar13 = (ulong)((uVar12 + uVar5 >> 3) + 1);
      pcVar7 = acStack_4;
      uVar10 = uVar13;
      do {
        *pcVar7 = (char)uVar11;
        uVar10 = uVar10 - 1;
        uVar11 = uVar11 >> 8;
        pcVar7 = pcVar7 + 1;
      } while (uVar10 != 0);
      piVar8[0x21] = 0;
      uVar6 = 0;
      *(ulong *)(piVar8 + 0x12) = uVar11;
      piVar8[0x14] = (uVar12 - 8) - (uVar12 + uVar5 & 0xfffffff8);
      uVar11 = 0;
      do {
        cVar3 = '\0';
        if (1 < uVar6) {
          cVar3 = -1;
        }
        if (cVar3 == acStack_4[uVar11]) {
          uVar6 = uVar6 + 1;
        }
        else {
          uVar6 = 4 - uVar6;
          if (acStack_4[uVar11] != '\0') {
            uVar6 = 0;
          }
        }
        uVar11 = uVar11 + 1;
      } while ((uVar11 < uVar13) && (uVar6 < 4));
    }
    piVar8[0x21] = uVar6;
    uVar12 = *(uint *)(param_1 + 1);
  }
  lVar9 = *param_1;
  uVar11 = 0;
  if ((uVar12 != 0) && (uVar6 < 4)) {
    uVar11 = 0;
    do {
      cVar4 = *(char *)(lVar9 + uVar11);
      cVar3 = '\0';
      if (1 < uVar6) {
        cVar3 = -1;
      }
      if (cVar3 == cVar4) {
        uVar6 = uVar6 + 1;
      }
      else {
        uVar6 = 4 - uVar6;
        if (cVar4 != '\0') {
          uVar6 = 0;
        }
      }
      uVar11 = uVar11 + 1;
    } while ((uVar11 < uVar12) && (uVar6 < 4));
  }
  piVar8[0x21] = uVar6;
  lVar2 = param_1[2] + (uVar11 & 0xffffffff);
  *param_1 = lVar9 + (uVar11 & 0xffffffff);
  *(int *)(param_1 + 1) = (int)param_1[1] - (int)uVar11;
  param_1[2] = lVar2;
  if (uVar6 != 4) {
    return 0xfffffffd;
  }
  lVar9 = param_1[5];
  piVar8[0xd] = 0;
  piVar8[0xe] = 0;
  piVar8[0xf] = 0;
  piVar8[8] = 0;
  piVar8[9] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (piVar8[2] != 0) {
    param_1[0xc] = (ulong)(piVar8[2] & 1);
  }
  piVar8[5] = 0x8000;
  piVar1 = piVar8 + 0x154;
  *(int **)(piVar8 + 0x22) = piVar1;
  *(int **)(piVar8 + 0x18) = piVar1;
  *(int **)(piVar8 + 0x1a) = piVar1;
  piVar8[0x6f8] = 1;
  piVar8[0x6f9] = -1;
  piVar8[1] = 0;
  piVar8[3] = 0;
  piVar8[10] = 0;
  piVar8[0xb] = 0;
  piVar8[0x12] = 0;
  piVar8[0x13] = 0;
  piVar8[0x14] = 0;
  param_1[2] = lVar2;
  param_1[5] = lVar9;
  *piVar8 = 0xb;
  return 0;
}

