
ulong FUN_00e5b788(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  bool bVar15;
  ushort *puVar16;
  ulong uVar17;
  uint uVar18;
  undefined1 *puVar19;
  ushort uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  undefined1 *puVar25;
  ulong uVar26;
  undefined8 uVar27;
  byte *local_68;
  
  if (100 < param_5) {
    return 8;
  }
  lVar21 = *(long *)(param_1 + 0x40);
  if (lVar21 != 0) {
    lVar24 = *(long *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x48);
    pbVar3 = *(byte **)(param_1 + 0x50);
    puVar19 = (undefined1 *)(lVar2 + lVar24 + 3);
    do {
      uVar18 = (uint)CONCAT11(puVar19[-3],puVar19[-2]);
      if ((uVar18 <= param_2) && (param_2 <= CONCAT11(puVar19[-1],*puVar19))) {
        uVar26 = (ulong)(byte)puVar19[1] << 0x18 | (ulong)(byte)puVar19[2] << 0x10 |
                 (ulong)(byte)puVar19[3] << 8 | (ulong)(byte)puVar19[4];
        if ((ulong)((long)pbVar3 - (lVar2 + lVar24)) < uVar26) {
          return 8;
        }
        puVar19 = (undefined1 *)(lVar2 + lVar24 + uVar26);
        pbVar1 = puVar19 + 8;
        if ((pbVar1 <= pbVar3) && (CONCAT11(*puVar19,puVar19[1]) - 1 < 0x13)) {
          uVar4 = puVar19[2];
          bVar5 = puVar19[3];
          bVar6 = puVar19[4];
          bVar7 = puVar19[5];
          bVar8 = puVar19[6];
          bVar9 = puVar19[7];
          switch((uint)CONCAT11(*puVar19,puVar19[1])) {
          case 1:
            pbVar1 = pbVar1 + (param_2 - uVar18) * 4;
            if (pbVar1 + 8 <= pbVar3) {
              uVar22 = (ulong)*pbVar1 << 0x18 | (ulong)pbVar1[1] << 0x10 | (ulong)pbVar1[2] << 8 |
                       (ulong)pbVar1[3];
              uVar23 = (ulong)pbVar1[4] << 0x18 | (ulong)pbVar1[5] << 0x10 | (ulong)pbVar1[6] << 8 |
                       (ulong)pbVar1[7];
              if (uVar22 != uVar23) goto LAB_00e5bbc8;
            }
            break;
          case 2:
            if ((puVar19 + 0x14 <= pbVar3) && (puVar19 + 0x11 <= pbVar3)) {
              puVar16 = *(ushort **)(param_1 + 0x18);
              bVar10 = *pbVar1;
              bVar11 = puVar19[9];
              bVar12 = puVar19[10];
              bVar13 = puVar19[0xb];
              *puVar16 = (ushort)(byte)puVar19[0xc];
              puVar16[1] = (ushort)(byte)puVar19[0xd];
              puVar16[2] = (short)(char)puVar19[0xe];
              puVar16[3] = (short)(char)puVar19[0xf];
              puVar16[4] = (ushort)(byte)puVar19[0x10];
              if (puVar19 + 0x14 <= pbVar3) {
                puVar16[5] = (short)(char)puVar19[0x11];
                uVar23 = (ulong)bVar10 << 0x18 | (ulong)bVar11 << 0x10 | (ulong)bVar12 << 8 |
                         (ulong)bVar13;
                puVar16[6] = (short)(char)puVar19[0x12];
                uVar22 = uVar23 * (param_2 - uVar18);
                puVar16[7] = (ushort)(byte)puVar19[0x13];
                *(undefined1 *)(param_1 + 0x20) = 1;
                uVar23 = uVar22 + uVar23;
                lVar21 = uVar23 - uVar22;
                bVar15 = lVar21 == 0;
                if (uVar22 <= uVar23) goto LAB_00e5bbd0;
              }
            }
            break;
          case 3:
            pbVar1 = pbVar1 + (param_2 - uVar18) * 2;
            if (pbVar1 + 4 <= pbVar3) {
              uVar22 = (ulong)CONCAT11(*pbVar1,pbVar1[1]);
              uVar23 = (ulong)CONCAT11(pbVar1[2],pbVar1[3]);
              if (uVar22 != uVar23) goto LAB_00e5bbc8;
            }
            break;
          case 4:
            if ((((puVar19 + 0xc <= pbVar3) && (puVar19 + 0x10 <= pbVar3)) &&
                (uVar17 = (ulong)*pbVar1 << 0x18 | (ulong)(byte)puVar19[9] << 0x10 |
                          (ulong)(byte)puVar19[10] << 8 | (ulong)(byte)puVar19[0xb],
                uVar17 <= ((long)pbVar3 - (long)(puVar19 + 0xc) >> 2) - 1U)) && (uVar17 != 0)) {
              uVar22 = 0;
              puVar19 = (undefined1 *)(lVar2 + lVar24 + uVar26 + 0x13);
              goto LAB_00e5bb78;
            }
            break;
          case 5:
          case 0x13:
            if ((puVar19 + 0x18 <= pbVar3) && (puVar19 + 0x11 <= pbVar3)) {
              puVar16 = *(ushort **)(param_1 + 0x18);
              bVar10 = *pbVar1;
              bVar11 = puVar19[9];
              bVar12 = puVar19[10];
              bVar13 = puVar19[0xb];
              *puVar16 = (ushort)(byte)puVar19[0xc];
              puVar16[1] = (ushort)(byte)puVar19[0xd];
              puVar16[2] = (short)(char)puVar19[0xe];
              puVar16[3] = (short)(char)puVar19[0xf];
              puVar16[4] = (ushort)(byte)puVar19[0x10];
              if (puVar19 + 0x14 <= pbVar3) {
                puVar25 = puVar19 + 0x18;
                puVar16[5] = (short)(char)puVar19[0x11];
                puVar16[6] = (short)(char)puVar19[0x12];
                puVar16[7] = (ushort)(byte)puVar19[0x13];
                *(undefined1 *)(param_1 + 0x20) = 1;
                uVar26 = (ulong)(byte)puVar19[0x14] << 0x18 | (ulong)(byte)puVar19[0x15] << 0x10 |
                         (ulong)(byte)puVar19[0x16] << 8 | (ulong)(byte)puVar19[0x17];
                if ((uVar26 <= (ulong)((long)pbVar3 - (long)puVar25 >> 1)) && (uVar26 != 0)) {
                  uVar22 = 0;
                  uVar17 = 0;
                  uVar23 = (ulong)bVar10 << 0x18 | (ulong)bVar11 << 0x10 | (ulong)bVar12 << 8 |
                           (ulong)bVar13;
                  goto LAB_00e5b9a0;
                }
              }
            }
          }
        }
        break;
      }
      lVar21 = lVar21 + -1;
      puVar19 = puVar19 + 8;
    } while (lVar21 != 0);
  }
  goto switchD_00e5b8cc_caseD_6;
  while( true ) {
    uVar17 = uVar17 + 1;
    uVar22 = uVar22 + uVar23;
    puVar25 = puVar25 + 2;
    if (uVar26 <= uVar17) break;
LAB_00e5b9a0:
    if (CONCAT11(*puVar25,puVar25[1]) == param_2) {
      uVar23 = uVar23 + uVar22;
      lVar21 = uVar23 - uVar22;
      bVar15 = lVar21 == 0;
      if (uVar22 <= uVar23) goto LAB_00e5bbd0;
      break;
    }
  }
  goto switchD_00e5b8cc_caseD_6;
  while( true ) {
    uVar22 = uVar22 + 1;
    puVar19 = puVar19 + 4;
    if (uVar17 <= uVar22) break;
LAB_00e5bb78:
    if (CONCAT11(puVar19[-7],puVar19[-6]) == param_2) {
      uVar22 = (ulong)CONCAT11(puVar19[-5],puVar19[-4]);
      uVar23 = (ulong)CONCAT11(puVar19[-1],*puVar19);
LAB_00e5bbc8:
      lVar21 = uVar23 - uVar22;
      bVar15 = lVar21 == 0;
      if (uVar23 < uVar22) break;
LAB_00e5bbd0:
      if ((bVar15) ||
         (uVar26 = (ulong)bVar6 << 0x18 | (ulong)bVar7 << 0x10 | (ulong)bVar8 << 8 | (ulong)bVar9,
         *(ulong *)(param_1 + 0x30) < uVar23 + uVar26)) {
        return 6;
      }
      uVar27 = *(undefined8 *)(param_1 + 8);
      uVar26 = FUN_00e1bb5c(uVar27,uVar22 + uVar26 + *(long *)(param_1 + 0x28));
      if ((int)uVar26 != 0) {
        return uVar26;
      }
      uVar26 = FUN_00e1d5c4(uVar27,lVar21,&local_68);
      if ((int)uVar26 != 0) {
        return uVar26;
      }
      uVar18 = (uint)CONCAT11(uVar4,bVar5);
      if (uVar18 < 0x13) {
        uVar14 = 1 << (ulong)(bVar5 & 0x1f);
        if ((uVar14 & 0x20106) == 0) {
          if ((uVar14 & 0x402c0) == 0) goto joined_r0x00e5bd3c;
          if (4 < lVar21) {
            puVar16 = *(ushort **)(param_1 + 0x18);
            *puVar16 = (ushort)*local_68;
            puVar16[1] = (ushort)local_68[1];
            puVar16[2] = (short)(char)local_68[2];
            puVar16[3] = (short)(char)local_68[3];
            puVar16[4] = (ushort)local_68[4];
            if (7 < lVar21) {
              puVar16[5] = (short)(char)local_68[5];
              puVar16[6] = (short)(char)local_68[6];
              uVar20 = (ushort)local_68[7];
              goto LAB_00e5bd14;
            }
          }
        }
        else if (4 < lVar21) {
          puVar16 = *(ushort **)(param_1 + 0x18);
          uVar20 = 0;
          *puVar16 = (ushort)*local_68;
          puVar16[1] = (ushort)local_68[1];
          puVar16[2] = (short)(char)local_68[2];
          puVar16[3] = (short)(char)local_68[3];
          bVar5 = local_68[4];
          puVar16[5] = 0;
          puVar16[6] = 0;
          puVar16[4] = (ushort)bVar5;
LAB_00e5bd14:
          puVar16[7] = uVar20;
          *(undefined1 *)(param_1 + 0x20) = 1;
          goto joined_r0x00e5bd3c;
        }
        uVar18 = 6;
      }
      else {
joined_r0x00e5bd3c:
        if (uVar18 - 1 < 0x13) {
                    /* WARNING: Could not recover jumptable at 0x00e5bd64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar26 = (*(code *)((ulong)(byte)"F(??:F(AD???????"[uVar18 - 1] * 4 + 0xe5bcc8))();
          return uVar26;
        }
        uVar18 = 8;
      }
      FUN_00e1d86c(uVar27,&local_68);
      return (ulong)uVar18;
    }
  }
switchD_00e5b8cc_caseD_6:
  uVar18 = 0x9d;
  if (param_5 != 0) {
    uVar18 = 0x15;
  }
  return (ulong)uVar18;
}

