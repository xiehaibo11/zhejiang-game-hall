
undefined4 FUN_00de4010(uint param_1,ulong param_2,long param_3,uint *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  undefined4 uVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  if ((int)param_2 < 1) {
    return 2;
  }
  if ((int)param_1 < 1) {
    return 2;
  }
  if (param_4 == (uint *)0x0) {
    return 2;
  }
  if (param_3 != 0) {
    if (*(int *)(param_3 + 8) != 0) {
      uVar22 = *(uint *)(param_3 + 0x18);
      if ((int)uVar22 < 1) {
        return 2;
      }
      uVar15 = *(uint *)(param_3 + 0x14);
      if ((int)uVar15 < 1) {
        return 2;
      }
      if ((int)(*(uint *)(param_3 + 0x10) | *(uint *)(param_3 + 0xc)) < 0) {
        return 2;
      }
      if ((int)param_1 < (int)((*(uint *)(param_3 + 0xc) & 0xfffffffe) + uVar15)) {
        return 2;
      }
      if ((int)param_2 < (int)((*(uint *)(param_3 + 0x10) & 0xfffffffe) + uVar22)) {
        return 2;
      }
      param_2 = (ulong)uVar22;
      param_1 = uVar15;
    }
    if (*(int *)(param_3 + 0x1c) != 0) {
      local_64 = *(uint *)(param_3 + 0x20);
      local_68 = *(uint *)(param_3 + 0x24);
      iVar20 = FUN_00de3d78(param_1,param_2,&local_64,&local_68);
      if (iVar20 == 0) {
        return 2;
      }
      param_2 = (ulong)local_68;
      param_1 = local_64;
    }
  }
  uVar22 = (uint)param_2;
  param_4[1] = param_1;
  param_4[2] = uVar22;
  if ((int)uVar22 < 1) {
    return 2;
  }
  if ((int)param_1 < 1) {
    return 2;
  }
  uVar15 = *param_4;
  if (0xc < uVar15) {
    return 2;
  }
  if ((param_4[3] == 0) && (*(long *)(param_4 + 0x1c) == 0)) {
    iVar20 = *(int *)(&DAT_0196f9b8 + (ulong)uVar15 * 4);
    lVar25 = (long)(int)param_1;
    lVar23 = iVar20 * lVar25 * (long)(int)uVar22;
    if (uVar15 < 0xb) {
      lVar27 = 0;
      lVar29 = 0;
      param_1 = 0;
      local_6c = 0;
    }
    else {
      iVar8 = param_1 + 2;
      iVar9 = uVar22 + 2;
      if (-1 < (int)(param_1 + 1)) {
        iVar8 = param_1 + 1;
      }
      local_6c = iVar8 >> 1;
      if (-1 < (int)(uVar22 + 1)) {
        iVar9 = uVar22 + 1;
      }
      lVar29 = (long)(int)local_6c * (long)(iVar9 >> 1);
      if (uVar15 == 0xc) {
        lVar27 = (long)(int)param_1 * (long)(int)uVar22;
      }
      else {
        lVar27 = 0;
        param_1 = 0;
      }
    }
    lVar21 = WebPSafeMalloc(lVar27 + lVar23 + lVar29 * 2,1);
    if (lVar21 == 0) {
      return 1;
    }
    *(long *)(param_4 + 0x1c) = lVar21;
    *(long *)(param_4 + 4) = lVar21;
    uVar22 = (uint)(iVar20 * lVar25);
    if (uVar15 < 0xb) {
      param_4[6] = uVar22;
      *(long *)(param_4 + 8) = lVar23;
    }
    else {
      param_4[0xc] = uVar22;
      lVar21 = lVar21 + lVar23;
      *(long *)(param_4 + 0x10) = lVar23;
      *(long *)(param_4 + 0x12) = lVar29;
      param_4[0xd] = local_6c;
      param_4[0xe] = local_6c;
      *(long *)(param_4 + 6) = lVar21;
      *(long *)(param_4 + 8) = lVar21 + lVar29;
      *(long *)(param_4 + 0x14) = lVar29;
      if (uVar15 == 0xc) {
        *(long *)(param_4 + 10) = lVar21 + lVar29 * 2;
      }
      *(long *)(param_4 + 0x16) = lVar27;
      param_4[0xf] = param_1;
    }
  }
  uVar22 = *param_4;
  if (0xc < uVar22) {
    return 2;
  }
  uVar15 = param_4[1];
  lVar25 = (long)(int)uVar15;
  uVar14 = param_4[2];
  lVar23 = (long)(int)uVar14;
  if (uVar22 < 0xb) {
    uVar16 = param_4[6];
    uVar28 = (ulong)uVar16;
    uVar24 = *(ulong *)(param_4 + 8);
    uVar14 = -uVar16;
    if (-1 < (int)uVar16) {
      uVar14 = uVar16;
    }
    lVar27 = *(long *)(param_4 + 4);
    bVar1 = uVar24 < (ulong)(lVar25 + (long)(int)uVar14 * (lVar23 + -1));
    bVar4 = (int)uVar14 < (int)(*(int *)(&DAT_0196f9b8 + (ulong)uVar22 * 4) * uVar15);
    uVar26 = 0;
    if (lVar27 == 0 || (bVar4 || bVar1)) {
      uVar26 = 2;
    }
    if (param_3 == 0) {
      return uVar26;
    }
    if (lVar27 == 0 || (bVar4 || bVar1)) {
      return uVar26;
    }
  }
  else {
    uVar10 = param_4[0xc];
    uVar12 = param_4[0xd];
    uVar16 = uVar15 + 2;
    uVar11 = param_4[0xe];
    uVar13 = param_4[0xf];
    iVar20 = uVar14 + 2;
    if (-1 < (int)(uVar15 + 1)) {
      uVar16 = uVar15 + 1;
    }
    if (-1 < (int)(uVar14 + 1)) {
      iVar20 = uVar14 + 1;
    }
    uVar14 = -uVar10;
    if (-1 < (int)uVar10) {
      uVar14 = uVar10;
    }
    uVar10 = -uVar12;
    if (-1 < (int)uVar12) {
      uVar10 = uVar12;
    }
    lVar29 = (long)((ulong)uVar16 << 0x20) >> 0x21;
    iVar20 = (iVar20 >> 1) + -1;
    uVar12 = -uVar11;
    if (-1 < (int)uVar11) {
      uVar12 = uVar11;
    }
    uVar11 = -uVar13;
    if (-1 < (int)uVar13) {
      uVar11 = uVar13;
    }
    bVar1 = *(ulong *)(param_4 + 0x10) < (ulong)(lVar25 + (long)(int)uVar14 * (lVar23 + -1));
    bVar4 = *(ulong *)(param_4 + 0x12) < (ulong)(lVar29 + (long)(int)uVar10 * (long)iVar20);
    lVar27 = *(long *)(param_4 + 4);
    uVar28 = *(ulong *)(param_4 + 6);
    bVar2 = *(ulong *)(param_4 + 0x14) < (ulong)(lVar29 + (long)(int)uVar12 * (long)iVar20);
    uVar24 = *(ulong *)(param_4 + 8);
    bVar5 = (int)uVar14 < (int)uVar15;
    bVar6 = (int)uVar10 < (int)uVar16 >> 1;
    bVar7 = (int)uVar12 < (int)uVar16 >> 1;
    bVar17 = lVar27 == 0;
    bVar18 = uVar28 == 0;
    bVar19 = uVar24 == 0;
    if (uVar22 == 0xc) {
      bVar3 = *(ulong *)(param_4 + 0x16) < (ulong)(lVar25 + (long)(int)uVar11 * (lVar23 + -1));
      uVar26 = 0;
      if ((((int)uVar11 < (int)uVar15 ||
           (bVar19 ||
           (bVar18 || (bVar17 || (bVar7 || (bVar6 || (bVar5 || ((bVar1 || bVar4) || bVar2)))))))) ||
          bVar3) || *(long *)(param_4 + 10) == 0) {
        uVar26 = 2;
      }
      if (param_3 == 0) {
        return uVar26;
      }
      if ((((int)uVar11 < (int)uVar15 ||
           (bVar19 ||
           (bVar18 || (bVar17 || (bVar7 || (bVar6 || (bVar5 || ((bVar1 || bVar4) || bVar2)))))))) ||
          bVar3) || *(long *)(param_4 + 10) == 0) {
        return uVar26;
      }
    }
    else {
      uVar26 = 0;
      if (bVar19 || (bVar18 ||
                    (bVar17 || (bVar7 || (bVar6 || (bVar5 || ((bVar1 || bVar4) || bVar2))))))) {
        uVar26 = 2;
      }
      if (param_3 == 0 ||
          (bVar19 ||
          (bVar18 || (bVar17 || (bVar7 || (bVar6 || (bVar5 || ((bVar1 || bVar4) || bVar2)))))))) {
        return uVar26;
      }
    }
  }
  if (*(int *)(param_3 + 0x30) == 0) {
    return 0;
  }
  lVar23 = lVar23 + -1;
  if (10 < uVar22) {
    uVar22 = param_4[0xe];
    lVar25 = (lVar23 << 0x20) >> 0x21;
    *(long *)(param_4 + 4) = lVar27 + (int)param_4[0xc] * lVar23;
    *(long *)(param_4 + 6) = *(long *)(param_4 + 6) + (int)param_4[0xd] * lVar25;
    param_4[0xc] = -param_4[0xc];
    param_4[0xd] = -param_4[0xd];
    param_4[0xe] = -uVar22;
    *(ulong *)(param_4 + 8) = uVar24 + (int)uVar22 * lVar25;
    if (*(long *)(param_4 + 10) != 0) {
      *(long *)(param_4 + 10) =
           *(long *)(param_4 + 10) + (long)(int)param_4[0xf] * (long)(int)lVar23;
      param_4[0xf] = -param_4[0xf];
      return 0;
    }
    return 0;
  }
  *(long *)(param_4 + 4) = lVar27 + (long)(int)uVar28 * (long)(int)lVar23;
  param_4[6] = -(int)uVar28;
  return 0;
}

