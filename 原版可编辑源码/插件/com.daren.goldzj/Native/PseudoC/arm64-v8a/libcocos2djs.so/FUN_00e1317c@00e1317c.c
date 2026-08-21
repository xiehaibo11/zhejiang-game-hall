
bool FUN_00e1317c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  if (param_1 == (ulong *)0x0) {
    return false;
  }
  uVar11 = *param_1;
  uVar9 = param_1[1];
  uVar10 = param_1[2];
  uVar13 = param_1[3];
  uVar12 = -uVar11;
  if (-1 < (long)uVar11) {
    uVar12 = uVar11;
  }
  uVar6 = -uVar9;
  if (-1 < (long)uVar9) {
    uVar6 = uVar9;
  }
  uVar1 = -uVar10;
  if (-1 < (long)uVar10) {
    uVar1 = uVar10;
  }
  uVar2 = -uVar13;
  if (-1 < (long)uVar13) {
    uVar2 = uVar13;
  }
  uVar8 = uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU);
  uVar4 = uVar12;
  if (uVar12 == 0x7fffffffffffffff || uVar11 == 0) {
    uVar4 = 0x7fffffffffffffff;
  }
  uVar14 = uVar6;
  if ((long)uVar6 <= (long)uVar8) {
    uVar14 = uVar8;
  }
  uVar8 = uVar6;
  if ((long)uVar4 <= (long)uVar6 || uVar9 == 0) {
    uVar8 = uVar4;
  }
  uVar4 = uVar1;
  if ((long)uVar1 <= (long)uVar14) {
    uVar4 = uVar14;
  }
  uVar14 = uVar1;
  if ((long)uVar8 <= (long)uVar1 || uVar10 == 0) {
    uVar14 = uVar8;
  }
  uVar8 = uVar2;
  if ((long)uVar2 <= (long)uVar4) {
    uVar8 = uVar4;
  }
  uVar4 = uVar2;
  if ((long)uVar14 <= (long)uVar2 || uVar13 == 0) {
    uVar4 = uVar14;
  }
  if ((long)uVar8 < 0x80000000) {
    uVar14 = uVar13;
    if (0x5a82 < (long)uVar8) {
      uVar8 = uVar8 << 0x10 | 0x2d40;
      uVar14 = uVar8 / 0x5a82;
      if (uVar8 < 0x5a82) {
        uVar3 = 0xffffffff80000001;
        if (-1 < (long)uVar4) {
          uVar3 = 0x7fffffff;
        }
      }
      else {
        uVar3 = -uVar4;
        if (-1 < (long)uVar4) {
          uVar3 = uVar4;
        }
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = (uVar8 / 0xb504 + uVar3 * 0x10000) / uVar14;
        }
        uVar3 = -uVar5;
        if (-1 < (long)uVar4) {
          uVar3 = uVar5;
        }
      }
      if (uVar3 == 0) {
        return false;
      }
      if (uVar8 < 0x5a82) {
        bVar7 = (long)uVar11 < 0;
        uVar11 = 0x7fffffff;
        if (bVar7) {
          uVar11 = 0xffffffff80000001;
        }
        bVar7 = (long)uVar9 < 0;
        uVar9 = 0x7fffffff;
        if (bVar7) {
          uVar9 = 0xffffffff80000001;
        }
        bVar7 = (long)uVar10 < 0;
        uVar10 = 0x7fffffff;
        if (bVar7) {
          uVar10 = 0xffffffff80000001;
        }
        uVar12 = 0x7fffffff;
      }
      else {
        uVar8 = uVar8 / 0xb504;
        bVar7 = -1 < (long)uVar11;
        uVar4 = 0;
        if (uVar14 != 0) {
          uVar4 = (uVar8 + uVar12 * 0x10000) / uVar14;
        }
        uVar12 = 0;
        if (uVar14 != 0) {
          uVar12 = (uVar8 + uVar6 * 0x10000) / uVar14;
        }
        uVar11 = -uVar4;
        if (bVar7) {
          uVar11 = uVar4;
        }
        bVar7 = -1 < (long)uVar9;
        uVar6 = 0;
        if (uVar14 != 0) {
          uVar6 = (uVar8 + uVar1 * 0x10000) / uVar14;
        }
        uVar9 = -uVar12;
        if (bVar7) {
          uVar9 = uVar12;
        }
        bVar7 = -1 < (long)uVar10;
        uVar10 = -uVar6;
        if (bVar7) {
          uVar10 = uVar6;
        }
        uVar12 = 0;
        if (uVar14 != 0) {
          uVar12 = (uVar8 + uVar2 * 0x10000) / uVar14;
        }
      }
      uVar14 = -uVar12;
      if (-1 < (long)uVar13) {
        uVar14 = uVar12;
      }
    }
    uVar13 = uVar14 * uVar11 - uVar10 * uVar9;
    uVar12 = -uVar13;
    if (-1 < (long)uVar13) {
      uVar12 = uVar13;
    }
    if (uVar12 != 0) {
      uVar13 = 0;
      if (uVar12 != 0) {
        uVar13 = (uVar9 * uVar9 + uVar11 * uVar11 + uVar10 * uVar10 + uVar14 * uVar14) / uVar12;
      }
      return (long)uVar13 < 0x33;
    }
    return false;
  }
  return false;
}

