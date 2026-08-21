
ulong FUN_00e658a8(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  uVar4 = *(uint *)(param_1 + 0x141c);
  if ((uVar4 >> 2 & 1) == 0) {
    if (((*(byte *)(param_2 + 0x18) & 1) == 0) || ((*(byte *)(param_3 + 0x18) & 1) == 0)) {
      uVar5 = 0x3b;
      uVar7 = 0x3d;
    }
    else {
      uVar5 = 0x31;
      uVar7 = 0x37;
    }
    if (param_5 != 1) {
      uVar7 = uVar5;
    }
  }
  else {
    uVar7 = 0x40;
  }
  lVar13 = *(long *)(param_3 + 8);
  lVar14 = *(long *)(param_2 + 8);
  uVar5 = FUN_00e65a74(param_1,param_5,lVar13 - lVar14);
  lVar2 = lVar14 + lVar13;
  if (lVar2 < 0) {
    lVar2 = lVar2 + 1;
  }
  uVar6 = uVar5;
  if ((long)uVar5 < 0) {
    uVar6 = uVar5 + 1;
  }
  uVar8 = (param_4 + (lVar2 >> 1)) - ((long)uVar6 >> 1);
  uVar12 = uVar8 & 0x3f;
  uVar6 = 0;
  if ((uVar12 != 0) &&
     (uVar1 = (int)uVar8 + (int)uVar5, uVar9 = (ulong)uVar1 & 0x3f, (uVar1 & 0x3f) != 0)) {
    uVar10 = 0x40 - uVar12;
    if ((long)uVar7 < (long)uVar5) {
      if ((0x3f < uVar7) ||
         ((((uVar6 = 0, 0x40 - uVar9 < uVar7 && (uVar9 < uVar7)) && (uVar12 < uVar7)) &&
          (uVar10 < uVar7)))) {
        uVar12 = uVar5 & 0x3f;
        if (uVar12 < 0x20) {
          uVar6 = 0;
          if ((uVar10 <= uVar12) || (uVar9 <= uVar12)) goto joined_r0x00e65a38;
        }
        else {
          uVar12 = 0x40 - uVar7;
        }
        uVar11 = uVar10 - uVar12;
        if ((long)(uVar7 - uVar10) <= (long)uVar11) {
          uVar11 = -(uVar7 - uVar10);
        }
        uVar6 = uVar7 - uVar9;
        uVar7 = -uVar11;
        if (-1 < (long)uVar11) {
          uVar7 = uVar11;
        }
        if ((long)(uVar9 - uVar12) <= (long)uVar6) {
          uVar6 = -(uVar9 - uVar12);
        }
        uVar12 = -uVar6;
        if (-1 < (long)uVar6) {
          uVar12 = uVar6;
        }
        if ((long)uVar7 <= (long)uVar12) {
          uVar6 = uVar11;
        }
      }
    }
    else if ((long)uVar9 < (long)uVar5) {
      uVar6 = uVar10;
      if (uVar9 < uVar10) {
        uVar6 = -uVar9;
      }
    }
    else {
      uVar6 = 0;
    }
  }
joined_r0x00e65a38:
  if ((uVar4 >> 2 & 1) == 0) {
    if ((long)uVar6 < 0xf) {
      if ((long)uVar6 < -0xd) {
        uVar6 = 0xfffffffffffffff2;
      }
    }
    else {
      uVar6 = 0xe;
    }
  }
  lVar2 = uVar6 + uVar8;
  lVar3 = lVar2 + uVar5;
  if (lVar13 <= lVar14) {
    lVar3 = lVar2;
    lVar2 = lVar2 + uVar5;
  }
  *(long *)(param_2 + 0x10) = lVar2;
  *(long *)(param_3 + 0x10) = lVar3;
  return uVar6;
}

