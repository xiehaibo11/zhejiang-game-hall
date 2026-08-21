
ulong FUN_010a6814(long param_1,uint param_2,ulong param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  
  uVar2 = *(uint *)(param_1 + 0x9c);
  if ((uVar2 >> 2 & 1) == 0) {
    return param_3;
  }
  lVar7 = *(long *)(param_1 + 0xa0);
  uVar9 = (ulong)param_2;
  if (*(char *)(lVar7 + uVar9 * 0x9d8 + 0x1f8) != '\0') {
    return param_3;
  }
  uVar1 = -param_3;
  if (-1 < (long)param_3) {
    uVar1 = param_3;
  }
  if (param_2 == 1) {
    if ((uVar2 >> 1 & 1) != 0) goto LAB_010a68c8;
    if (((long)uVar1 < 0xc0) && (uVar5 = uVar1, (param_5 >> 1 & 1) != 0)) goto LAB_010a6a00;
LAB_010a6868:
    lVar11 = 0x38;
    if ((param_4 & 1) != 0) {
      lVar11 = 0x50;
    }
    uVar6 = (ulong)((param_4 & 1) * 8 + 0x38);
    if (lVar11 <= (long)uVar1) {
      uVar6 = uVar1;
    }
    uVar5 = uVar6;
    if (*(int *)(lVar7 + uVar9 * 0x9d8 + 0x60) == 0) goto LAB_010a6a00;
    uVar5 = *(ulong *)(lVar7 + uVar9 * 0x9d8 + 0x70);
    lVar11 = uVar6 - uVar5;
    lVar7 = -lVar11;
    if (-1 < lVar11) {
      lVar7 = lVar11;
    }
    if (lVar7 < 0x28) {
      if ((long)uVar5 < 0x31) {
        uVar5 = 0x30;
      }
      goto LAB_010a6a00;
    }
    if ((long)uVar6 < 0xc0) {
      uVar9 = uVar6 & 0x3f;
      uVar5 = uVar6;
      if (9 < uVar9) {
        if (uVar9 < 0x20) {
          uVar5 = uVar6 & 0xffffffffffffffc0 | 10;
        }
        else {
          uVar5 = uVar6 & 0xffffffffffffffc0 | 0x36;
          if (0x35 < uVar9) {
            uVar5 = uVar6;
          }
        }
      }
      goto LAB_010a6a00;
    }
    uVar6 = uVar6 + 0x20;
  }
  else {
    if ((uVar2 & 1) == 0) goto LAB_010a6868;
LAB_010a68c8:
    uVar3 = *(uint *)(lVar7 + uVar9 * 0x9d8 + 0x60);
    uVar5 = (ulong)uVar3;
    if ((int)uVar3 < 1) {
      uVar9 = uVar1 + 0x20 & 0xffffffffffffffc0;
      uVar6 = uVar1;
LAB_010a6958:
      if ((long)(uVar9 | 0x30) <= (long)uVar1) {
        uVar6 = uVar1;
      }
      if (param_2 != 1) goto LAB_010a6934;
LAB_010a696c:
      if (0x3f < (long)uVar6) {
        uVar6 = uVar6 + 0x10;
        goto LAB_010a69fc;
      }
LAB_010a6984:
      uVar5 = 0x40;
      goto LAB_010a6a00;
    }
    lVar11 = 0x62;
    uVar8 = uVar1;
    puVar10 = (ulong *)(lVar7 + uVar9 * 0x9d8 + 0x70);
    do {
      uVar5 = uVar5 - 1;
      lVar4 = uVar1 - *puVar10;
      lVar7 = -lVar4;
      if (-1 < lVar4) {
        lVar7 = lVar4;
      }
      uVar6 = *puVar10;
      if (lVar11 <= lVar7) {
        uVar6 = uVar8;
        lVar7 = lVar11;
      }
      lVar11 = lVar7;
      uVar8 = uVar6;
      puVar10 = puVar10 + 3;
    } while (uVar5 != 0);
    uVar9 = uVar6 + 0x20 & 0xffffffffffffffc0;
    if ((long)uVar6 <= (long)uVar1) goto LAB_010a6958;
    if ((long)uVar1 <= (long)(uVar9 - 0x30)) {
      uVar6 = uVar1;
    }
    if (param_2 == 1) goto LAB_010a696c;
LAB_010a6934:
    if ((uVar2 >> 3 & 1) == 0) {
      if ((long)uVar6 < 0x30) {
        uVar5 = (long)(uVar6 + 0x40) >> 1;
        goto LAB_010a6a00;
      }
      if ((long)uVar6 < 0x80) {
        uVar5 = uVar6 + 0x16 & 0xffffffffffffffc0;
        lVar11 = uVar5 - uVar1;
        lVar7 = -lVar11;
        if (-1 < lVar11) {
          lVar7 = lVar11;
        }
        if ((0xf < lVar7) && (uVar5 = uVar1, (long)uVar1 < 0x30)) {
          uVar5 = (long)(uVar1 + 0x40) >> 1;
        }
        goto LAB_010a6a00;
      }
    }
    else if ((long)uVar6 < 0x40) goto LAB_010a6984;
    uVar6 = uVar6 + 0x20;
  }
LAB_010a69fc:
  uVar5 = uVar6 & 0xffffffffffffffc0;
LAB_010a6a00:
  uVar9 = -uVar5;
  if (-1 < (long)param_3) {
    uVar9 = uVar5;
  }
  return uVar9;
}

