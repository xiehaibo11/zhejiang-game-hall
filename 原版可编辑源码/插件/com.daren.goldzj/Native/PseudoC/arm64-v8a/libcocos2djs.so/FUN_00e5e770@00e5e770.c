
/* WARNING: Type propagation algorithm not settling */

uint FUN_00e5e770(long *param_1,uint *param_2,char param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  ushort uVar15;
  bool bVar16;
  uint uVar17;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  ulong uVar31;
  uint uVar32;
  undefined1 *puVar33;
  uint uVar34;
  ulong uVar35;
  
  lVar24 = param_1[3];
  uVar25 = (ulong)*(byte *)(lVar24 + 7) & 0xfe | (ulong)*(byte *)(lVar24 + 6) << 8;
  if ((uint)uVar25 == 0) {
    return 0;
  }
  lVar27 = *param_1;
  uVar7 = *param_2;
  uVar14 = (uint)uVar25 >> 1;
  uVar17 = 0;
  lVar1 = lVar24 + 0xe;
  if (param_3 != '\0') {
    uVar7 = uVar7 + 1;
  }
  pbVar3 = (byte *)(*(long *)(lVar27 + 0x330) + *(long *)(lVar27 + 0x338));
  lVar2 = uVar25 + 2;
  uVar19 = uVar14;
  do {
    puVar4 = (undefined1 *)(lVar1 + ((ulong)(uVar19 + uVar17) & 0xfffffffe));
    puVar33 = puVar4 + lVar2;
    uVar26 = uVar19 + uVar17 >> 1;
    uVar21 = (uint)CONCAT11(*puVar33,puVar33[1]);
    uVar30 = (uint)CONCAT11(*puVar4,puVar4[1]);
    uVar34 = uVar26;
    uVar28 = uVar30;
    uVar22 = uVar7;
    if (uVar21 <= uVar7) {
      if (uVar7 <= uVar30) {
        pbVar5 = puVar33 + uVar25;
        pbVar18 = pbVar5 + uVar25;
        uVar17 = (int)(short)((ushort)*pbVar5 << 8) | (uint)pbVar5[1];
        uVar15 = CONCAT11(*pbVar18,pbVar18[1]);
        uVar29 = (ulong)uVar15;
        if (((uVar30 == 0xffff) && (uVar14 - 1 <= uVar26)) && (uVar21 == 0xffff)) {
          if (uVar15 != 0) {
            if (pbVar3 < pbVar18 + uVar29 + 2) {
              uVar17 = 1;
            }
            uVar19 = 0;
            if (pbVar18 + uVar29 + 2 <= pbVar3) {
              uVar19 = (uint)uVar15;
            }
            uVar29 = (ulong)uVar19;
          }
          bVar12 = *(byte *)(param_1 + 4);
        }
        else {
          bVar12 = *(byte *)(param_1 + 4);
        }
        uVar19 = (uint)uVar29;
        if ((bVar12 >> 1 & 1) != 0) {
          if (uVar19 == 0xffff) {
            uVar34 = uVar26 + 1;
          }
          if (uVar26 == 0) {
            uVar32 = 0;
            if (uVar34 == 1) goto LAB_00e5eadc;
            goto LAB_00e5ec0c;
          }
          uVar20 = uVar26 - 1;
          uVar29 = (ulong)(uVar20 * 2);
          uVar6 = (uint)CONCAT11(*(undefined1 *)(lVar1 + uVar29),((undefined1 *)(lVar1 + uVar29))[1]
                                );
          uVar32 = uVar26;
          if (uVar6 < uVar7) goto joined_r0x00e5ea50;
          uVar17 = uVar26 * 2 - 4;
          uVar21 = uVar26;
          goto LAB_00e5eb64;
        }
        if (uVar19 != 0xffff) goto joined_r0x00e5ec1c;
        break;
      }
      uVar17 = uVar26 + 1;
      uVar34 = uVar19;
    }
    uVar19 = uVar34;
  } while (uVar17 < uVar19);
  goto LAB_00e5e834;
  while( true ) {
    uVar29 = (ulong)uVar17;
    uVar32 = uVar21 - 1;
    uVar20 = uVar21 - 2;
    uVar17 = uVar17 - 2;
    uVar6 = (uint)CONCAT11(*(undefined1 *)(lVar1 + uVar29),((undefined1 *)(lVar1 + uVar29))[1]);
    uVar21 = uVar32;
    if (uVar6 < uVar7) break;
LAB_00e5eb64:
    uVar28 = uVar6;
    puVar4 = (undefined1 *)(lVar1 + lVar2 + uVar29);
    pbVar5 = puVar4 + uVar25;
    pbVar18 = pbVar5 + uVar25;
    uVar19 = (uint)CONCAT11(*pbVar18,pbVar18[1]);
    if (uVar19 != 0xffff) {
      uVar34 = uVar20;
    }
    if (uVar20 == 0) {
      uVar32 = 0;
      break;
    }
  }
  uVar21 = (uint)CONCAT11(*puVar4,puVar4[1]);
  uVar17 = (int)(short)((ushort)*pbVar5 << 8) | (uint)pbVar5[1];
joined_r0x00e5ea50:
  if (uVar34 == uVar26 + 1) {
LAB_00e5eadc:
    if (uVar32 != uVar26) {
      uVar28 = uVar30;
    }
    if (uVar26 + 1 < uVar14) {
      uVar29 = (ulong)(uVar26 + 1) * 2;
      uVar35 = uVar29 & 0xfffffffe;
      puVar4 = (undefined1 *)(lVar1 + uVar35) + lVar2;
      uVar17 = (uint)CONCAT11(*puVar4,puVar4[1]);
      if (uVar17 <= uVar7) {
        uVar31 = (ulong)(uVar26 + 1);
        puVar4 = (undefined1 *)(lVar1 + uVar35);
        uVar34 = uVar26;
        do {
          uVar21 = uVar17;
          puVar33 = puVar4;
          uVar29 = uVar29 + 2;
          pbVar5 = (byte *)(lVar1 + lVar2 + uVar25 + uVar35);
          pbVar18 = pbVar5 + uVar25;
          uVar30 = (uint)(uVar31 + 1);
          uVar19 = (uint)CONCAT11(*pbVar18,pbVar18[1]);
          if (uVar19 != 0xffff) {
            uVar34 = (uint)uVar31;
          }
          if (uVar14 <= uVar30) {
            uVar8 = *puVar33;
            uVar9 = puVar33[1];
            bVar12 = *pbVar5;
            bVar13 = pbVar5[1];
            uVar30 = (uint)uVar31 + 1;
            goto LAB_00e5ecbc;
          }
          uVar35 = uVar29 & 0xfffffffe;
          pbVar18 = (undefined1 *)(lVar1 + uVar35) + lVar2;
          uVar31 = uVar31 + 1;
          puVar4 = (undefined1 *)(lVar1 + uVar35);
          uVar17 = (uint)CONCAT11(*pbVar18,pbVar18[1]);
        } while (CONCAT11(*pbVar18,pbVar18[1]) <= uVar7);
        uVar8 = *puVar33;
        uVar9 = puVar33[1];
        bVar12 = *pbVar5;
        bVar13 = pbVar5[1];
LAB_00e5ecbc:
        uVar28 = (uint)CONCAT11(uVar8,uVar9);
        uVar17 = (int)(short)((ushort)bVar12 << 8) | (uint)bVar13;
        bVar16 = uVar34 != uVar26;
        uVar26 = uVar30 - 1;
        if (bVar16) {
          bVar16 = uVar34 != uVar26;
          uVar26 = uVar34;
          if (bVar16) goto LAB_00e5ece8;
          goto joined_r0x00e5ec1c;
        }
      }
      uVar19 = 0;
      goto joined_r0x00e5e9f4;
    }
  }
  else {
LAB_00e5ec0c:
    uVar26 = uVar34;
    if (uVar34 != uVar32) {
LAB_00e5ece8:
      puVar4 = (undefined1 *)(lVar1 + (ulong)(uVar34 << 1));
      puVar33 = puVar4 + lVar2;
      pbVar5 = puVar33 + uVar25;
      pbVar18 = pbVar5 + uVar25;
      uVar21 = (uint)CONCAT11(*puVar33,puVar33[1]);
      uVar17 = (int)(short)((ushort)*pbVar5 << 8) | (uint)pbVar5[1];
      uVar19 = (uint)CONCAT11(*pbVar18,pbVar18[1]);
      uVar28 = (uint)CONCAT11(*puVar4,puVar4[1]);
      uVar26 = uVar34;
    }
joined_r0x00e5ec1c:
    if (uVar19 == 0) {
      uVar21 = uVar17 + uVar7;
      uVar19 = uVar21 & 0xffff;
      if ((param_3 != '\0') && (*(uint *)(lVar27 + 0x20) <= uVar19)) {
        if (((int)uVar21 < 0) && (-1 < (int)(uVar28 + uVar17))) {
          uVar19 = 0;
          uVar22 = -uVar17;
        }
        else {
          uVar19 = 0;
          uVar22 = 0x10000 - uVar17;
          if ((int)(uVar28 + uVar17) < 0x10000 || 0xffff < (int)uVar21) {
            uVar22 = uVar7;
          }
        }
      }
      goto joined_r0x00e5e9f4;
    }
    pbVar18 = pbVar18 + (uVar19 + (uVar7 - uVar21) * 2);
    if (((param_3 == '\0') || (pbVar18 <= pbVar3)) && (CONCAT11(*pbVar18,pbVar18[1]) != 0)) {
      uVar19 = CONCAT11(*pbVar18,pbVar18[1]) + uVar17 & 0xffff;
      if (*(uint *)(lVar27 + 0x20) <= uVar19) {
        uVar19 = 0;
      }
      goto joined_r0x00e5e9f4;
    }
  }
LAB_00e5e834:
  uVar19 = 0;
joined_r0x00e5e9f4:
  if (param_3 == '\0') {
    return uVar19;
  }
  if ((uVar28 < uVar22) && (uVar26 = uVar26 + 1, uVar26 == uVar14)) {
    return 0;
  }
  uVar17 = *(uint *)(param_1 + 6);
  if (uVar26 < uVar17) {
    uVar7 = uVar17 * 2;
    uVar25 = (ulong)uVar26;
    uVar29 = uVar25 << 1;
    do {
      puVar4 = (undefined1 *)(lVar24 + 0xe + (uVar29 & 0xfffffffe));
      uVar8 = *puVar4;
      uVar9 = puVar4[1];
      puVar4 = puVar4 + (uVar7 + 2);
      *(uint *)((long)param_1 + 0x3c) = (uint)CONCAT11(uVar8,uVar9);
      uVar10 = *puVar4;
      uVar11 = puVar4[1];
      pbVar5 = puVar4 + uVar7;
      *(uint *)(param_1 + 7) = (uint)CONCAT11(uVar10,uVar11);
      pbVar18 = pbVar5 + uVar7;
      *(uint *)(param_1 + 8) = (int)(short)((ushort)*pbVar5 << 8) | (uint)pbVar5[1];
      uVar15 = CONCAT11(*pbVar18,pbVar18[1]);
      uVar23 = (undefined4)uVar25;
      if (((CONCAT11(uVar8,uVar9) == 0xffff) && (uVar17 - 1 <= uVar25)) &&
         (CONCAT11(uVar10,uVar11) == 0xffff)) {
        if (uVar15 == 0) {
LAB_00e5ea8c:
          param_1[9] = 0;
          *(undefined4 *)((long)param_1 + 0x34) = uVar23;
          *(uint *)(param_1 + 5) = uVar22;
        }
        else {
          if (pbVar18 + (ulong)uVar15 + 2 <= pbVar3) goto LAB_00e5e908;
          *(undefined4 *)(param_1 + 8) = 1;
          param_1[9] = 0;
          *(undefined4 *)((long)param_1 + 0x34) = uVar23;
          *(uint *)(param_1 + 5) = uVar22;
        }
joined_r0x00e5ebd0:
        if (uVar19 == 0) {
          *(uint *)(param_1 + 5) = uVar22;
          FUN_00e5ed9c(param_1);
          uVar19 = *(uint *)((long)param_1 + 0x2c);
          if (uVar19 == 0) {
            return 0;
          }
          uVar22 = *(uint *)(param_1 + 5);
        }
        else {
          *(uint *)((long)param_1 + 0x2c) = uVar19;
        }
        goto LAB_00e5eaa4;
      }
LAB_00e5e908:
      if (uVar15 != 0xffff) {
        if (uVar15 == 0) goto LAB_00e5ea8c;
        param_1[9] = (long)(pbVar18 + uVar15);
        *(undefined4 *)((long)param_1 + 0x34) = uVar23;
        *(uint *)(param_1 + 5) = uVar22;
        goto joined_r0x00e5ebd0;
      }
      uVar25 = uVar25 + 1;
      uVar29 = uVar29 + 2;
    } while (uVar25 < uVar17);
  }
  if (uVar19 == 0) {
    return 0;
  }
LAB_00e5eaa4:
  *param_2 = uVar22;
  return uVar19;
}

