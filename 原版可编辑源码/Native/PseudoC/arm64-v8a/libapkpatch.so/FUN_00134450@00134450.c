
void FUN_00134450(int param_1,ushort *param_2,uint param_3,long *param_4,uint *param_5,
                 undefined *param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  long lVar6;
  byte bVar7;
  bool bVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ushort *puVar20;
  int iVar21;
  uint uVar22;
  short sVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ushort uVar30;
  undefined1 uVar31;
  uint uVar32;
  ushort auStack_b0 [16];
  ushort local_90 [20];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  local_90[4] = 0;
  local_90[5] = 0;
  local_90[6] = 0;
  local_90[7] = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_90[0xc] = 0;
  local_90[0xd] = 0;
  local_90[0xe] = 0;
  local_90[0xf] = 0;
  local_90[8] = 0;
  local_90[9] = 0;
  local_90[10] = 0;
  local_90[0xb] = 0;
  if (param_3 != 0) {
    uVar14 = (ulong)param_3;
    puVar20 = param_2;
    do {
      uVar14 = uVar14 - 1;
      local_90[*puVar20] = local_90[*puVar20] + 1;
      puVar20 = puVar20 + 1;
    } while (uVar14 != 0);
  }
  uVar14 = 0xf;
  do {
    uVar13 = (uint)uVar14;
    if (local_90[uVar14] != 0) {
      uVar22 = uVar13;
      if (*param_5 <= uVar13) {
        uVar22 = *param_5;
      }
      if (1 < uVar13) {
        uVar17 = 1;
        goto LAB_0013451c;
      }
      uVar18 = 1;
      goto LAB_0013453c;
    }
    uVar14 = (ulong)(uVar13 - 1);
  } while (uVar13 - 1 != 0);
  puVar11 = (undefined4 *)*param_4;
  uVar19 = 1;
  *param_4 = (long)(puVar11 + 1);
  *puVar11 = 0x140;
  puVar11 = (undefined4 *)*param_4;
  *param_4 = (long)(puVar11 + 1);
  *puVar11 = 0x140;
LAB_001344f4:
  uVar9 = 0;
  *param_5 = uVar19;
  goto LAB_00134624;
  while (uVar17 = uVar17 + 1, uVar18 = uVar14, uVar14 != uVar17) {
LAB_0013451c:
    uVar18 = uVar17;
    if (local_90[uVar17] != 0) break;
  }
LAB_0013453c:
  iVar21 = 1;
  lVar24 = 2;
  uVar19 = (uint)uVar18;
  if ((uint)uVar18 <= uVar22) {
    uVar19 = uVar22;
  }
  do {
    iVar21 = iVar21 * 2 - (uint)*(ushort *)((long)local_90 + lVar24);
    if (iVar21 < 0) {
      uVar9 = 0xffffffff;
      goto LAB_00134624;
    }
    lVar24 = lVar24 + 2;
  } while (lVar24 != 0x20);
  if ((iVar21 < 1) || ((uVar9 = 0xffffffff, param_1 != 0 && (uVar13 == 1)))) {
    lVar24 = 0;
    sVar23 = 0;
    auStack_b0[1] = 0;
    do {
      sVar23 = *(short *)(((ulong)local_90 | 2) + lVar24) + sVar23;
      *(short *)((long)auStack_b0 + lVar24 + 4) = sVar23;
      lVar24 = lVar24 + 2;
    } while (lVar24 != 0x1c);
    if (param_3 != 0) {
      uVar14 = 0;
      do {
        uVar17 = (ulong)param_2[uVar14];
        if (uVar17 != 0) {
          uVar30 = auStack_b0[uVar17];
          auStack_b0[uVar17] = uVar30 + 1;
          *(short *)(param_6 + (ulong)uVar30 * 2) = (short)uVar14;
        }
        uVar14 = uVar14 + 1;
      } while (param_3 != uVar14);
    }
    if (param_1 == 0) {
      bVar7 = 0;
      uVar22 = 0x14;
      bVar8 = false;
      puVar25 = param_6;
      puVar26 = param_6;
    }
    else if (param_1 == 1) {
      uVar9 = 1;
      bVar7 = 1;
      if (9 < uVar19) goto LAB_00134624;
      bVar8 = false;
      uVar22 = 0x101;
      puVar25 = &DAT_0011eb3e;
      puVar26 = &DAT_0011eb00;
    }
    else {
      bVar8 = param_1 == 2;
      uVar22 = 0;
      puVar25 = &UNK_0011ebbc;
      puVar26 = &UNK_0011eb7c;
      if (bVar8) {
        bVar7 = 0;
        if (9 < uVar19) {
LAB_00134870:
          uVar9 = 1;
          goto LAB_00134624;
        }
      }
      else {
        bVar7 = 0;
      }
    }
    lVar24 = *param_4;
    uVar28 = 1 << (ulong)(uVar19 & 0x1f);
    uVar14 = 0;
    uVar27 = 0;
    uVar5 = uVar28 - 1;
    uVar29 = 0xffffffff;
    uVar15 = uVar19;
    uVar10 = 0;
    do {
      uVar3 = 1 << (ulong)(uVar15 & 0x1f);
      do {
        uVar30 = *(ushort *)(param_6 + uVar14 * 2);
        uVar15 = (uint)uVar18;
        if (uVar30 + 1 < uVar22) {
          uVar31 = 0;
        }
        else if (uVar22 < uVar30 || uVar22 == uVar30) {
          uVar17 = (ulong)(uVar30 - uVar22);
          uVar31 = puVar25[uVar17 * 2];
          uVar30 = *(ushort *)(puVar26 + uVar17 * 2);
        }
        else {
          uVar30 = 0;
          uVar31 = 0x60;
        }
        iVar21 = -1 << (ulong)(uVar15 - uVar10 & 0x1f);
        uVar16 = uVar3;
        do {
          uVar32 = (uVar27 >> (ulong)(uVar10 & 0x1f)) + iVar21 + uVar16;
          uVar16 = uVar16 + iVar21;
          puVar1 = (undefined1 *)(lVar24 + (ulong)uVar32 * 4);
          *puVar1 = uVar31;
          uVar4 = (undefined1)(uVar15 - uVar10);
          puVar1[1] = uVar4;
          *(ushort *)(puVar1 + 2) = uVar30;
        } while (uVar16 != 0);
        uVar16 = 1 << (ulong)(uVar15 - 1 & 0x1f);
        do {
          uVar32 = uVar16;
          uVar16 = uVar32 >> 1;
        } while ((uVar32 & uVar27) != 0);
        uVar30 = local_90[uVar18 & 0xffffffff];
        uVar16 = uVar32 - 1 & uVar27;
        uVar27 = 0;
        if (uVar32 != 0) {
          uVar27 = uVar16 + uVar32;
        }
        uVar14 = (ulong)((int)uVar14 + 1);
        local_90[uVar18 & 0xffffffff] = uVar30 - 1;
        if ((ushort)(uVar30 - 1) == 0) {
          if (uVar15 == uVar13) {
            if (uVar27 != 0) {
              puVar1 = (undefined1 *)(lVar24 + (ulong)uVar27 * 4);
              *puVar1 = 0x40;
              puVar1[1] = uVar4;
              *(undefined2 *)(puVar1 + 2) = 0;
            }
            *param_4 = *param_4 + (ulong)uVar28 * 4;
            goto LAB_001344f4;
          }
          uVar18 = (ulong)param_2[*(ushort *)(param_6 + uVar14 * 2)];
        }
        uVar16 = (uint)uVar18;
      } while ((uVar16 <= uVar19) || (uVar32 = uVar27 & uVar5, uVar32 == uVar29));
      uVar2 = uVar19;
      if (uVar10 != 0) {
        uVar2 = uVar10;
      }
      uVar15 = uVar16 - uVar2;
      iVar21 = 1 << (ulong)(uVar15 & 0x1f);
      if (uVar16 < uVar13) {
        uVar15 = uVar13 - uVar2;
        uVar17 = uVar18 & 0xffffffff;
        do {
          puVar20 = local_90 + uVar17;
          if ((int)(iVar21 - (uint)*puVar20) < 1) {
            uVar15 = (int)uVar17 - uVar2;
            break;
          }
          uVar17 = uVar17 + 1;
          iVar21 = (iVar21 - (uint)*puVar20) * 2;
        } while ((uint)uVar17 < uVar13);
        iVar21 = 1 << (ulong)(uVar15 & 0x1f);
      }
      uVar28 = iVar21 + uVar28;
      if (((bool)(bVar7 & 0x354 < uVar28)) || ((bool)(bVar8 & 0x250 < uVar28))) goto LAB_00134870;
      lVar12 = *param_4;
      lVar24 = lVar24 + (ulong)uVar3 * 4;
      uVar29 = uVar27 & uVar5;
      puVar1 = (undefined1 *)(lVar12 + (ulong)uVar32 * 4);
      *puVar1 = (char)uVar15;
      puVar1[1] = (char)uVar19;
      *(short *)(puVar1 + 2) = (short)((uint)((int)lVar24 - (int)lVar12) >> 2);
      uVar10 = uVar2;
    } while( true );
  }
LAB_00134624:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

