
uint FUN_00e13480(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  uVar5 = (uint)*param_1;
  uVar6 = (uint)param_1[1];
  uVar10 = -uVar5;
  if (-1 < (int)uVar5) {
    uVar10 = uVar5;
  }
  uVar2 = 0x10000;
  if (-1 >= (int)uVar5) {
    uVar2 = 0xffffffffffff0000;
  }
  uVar9 = -uVar6;
  if (-1 < (int)uVar6) {
    uVar9 = uVar6;
  }
  uVar3 = 0x10000;
  if (-1 >= (int)uVar6) {
    uVar3 = 0xffffffffffff0000;
  }
  if (uVar10 == 0) {
    uVar10 = 0;
    if (uVar9 != 0) {
      param_1[1] = uVar3;
      return uVar9;
    }
  }
  else {
    if (uVar9 == 0) {
      *param_1 = uVar2;
      return uVar10;
    }
    uVar11 = uVar10 + (uVar9 >> 1);
    if (uVar10 <= uVar9) {
      uVar11 = uVar9 + (uVar10 >> 1);
    }
    iVar12 = 0xf;
    if (0xaaaaaaaaUL >> LZCOUNT(uVar11) <= (ulong)uVar11) {
      iVar12 = 0x10;
    }
    uVar8 = (int)LZCOUNT(uVar11) - iVar12;
    if ((int)uVar8 < 1) {
      uVar1 = -uVar8;
      uVar10 = uVar10 >> (ulong)(uVar1 & 0x1f);
      uVar9 = uVar9 >> (ulong)(uVar1 & 0x1f);
      uVar11 = uVar11 >> (ulong)(uVar1 & 0x1f);
    }
    else {
      uVar10 = uVar10 << (ulong)(uVar8 & 0x1f);
      uVar9 = uVar9 << (ulong)(uVar8 & 0x1f);
      uVar11 = uVar10 + (uVar9 >> 1);
      if (uVar10 <= uVar9) {
        uVar11 = uVar9 + (uVar10 >> 1);
      }
    }
    iVar12 = 0x10000 - uVar11;
    do {
      uVar11 = uVar9 + ((int)(iVar12 * uVar9) >> 0x10);
      uVar1 = uVar10 + ((int)(iVar12 * uVar10) >> 0x10);
      iVar7 = uVar11 * uVar11 + uVar1 * uVar1;
      iVar4 = iVar7 + 0x1ff;
      if (-1 < iVar7) {
        iVar4 = iVar7;
      }
      iVar7 = -((iVar4 >> 9) * (iVar12 + 0x10000 >> 8));
      iVar4 = iVar7 + 0xffff;
      if (-1 < iVar7) {
        iVar4 = iVar7;
      }
      iVar12 = iVar12 + (iVar4 >> 0x10);
    } while (0xffff < iVar7);
    uVar2 = -(ulong)uVar1;
    if (-1 < (int)uVar5) {
      uVar2 = (ulong)uVar1;
    }
    iVar12 = uVar11 * uVar9 + uVar1 * uVar10;
    uVar3 = -(ulong)uVar11;
    if (-1 < (int)uVar6) {
      uVar3 = (ulong)uVar11;
    }
    iVar4 = iVar12 + 0xffff;
    if (-1 < iVar12) {
      iVar4 = iVar12;
    }
    *param_1 = uVar2;
    param_1[1] = uVar3;
    iVar12 = (iVar4 >> 0x10) + 0x10000;
    if (0 < (int)uVar8) {
      return (uint)(iVar12 + (1 << (ulong)(uVar8 - 1 & 0x1f))) >> (ulong)(uVar8 & 0x1f);
    }
    uVar10 = iVar12 << (ulong)(-uVar8 & 0x1f);
  }
  return uVar10;
}

