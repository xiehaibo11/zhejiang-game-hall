
undefined8 vorbis_dsp_synthesis(long *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  
  plVar7 = param_1 + 1;
  lVar10 = *param_1;
  lVar9 = *(long *)(lVar10 + 0x30);
  oggpack_readinit(plVar7,*param_2);
  lVar2 = oggpack_read(plVar7,1);
  if (lVar2 != 0) {
    return 0xffffff79;
  }
  iVar1 = *(int *)(lVar9 + 0x10) + -1;
  iVar8 = 0;
  if (iVar1 != 0 && *(int *)(lVar9 + 0x10) != 0) {
    iVar8 = 0x20 - (int)LZCOUNT(iVar1);
  }
  uVar3 = oggpack_read(plVar7,iVar8);
  iVar8 = (int)uVar3;
  if ((iVar8 == -1) || (*(int *)(lVar9 + 0x10) <= iVar8)) {
    return 0xffffff78;
  }
  lVar2 = param_1[0xb];
  param_1[10] = lVar2;
  uVar3 = (ulong)*(byte *)(*(long *)(lVar9 + 0x28) +
                          (-(uVar3 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar3 & 0xffffffff) << 1));
  param_1[0xb] = uVar3;
  if (0 < *(int *)(lVar10 + 4)) {
    mdct_shift_right(*(undefined8 *)(lVar9 + lVar2 * 8),*(undefined8 *)param_1[7],
                     *(undefined8 *)param_1[8]);
    if (1 < *(int *)(lVar10 + 4)) {
      lVar2 = 1;
      do {
        mdct_shift_right(*(undefined8 *)(lVar9 + param_1[10] * 8),
                         *(undefined8 *)(param_1[7] + lVar2 * 8),
                         *(undefined8 *)(param_1[8] + lVar2 * 8));
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)(lVar10 + 4));
    }
    uVar3 = param_1[0xb];
  }
  if (uVar3 != 0) {
    oggpack_read(plVar7,1);
    iVar1 = oggpack_read(plVar7,1);
    if (iVar1 == -1) {
      return 0xffffff78;
    }
  }
  if (param_3 != 0) {
    mapping_inverse(param_1,*(long *)(lVar9 + 0x30) +
                            (ulong)*(byte *)(*(long *)(lVar9 + 0x28) + (long)iVar8 * 2 + 1) * 0x28);
    lVar2 = param_1[9];
    *(undefined4 *)(param_1 + 9) = 0;
    if ((int)lVar2 == -1) {
      iVar8 = 0;
    }
    else {
      uVar4 = *(ulong *)(lVar9 + param_1[10] * 8);
      uVar5 = *(ulong *)(lVar9 + param_1[0xb] * 8);
      uVar3 = uVar4 + 3;
      if (-1 < (long)uVar4) {
        uVar3 = uVar4;
      }
      uVar4 = uVar5 + 3;
      if (-1 < (long)uVar5) {
        uVar4 = uVar5;
      }
      iVar8 = (int)(uVar4 >> 2) + (int)(uVar3 >> 2);
    }
    *(int *)((long)param_1 + 0x4c) = iVar8;
  }
  if (param_1[0xd] == -1) {
    lVar2 = param_2[5] + -3;
  }
  else {
    lVar2 = param_2[5] + -3;
    if (param_1[0xd] + 1 == lVar2) {
      param_1[0xd] = lVar2;
      if (param_1[0xe] == -1) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(long *)(lVar9 + param_1[10] * 8);
        lVar6 = *(long *)(lVar9 + param_1[0xb] * 8);
        lVar2 = lVar10 + 3;
        if (-1 < lVar10) {
          lVar2 = lVar10;
        }
        lVar10 = lVar6 + 3;
        if (-1 < lVar6) {
          lVar10 = lVar6;
        }
        lVar10 = param_1[0xe] + (lVar2 >> 2) + (lVar10 >> 2);
      }
      goto LAB_00e8ab34;
    }
  }
  lVar10 = 0;
  param_1[0xd] = lVar2;
  param_1[0xe] = -1;
  param_1[0xc] = -1;
LAB_00e8ab34:
  param_1[0xe] = lVar10;
  if (param_1[0xc] == -1) {
    lVar2 = param_2[4];
    if (lVar2 != -1) {
      param_1[0xc] = lVar2;
      if (lVar10 - lVar2 != 0 && lVar2 <= lVar10) {
        iVar8 = (int)(lVar10 - lVar2);
        if (param_2[3] != 0) {
          *(int *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) - iVar8;
          return 0;
        }
        iVar8 = (int)param_1[9] + iVar8;
        iVar1 = *(int *)((long)param_1 + 0x4c);
        if (iVar8 <= *(int *)((long)param_1 + 0x4c)) {
          iVar1 = iVar8;
        }
        *(int *)(param_1 + 9) = iVar1;
        return 0;
      }
    }
  }
  else {
    lVar10 = *(long *)(lVar9 + param_1[10] * 8);
    lVar9 = *(long *)(lVar9 + param_1[0xb] * 8);
    lVar2 = lVar10 + 3;
    if (-1 < lVar10) {
      lVar2 = lVar10;
    }
    lVar10 = lVar9 + 3;
    if (-1 < lVar9) {
      lVar10 = lVar9;
    }
    lVar2 = param_1[0xc] + (lVar2 >> 2) + (lVar10 >> 2);
    param_1[0xc] = lVar2;
    lVar9 = param_2[4];
    if ((lVar9 != -1) && (lVar2 != lVar9)) {
      if ((lVar9 < lVar2) && ((lVar2 - lVar9 != 0 && (param_2[3] != 0)))) {
        *(int *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) - (int)(lVar2 - lVar9);
      }
      param_1[0xc] = lVar9;
    }
  }
  return 0;
}

