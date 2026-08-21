
void FUN_010ead50(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  long *plVar18;
  uint uVar19;
  undefined1 *puVar20;
  byte *pbVar22;
  byte *pbVar23;
  uint uVar24;
  byte *pbVar25;
  uint uVar26;
  uint *puVar27;
  undefined1 *puVar21;
  
  plVar18 = (long *)param_1[5];
  puVar21 = (undefined1 *)*plVar18;
  lVar10 = plVar18[1];
  *(undefined4 *)(param_1 + 0x27) = param_2;
  *(undefined4 *)((long)param_1 + 0x13c) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  if (lVar10 == 0) {
    iVar8 = (*(code *)plVar18[3])(param_1);
    if (iVar8 == 0) {
      return;
    }
    puVar21 = (undefined1 *)*plVar18;
    lVar10 = plVar18[1];
  }
  puVar20 = puVar21 + 1;
  uVar5 = *puVar21;
  lVar10 = lVar10 + -1;
  if (lVar10 == 0) {
    iVar8 = (*(code *)plVar18[3])(param_1);
    if (iVar8 == 0) {
      return;
    }
    puVar20 = (undefined1 *)*plVar18;
    lVar10 = plVar18[1];
  }
  pbVar22 = puVar20 + 1;
  uVar6 = *puVar20;
  lVar10 = lVar10 + -1;
  if (lVar10 == 0) {
    iVar8 = (*(code *)plVar18[3])(param_1);
    if (iVar8 == 0) {
      return;
    }
    pbVar22 = (byte *)*plVar18;
    lVar10 = plVar18[1];
  }
  pbVar23 = pbVar22 + 1;
  lVar10 = lVar10 + -1;
  *(uint *)(param_1 + 0x25) = (uint)*pbVar22;
  if (lVar10 == 0) {
    iVar8 = (*(code *)plVar18[3])(param_1);
    if (iVar8 == 0) {
      return;
    }
    pbVar23 = (byte *)*plVar18;
    lVar10 = plVar18[1];
  }
  pbVar22 = pbVar23 + 1;
  lVar10 = lVar10 + -1;
  iVar8 = (uint)*pbVar23 << 8;
  *(int *)((long)param_1 + 0x34) = iVar8;
  if (lVar10 == 0) {
    iVar8 = (*(code *)plVar18[3])(param_1);
    if (iVar8 == 0) {
      return;
    }
    pbVar22 = (byte *)*plVar18;
    lVar10 = plVar18[1];
    iVar8 = *(int *)((long)param_1 + 0x34);
  }
  pbVar23 = pbVar22 + 1;
  lVar10 = lVar10 + -1;
  *(uint *)((long)param_1 + 0x34) = iVar8 + (uint)*pbVar22;
  if (lVar10 == 0) {
    iVar8 = (*(code *)plVar18[3])(param_1);
    if (iVar8 == 0) {
      return;
    }
    pbVar23 = (byte *)*plVar18;
    lVar10 = plVar18[1];
  }
  pbVar22 = pbVar23 + 1;
  lVar10 = lVar10 + -1;
  iVar8 = (uint)*pbVar23 << 8;
  *(int *)(param_1 + 6) = iVar8;
  if (lVar10 == 0) {
    iVar8 = (*(code *)plVar18[3])(param_1);
    if (iVar8 == 0) {
      return;
    }
    pbVar22 = (byte *)*plVar18;
    lVar10 = plVar18[1];
    iVar8 = (int)param_1[6];
  }
  pbVar23 = pbVar22 + 1;
  lVar10 = lVar10 + -1;
  *(uint *)(param_1 + 6) = iVar8 + (uint)*pbVar22;
  if (lVar10 == 0) {
    iVar8 = (*(code *)plVar18[3])(param_1);
    if (iVar8 == 0) {
      return;
    }
    pbVar23 = (byte *)*plVar18;
    lVar10 = plVar18[1];
  }
  lVar12 = *param_1;
  *(uint *)(param_1 + 7) = (uint)*pbVar23;
  *(undefined4 *)(lVar12 + 0x2c) = *(undefined4 *)((long)param_1 + 0x23c);
  *(int *)(lVar12 + 0x30) = (int)param_1[6];
  *(undefined4 *)(lVar12 + 0x34) = *(undefined4 *)((long)param_1 + 0x34);
  lVar9 = param_1[7];
  *(undefined4 *)(lVar12 + 0x28) = 0x66;
  *(int *)(lVar12 + 0x38) = (int)lVar9;
  (**(code **)(lVar12 + 8))(param_1,1);
  if (*(int *)(param_1[0x4d] + 0x1c) != 0) {
    puVar11 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar11 + 5) = 0x3d;
    (*(code *)*puVar11)(param_1);
  }
  if (((*(int *)((long)param_1 + 0x34) == 0) || ((int)param_1[6] == 0)) ||
     (iVar8 = (int)param_1[7], iVar8 < 1)) {
    puVar11 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar11 + 5) = 0x21;
    (*(code *)*puVar11)(param_1);
    iVar8 = (int)param_1[7];
  }
  if ((ulong)CONCAT11(uVar5,uVar6) - 8 != (long)(iVar8 * 3)) {
    puVar11 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar11 + 5) = 0xc;
    (*(code *)*puVar11)(param_1);
  }
  if (param_1[0x26] == 0) {
    lVar9 = (**(code **)param_1[1])(param_1,1,(long)(int)param_1[7] * 0x60);
    param_1[0x26] = lVar9;
  }
  pbVar23 = pbVar23 + 1;
  lVar10 = lVar10 + -1;
  if (0 < (int)param_1[7]) {
    uVar19 = 0;
    uVar26 = 0xfffffffe;
    uVar24 = 1;
    do {
      if (lVar10 == 0) {
        iVar8 = (*(code *)plVar18[3])(param_1);
        if (iVar8 == 0) {
          return;
        }
        pbVar23 = (byte *)*plVar18;
        lVar10 = plVar18[1];
      }
      pbVar22 = pbVar23 + 1;
      puVar27 = (uint *)param_1[0x26];
      lVar10 = lVar10 + -1;
      puVar13 = puVar27;
      if (0 < (int)uVar19) {
        iVar8 = 0;
        lVar9 = ((ulong)uVar26 + 1) - (ulong)(uVar24 & 1);
        uVar1 = (ulong)(uVar19 - 2) + 1;
LAB_010eb018:
        if (*puVar13 != (uint)*pbVar23) goto code_r0x010eb024;
        puVar13 = puVar27 + 0x18;
        uVar14 = *puVar27;
        if ((int)uVar19 < 2) goto LAB_010eb0d8;
        if (uVar1 < 2) {
          uVar15 = 1;
          goto LAB_010eb0bc;
        }
        uVar2 = ~(uVar19 - 2) & 1;
        lVar12 = uVar1 - uVar2;
        if (lVar12 == 0) {
          uVar15 = 1;
          goto LAB_010eb0bc;
        }
        puVar13 = puVar13 + lVar12 * 0x18;
        uVar15 = (int)lVar12 + 1;
        puVar17 = puVar27 + 0x30;
        uVar16 = uVar14;
        do {
          lVar9 = lVar9 + -2;
          uVar3 = puVar17[-0x18];
          if ((int)puVar17[-0x18] <= (int)uVar14) {
            uVar3 = uVar14;
          }
          uVar4 = *puVar17;
          if ((int)*puVar17 <= (int)uVar16) {
            uVar4 = uVar16;
          }
          puVar17 = puVar17 + 0x30;
          uVar14 = uVar3;
          uVar16 = uVar4;
        } while (lVar9 != 0);
        if ((int)uVar3 <= (int)uVar4) {
          uVar14 = uVar4;
        }
        if (uVar2 != 0) {
LAB_010eb0bc:
          do {
            uVar15 = uVar15 + 1;
            uVar2 = *puVar13;
            if ((int)*puVar13 <= (int)uVar14) {
              uVar2 = uVar14;
            }
            puVar13 = puVar13 + 0x18;
            uVar14 = uVar2;
          } while (uVar19 != uVar15);
        }
        puVar13 = puVar27 + 0x30 + (ulong)uVar26 * 0x18;
LAB_010eb0d8:
        *puVar13 = uVar14 + 1;
        puVar13[1] = uVar19;
        goto joined_r0x010eb0e4;
      }
LAB_010eb038:
      *puVar13 = (uint)*pbVar23;
      puVar13[1] = uVar19;
joined_r0x010eb0e4:
      if (lVar10 == 0) {
        iVar8 = (*(code *)plVar18[3])(param_1);
        if (iVar8 == 0) {
          return;
        }
        pbVar22 = (byte *)*plVar18;
        lVar10 = plVar18[1];
      }
      pbVar25 = pbVar22 + 1;
      bVar7 = *pbVar22;
      lVar10 = lVar10 + -1;
      puVar13[2] = (uint)(bVar7 >> 4);
      puVar13[3] = bVar7 & 0xf;
      if (lVar10 == 0) {
        iVar8 = (*(code *)plVar18[3])(param_1);
        if (iVar8 == 0) {
          return;
        }
        pbVar25 = (byte *)*plVar18;
        lVar10 = plVar18[1];
      }
      pbVar23 = pbVar25 + 1;
      puVar13[4] = (uint)*pbVar25;
      lVar9 = *param_1;
      *(uint *)(lVar9 + 0x2c) = *puVar13;
      *(uint *)(lVar9 + 0x30) = puVar13[2];
      *(uint *)(lVar9 + 0x34) = puVar13[3];
      uVar14 = puVar13[4];
      *(undefined4 *)(lVar9 + 0x28) = 0x67;
      *(uint *)(lVar9 + 0x38) = uVar14;
      (**(code **)(lVar9 + 8))(param_1,1);
      uVar19 = uVar19 + 1;
      lVar10 = lVar10 + -1;
      uVar26 = uVar26 + 1;
      uVar24 = uVar24 + 1;
    } while ((int)uVar19 < (int)param_1[7]);
  }
  *(undefined4 *)(param_1[0x4d] + 0x1c) = 1;
  *plVar18 = (long)pbVar23;
  plVar18[1] = lVar10;
  return;
code_r0x010eb024:
  iVar8 = iVar8 + 1;
  puVar13 = puVar13 + 0x18;
  if ((int)uVar19 <= iVar8) goto LAB_010eb038;
  goto LAB_010eb018;
}

