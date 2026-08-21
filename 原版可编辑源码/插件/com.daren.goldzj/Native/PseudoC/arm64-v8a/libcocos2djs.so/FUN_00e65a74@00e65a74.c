
ulong FUN_00e65a74(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  
  uVar1 = *(uint *)(param_1 + 0x141c);
  if ((uVar1 >> 2 & 1) == 0) {
    return param_3;
  }
  lVar5 = *(long *)(param_1 + 0x1420);
  uVar4 = -param_3;
  if (-1 < (long)param_3) {
    uVar4 = param_3;
  }
  uVar8 = (ulong)param_2;
  uVar2 = uVar1;
  if (param_2 == 1) {
    uVar2 = uVar1 >> 1;
  }
  if ((uVar2 & 1) == 0) {
    if (*(int *)(lVar5 + uVar8 * 0x38a8 + 0x60) != 0) {
      uVar8 = *(ulong *)(lVar5 + uVar8 * 0x38a8 + 0x70);
      lVar10 = uVar4 - uVar8;
      lVar5 = -lVar10;
      if (-1 < lVar10) {
        lVar5 = lVar10;
      }
      if (lVar5 < 0x28) {
        if ((long)uVar8 < 0x31) {
          uVar8 = 0x30;
        }
        goto LAB_00e65c04;
      }
    }
    if ((long)uVar4 < 0x36) {
      lVar5 = 0x37 - uVar4;
      if (-1 < (long)(0x36 - uVar4)) {
        lVar5 = 0x36 - uVar4;
      }
      uVar8 = uVar4 + (lVar5 >> 1);
    }
    else {
      uVar8 = uVar4;
      if (((long)uVar4 < 0xc0) && (uVar7 = uVar4 & 0x3f, 9 < uVar7)) {
        if (uVar7 < 0x16) {
          uVar8 = uVar4 & 0x7fffffffffffffc0 | 10;
        }
        else {
          uVar8 = uVar4 & 0x7fffffffffffffc0 | 0x36;
          if (0xb < uVar7 - 0x2a) {
            uVar8 = uVar4;
          }
        }
      }
    }
    goto LAB_00e65c04;
  }
  uVar2 = *(uint *)(lVar5 + uVar8 * 0x38a8 + 0x60);
  uVar7 = (ulong)uVar2;
  if (uVar2 == 0) {
    uVar7 = uVar4 + 0x20 & 0x7fffffffffffffc0;
    uVar8 = uVar4;
LAB_00e65b8c:
    if ((long)(uVar7 | 0x30) <= (long)uVar4) {
      uVar8 = uVar4;
    }
    if (param_2 != 1) goto LAB_00e65b00;
LAB_00e65ba0:
    if ((long)uVar8 < 0x40) goto LAB_00e65be4;
    uVar8 = uVar8 + 0x10;
  }
  else {
    lVar10 = 0x62;
    uVar6 = uVar4;
    puVar9 = (ulong *)(lVar5 + uVar8 * 0x38a8 + 0x70);
    do {
      lVar3 = uVar4 - *puVar9;
      lVar5 = -lVar3;
      if (-1 < lVar3) {
        lVar5 = lVar3;
      }
      uVar8 = *puVar9;
      if (lVar10 <= lVar5) {
        uVar8 = uVar6;
        lVar5 = lVar10;
      }
      lVar10 = lVar5;
      uVar7 = uVar7 - 1;
      uVar6 = uVar8;
      puVar9 = puVar9 + 3;
    } while (uVar7 != 0);
    uVar7 = uVar8 + 0x20 & 0xffffffffffffffc0;
    if ((long)uVar8 <= (long)uVar4) goto LAB_00e65b8c;
    if ((long)uVar4 <= (long)(uVar7 - 0x30)) {
      uVar8 = uVar4;
    }
    if (param_2 == 1) goto LAB_00e65ba0;
LAB_00e65b00:
    if ((uVar1 >> 3 & 1) == 0) {
      if ((long)uVar8 < 0x30) {
        uVar8 = (long)(uVar8 + 0x40) >> 1;
        goto LAB_00e65c04;
      }
      if ((long)uVar8 < 0x80) {
        uVar8 = uVar8 + 0x16;
        goto LAB_00e65c00;
      }
    }
    else if ((long)uVar8 < 0x40) {
LAB_00e65be4:
      uVar8 = 0x40;
      goto LAB_00e65c04;
    }
    uVar8 = uVar8 + 0x20;
  }
LAB_00e65c00:
  uVar8 = uVar8 & 0xffffffffffffffc0;
LAB_00e65c04:
  uVar4 = -uVar8;
  if (-1 < (long)param_3) {
    uVar4 = uVar8;
  }
  return uVar4;
}

