
int FUN_00e03010(long param_1,uint param_2,long param_3,uint param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *__ptr;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  long lVar29;
  int iVar30;
  int aiStack_d0 [4];
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  uint local_90 [16];
  
  local_90[10] = 0;
  local_90[0xb] = 0;
  local_90[8] = 0;
  local_90[9] = 0;
  local_90[0xe] = 0;
  local_90[0xf] = 0;
  local_90[0xc] = 0;
  local_90[0xd] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[6] = 0;
  local_90[7] = 0;
  local_90[4] = 0;
  local_90[5] = 0;
  if ((int)param_4 < 1) {
    if (param_4 == 0) {
      return 0;
    }
  }
  else {
    lVar12 = 0;
    do {
      iVar27 = *(int *)(param_3 + lVar12 * 4);
      if (0xf < iVar27) {
        return 0;
      }
      lVar12 = lVar12 + 1;
      local_90[iVar27] = local_90[iVar27] + 1;
    } while (lVar12 < (int)param_4);
    if (local_90[0] == param_4) {
      return 0;
    }
  }
  aiStack_d0[1] = 0;
  if (2 < (int)local_90[1]) {
    return 0;
  }
  aiStack_d0[2] = local_90[1];
  if (4 < (int)local_90[2]) {
    return 0;
  }
  aiStack_d0[3] = local_90[1] + local_90[2];
  if (8 < (int)local_90[3]) {
    return 0;
  }
  local_c0 = aiStack_d0[3] + local_90[3];
  if (0x10 < (int)local_90[4]) {
    return 0;
  }
  local_bc = local_c0 + local_90[4];
  if (0x20 < (int)local_90[5]) {
    return 0;
  }
  local_b8 = local_bc + local_90[5];
  if (0x40 < (int)local_90[6]) {
    return 0;
  }
  local_b4 = local_b8 + local_90[6];
  if (0x80 < (int)local_90[7]) {
    return 0;
  }
  local_b0 = local_b4 + local_90[7];
  if (0x100 < (int)local_90[8]) {
    return 0;
  }
  local_ac = local_b0 + local_90[8];
  if (0x200 < (int)local_90[9]) {
    return 0;
  }
  local_a8 = local_ac + local_90[9];
  if (0x400 < (int)local_90[10]) {
    return 0;
  }
  local_a4 = local_a8 + local_90[10];
  if (0x800 < (int)local_90[0xb]) {
    return 0;
  }
  local_a0 = local_a4 + local_90[0xb];
  if (0x1000 < (int)local_90[0xc]) {
    return 0;
  }
  local_9c = local_a0 + local_90[0xc];
  if (0x2000 < (int)local_90[0xd]) {
    return 0;
  }
  local_98 = local_9c + local_90[0xd];
  if (0x4000 < (int)local_90[0xe]) {
    return 0;
  }
  iVar27 = local_98 + local_90[0xe];
  local_94 = iVar27;
  __ptr = (int *)WebPSafeMalloc((long)(int)param_4,4);
  if (__ptr == (int *)0x0) {
    return 0;
  }
  iVar26 = 1 << (ulong)(param_2 & 0x1f);
  if (0 < (int)param_4) {
    uVar13 = 0;
    do {
      iVar27 = *(int *)(param_3 + uVar13 * 4);
      if (0 < iVar27) {
        iVar25 = aiStack_d0[iVar27];
        aiStack_d0[iVar27] = iVar25 + 1;
        __ptr[iVar25] = (int)uVar13;
      }
      uVar13 = uVar13 + 1;
      iVar27 = local_94;
    } while (param_4 != uVar13);
  }
  if (iVar27 != 1) {
    lVar12 = 0;
    uVar14 = 0;
    if ((int)param_2 < 1) {
      iVar17 = 1;
      iVar25 = 1;
    }
    else {
      iVar20 = 2;
      iVar17 = 1;
      iVar25 = 1;
      lVar22 = 1;
      do {
        uVar23 = local_90[lVar22];
        iVar21 = iVar17 * 2;
        iVar17 = iVar21 - uVar23;
        if (iVar17 < 0) goto LAB_00e035dc;
        iVar25 = iVar21 + iVar25;
        if (0 < (int)uVar23) {
          lVar12 = (long)(int)lVar12;
          do {
            iVar21 = __ptr[lVar12];
            iVar10 = iVar26;
            do {
              iVar30 = iVar10 - iVar20;
              iVar10 = iVar10 - iVar20;
              *(uint *)(param_1 + (ulong)uVar14 * 4 + (long)iVar30 * 4) =
                   (uint)lVar22 & 0xff | iVar21 << 0x10;
              uVar9 = 1 << (ulong)((uint)lVar22 - 1 & 0x1f);
            } while (0 < iVar10);
            do {
              uVar28 = uVar9;
              uVar9 = uVar28 >> 1;
            } while ((uVar28 & uVar14) != 0);
            lVar12 = lVar12 + 1;
            uVar9 = uVar23 - 1;
            uVar14 = (uVar28 - 1 & uVar14) + uVar28;
            bVar1 = 0 < (int)uVar23;
            uVar23 = uVar9;
          } while (uVar9 != 0 && bVar1);
          local_90[lVar22] = uVar9;
        }
        iVar20 = iVar20 << 1;
        bVar1 = lVar22 < (int)param_2;
        lVar22 = lVar22 + 1;
      } while (bVar1);
      if (0xe < (int)param_2) goto LAB_00e035c0;
    }
    iVar21 = 2;
    uVar9 = 0xffffffff;
    uVar23 = iVar26 - 1;
    lVar24 = (long)(int)param_2;
    lVar22 = param_1;
    iVar20 = iVar26;
    do {
      lVar3 = lVar24 + 1;
      uVar28 = local_90[lVar3];
      iVar27 = iVar17 * 2;
      iVar17 = iVar27 - uVar28;
      if (iVar17 < 0) {
LAB_00e035dc:
        WebPSafeFree(__ptr);
        return 0;
      }
      iVar25 = iVar27 + iVar25;
      if (0 < (int)uVar28) {
        uVar11 = (int)lVar3 - param_2;
        uVar6 = uVar11 & 0xff;
        uVar8 = 1 << (ulong)((uint)lVar24 & 0x1f);
        iVar27 = 1 << (ulong)(uVar11 & 0x1f);
        lVar12 = (long)(int)lVar12;
        if ((int)(uint)lVar24 < 0xe) {
          do {
            uVar11 = uVar14 & uVar23;
            if (uVar11 != uVar9) {
              iVar10 = iVar27 - uVar28;
              lVar22 = lVar22 + (long)iVar20 * 4;
              lVar29 = lVar24;
              iVar20 = (int)lVar3;
              if (0 < iVar10) {
                do {
                  lVar4 = lVar29 + 1;
                  if (0xd < lVar4) {
                    iVar20 = (int)lVar29 + 2;
                    goto LAB_00e0347c;
                  }
                  iVar10 = iVar10 * 2 - local_90[lVar29 + 2];
                  lVar29 = lVar4;
                } while (0 < iVar10);
                iVar20 = (int)lVar4 + 1;
              }
LAB_00e0347c:
              puVar2 = (undefined1 *)(param_1 + (ulong)uVar11 * 4);
              *puVar2 = (char)iVar20;
              iVar20 = 1 << (ulong)(iVar20 - param_2 & 0x1f);
              iVar26 = iVar20 + iVar26;
              *(short *)(puVar2 + 2) =
                   (short)((uint)((int)lVar22 - (int)param_1) >> 2) - (short)uVar11;
              uVar9 = uVar11;
            }
            iVar10 = __ptr[lVar12];
            iVar30 = iVar20;
            do {
              iVar5 = -iVar21 + iVar30;
              iVar30 = iVar30 - iVar21;
              *(uint *)(lVar22 + (ulong)(uVar14 >> (ulong)(param_2 & 0x1f)) * 4 + (long)iVar5 * 4) =
                   uVar6 | iVar10 << 0x10;
              uVar28 = uVar8;
            } while (0 < iVar30);
            do {
              uVar11 = uVar28;
              uVar28 = uVar11 >> 1;
            } while ((uVar11 & uVar14) != 0);
            uVar7 = local_90[lVar3];
            lVar12 = lVar12 + 1;
            uVar14 = (uVar11 - 1 & uVar14) + uVar11;
            uVar28 = uVar7 - 1;
            local_90[lVar3] = uVar28;
          } while (uVar28 != 0 && 0 < (int)uVar7);
        }
        else {
          do {
            uVar28 = uVar14 & uVar23;
            if (uVar28 != uVar9) {
              lVar22 = lVar22 + (long)iVar20 * 4;
              puVar2 = (undefined1 *)(param_1 + (ulong)uVar28 * 4);
              iVar26 = iVar27 + iVar26;
              *puVar2 = (char)lVar3;
              *(short *)(puVar2 + 2) =
                   (short)((uint)((int)lVar22 - (int)param_1) >> 2) - (short)uVar28;
              uVar9 = uVar28;
              iVar20 = iVar27;
            }
            iVar10 = __ptr[lVar12];
            iVar30 = iVar20;
            do {
              iVar5 = -iVar21 + iVar30;
              iVar30 = iVar30 - iVar21;
              *(uint *)(lVar22 + (ulong)(uVar14 >> (ulong)(param_2 & 0x1f)) * 4 + (long)iVar5 * 4) =
                   uVar6 | iVar10 << 0x10;
              uVar28 = uVar8;
            } while (0 < iVar30);
            do {
              uVar11 = uVar28;
              uVar28 = uVar11 >> 1;
            } while ((uVar11 & uVar14) != 0);
            uVar28 = local_90[lVar3];
            lVar12 = lVar12 + 1;
            uVar14 = (uVar11 - 1 & uVar14) + uVar11;
            uVar11 = uVar28 - 1;
            local_90[lVar3] = uVar11;
          } while (uVar11 != 0 && 0 < (int)uVar28);
        }
      }
      iVar21 = iVar21 << 1;
      bVar1 = lVar24 < 0xe;
      lVar24 = lVar3;
      iVar27 = local_94;
    } while (bVar1);
LAB_00e035c0:
    WebPSafeFree(__ptr);
    if (iVar25 != iVar27 * 2 + -1) {
      return 0;
    }
    return iVar26;
  }
  uVar15 = (ulong)iVar26;
  uVar13 = 0xfffffffffffffffe;
  if (-2 < (long)~uVar15) {
    uVar13 = ~uVar15;
  }
  uVar13 = uVar13 + uVar15 + 2;
  iVar27 = *__ptr << 0x10;
  if ((7 < uVar13) && (uVar18 = uVar13 & 0xfffffffffffffff8, uVar18 != 0)) {
    puVar16 = (undefined8 *)(param_1 + uVar15 * 4 + -0x10);
    uVar19 = uVar18;
    do {
      puVar16[-1] = CONCAT44(iVar27,iVar27);
      puVar16[-2] = CONCAT44(iVar27,iVar27);
      puVar16[1] = CONCAT44(iVar27,iVar27);
      *puVar16 = CONCAT44(iVar27,iVar27);
      uVar19 = uVar19 - 8;
      puVar16 = puVar16 + -4;
    } while (uVar19 != 0);
    uVar15 = uVar15 - uVar18;
    if (uVar13 == uVar18) goto LAB_00e0339c;
  }
  do {
    *(int *)(param_1 + (uVar15 - 1) * 4) = iVar27;
    bVar1 = 1 < (long)uVar15;
    uVar15 = uVar15 - 1;
  } while (bVar1);
LAB_00e0339c:
  WebPSafeFree(__ptr);
  return iVar26;
}

