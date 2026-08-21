
ulong FUN_00e66c3c(long param_1,uint param_2,ulong param_3,ulong param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  
  uVar1 = *(uint *)(param_1 + 0x141c);
  if ((uVar1 >> 2 & 1) == 0) {
    return param_3;
  }
  lVar6 = *(long *)(param_1 + 0x1420);
  uVar8 = (ulong)param_2;
  if (*(char *)(lVar6 + uVar8 * 0x4858 + 0x1f8) != '\0') {
    return param_3;
  }
  uVar5 = -param_3;
  if (-1 < (long)param_3) {
    uVar5 = param_3;
  }
  if (param_2 == 1) {
    if ((uVar1 >> 1 & 1) == 0) {
      if (((long)uVar5 < 0xc0) && (uVar10 = uVar5, (param_6 >> 1 & 1) != 0)) goto LAB_00e66ee0;
      goto LAB_00e66c90;
    }
LAB_00e66cf8:
    uVar2 = *(uint *)(lVar6 + uVar8 * 0x4858 + 0x60);
    uVar10 = (ulong)uVar2;
    if (uVar2 == 0) {
      uVar10 = uVar5 + 0x20 & 0x7fffffffffffffc0;
      uVar8 = uVar5;
LAB_00e66d90:
      if ((long)(uVar10 | 0x30) <= (long)uVar5) {
        uVar8 = uVar5;
      }
    }
    else {
      lVar11 = 0x62;
      uVar7 = uVar5;
      puVar9 = (ulong *)(lVar6 + uVar8 * 0x4858 + 0x70);
      do {
        lVar4 = uVar5 - *puVar9;
        lVar6 = -lVar4;
        if (-1 < lVar4) {
          lVar6 = lVar4;
        }
        uVar8 = *puVar9;
        if (lVar11 <= lVar6) {
          uVar8 = uVar7;
          lVar6 = lVar11;
        }
        lVar11 = lVar6;
        uVar10 = uVar10 - 1;
        uVar7 = uVar8;
        puVar9 = puVar9 + 3;
      } while (uVar10 != 0);
      uVar10 = uVar8 + 0x20 & 0xffffffffffffffc0;
      if ((long)uVar8 <= (long)uVar5) goto LAB_00e66d90;
      if ((long)uVar5 <= (long)(uVar10 - 0x30)) {
        uVar8 = uVar5;
      }
    }
    if (param_2 == 1) {
      if ((long)uVar8 < 0x40) {
        uVar8 = 0xffffffffffffffc0;
        if (-1 < (long)param_3) {
          uVar8 = 0x40;
        }
        return uVar8;
      }
      uVar8 = uVar8 + 0x10;
    }
    else {
      if ((uVar1 >> 3 & 1) == 0) {
        if ((long)uVar8 < 0x30) {
          uVar5 = (long)(uVar8 + 0x40) >> 1;
          uVar8 = -uVar5;
          if (-1 < (long)param_3) {
            uVar8 = uVar5;
          }
          return uVar8;
        }
        if ((long)uVar8 < 0x80) {
          uVar10 = uVar8 + 0x16 & 0xffffffffffffffc0;
          lVar11 = uVar10 - uVar5;
          lVar6 = -lVar11;
          if (-1 < lVar11) {
            lVar6 = lVar11;
          }
          if ((0xf < lVar6) && (uVar10 = uVar5, (long)uVar5 < 0x30)) {
            uVar5 = uVar5 + 0x40 >> 1;
            uVar8 = -uVar5;
            if (-1 < (long)param_3) {
              uVar8 = uVar5;
            }
            return uVar8;
          }
          goto LAB_00e66ee0;
        }
      }
      else if ((long)uVar8 < 0x40) {
        uVar8 = 0xffffffffffffffc0;
        if (-1 < (long)param_3) {
          uVar8 = 0x40;
        }
        return uVar8;
      }
      uVar8 = uVar8 + 0x20;
    }
  }
  else {
    if ((uVar1 & 1) != 0) goto LAB_00e66cf8;
LAB_00e66c90:
    uVar10 = 0x40;
    if (0x4f < (long)uVar5) {
      uVar10 = uVar5;
    }
    if ((long)uVar5 < 0x39) {
      uVar5 = 0x38;
    }
    if ((param_5 & 1) != 0) {
      uVar5 = uVar10;
    }
    uVar10 = uVar5;
    if (*(int *)(lVar6 + uVar8 * 0x4858 + 0x60) == 0) goto LAB_00e66ee0;
    uVar8 = *(ulong *)(lVar6 + uVar8 * 0x4858 + 0x70);
    lVar4 = uVar5 - uVar8;
    lVar11 = -lVar4;
    if (-1 < lVar4) {
      lVar11 = lVar4;
    }
    if (lVar11 < 0x28) {
      if ((long)uVar8 < 0x31) {
        uVar8 = 0x30;
      }
      uVar5 = -uVar8;
      if (-1 < (long)param_3) {
        uVar5 = uVar8;
      }
      return uVar5;
    }
    if ((long)uVar5 < 0xc0) {
      uVar8 = uVar5 & 0x3f;
      if (9 < uVar8) {
        if (uVar8 < 0x20) {
          uVar5 = uVar5 & 0x7fffffffffffffc0 | 10;
          uVar8 = -uVar5;
          if (-1 < (long)param_3) {
            uVar8 = uVar5;
          }
          return uVar8;
        }
        uVar10 = uVar5 & 0x7fffffffffffffc0 | 0x36;
        if (0x35 < uVar8) {
          uVar10 = uVar5;
        }
        uVar8 = -uVar10;
        if (-1 < (long)param_3) {
          uVar8 = uVar10;
        }
        return uVar8;
      }
      goto LAB_00e66ee0;
    }
    if (((long)param_3 < 1 || (long)param_4 < 1) && (-1 < (long)(param_4 & param_3))) {
LAB_00e66e88:
      uVar8 = 0;
    }
    else {
      uVar3 = *(ushort *)(*(long *)(*(long *)(lVar6 + 8) + 0xa0) + 0x18);
      if (9 < uVar3) {
        if (0x1d < uVar3) goto LAB_00e66e88;
        param_4 = (long)((0x1e - uVar3) * param_4) / 0x14;
      }
      uVar8 = -param_4;
      if ((long)param_4 < 0) {
        uVar8 = param_4;
      }
    }
    uVar8 = uVar5 + uVar8 + 0x20;
  }
  uVar10 = uVar8 & 0xffffffffffffffc0;
LAB_00e66ee0:
  uVar8 = -uVar10;
  if (-1 < (long)param_3) {
    uVar8 = uVar10;
  }
  return uVar8;
}

