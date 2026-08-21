
int FUN_010b8cdc(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  
  if ((param_1 & 1) == 0) {
    return (int)param_1 >> 1;
  }
  dVar6 = *(double *)(param_1 + 3);
  dVar7 = ABS(dVar6);
  uVar2 = (uint)((ulong)dVar6 >> 0x20);
  if (*(short *)((param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_1 - 1)) == 0x42) {
    if ((-2147483648.0 <= dVar6 && (dVar6 <= 2147483647.0 && (INFINITY < dVar7 || dVar7 < INFINITY))
        ) && (dVar6 == (double)(int)dVar6)) {
      return (int)dVar6;
    }
    uVar5 = 0xfffffbce;
    if (((ulong)dVar6 & 0x7ff0000000000000) != 0) {
      uVar5 = (uVar2 >> 0x14 & 0x7ff) - 0x433;
    }
    if (-1 < (int)uVar5) {
      if (0x1f < (int)uVar5) {
        return 0;
      }
LAB_010b8dd0:
      uVar1 = (ulong)dVar6 & 0xfffffffffffff;
      if (((ulong)dVar6 & 0x7ff0000000000000) != 0) {
        uVar1 = (ulong)dVar6 & 0xfffffffffffff | 0x10000000000000;
      }
      iVar4 = (int)(uVar1 << ((ulong)uVar5 & 0x3f));
      goto LAB_010b8e2c;
    }
    if ((int)uVar5 < -0x34) {
      return 0;
    }
  }
  else {
    if ((-2147483648.0 <= dVar6 && (dVar6 <= 2147483647.0 && (INFINITY < dVar7 || dVar7 < INFINITY))
        ) && (dVar6 == (double)(int)dVar6)) {
      return (int)dVar6;
    }
    uVar5 = 0xfffffbce;
    if (((ulong)dVar6 & 0x7ff0000000000000) != 0) {
      uVar5 = (uVar2 >> 0x14 & 0x7ff) - 0x433;
    }
    if (-1 < (int)uVar5) {
      if (0x1f < (int)uVar5) {
        return 0;
      }
      goto LAB_010b8dd0;
    }
    if ((int)uVar5 < -0x34) {
      return 0;
    }
  }
  uVar1 = (ulong)dVar6 & 0xfffffffffffff;
  if (((ulong)dVar6 & 0x7ff0000000000000) != 0) {
    uVar1 = (ulong)dVar6 & 0xfffffffffffff | 0x10000000000000;
  }
  iVar4 = (int)(uVar1 >> ((ulong)-uVar5 & 0x3f));
LAB_010b8e2c:
  iVar3 = -iVar4;
  if (-1 < (long)dVar6) {
    iVar3 = iVar4;
  }
  return iVar3;
}

