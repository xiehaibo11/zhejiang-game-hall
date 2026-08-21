
void FUN_00da09a4(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  if (0 < param_5) {
    uVar3 = *(uint *)(param_1 + 0x88);
    uVar7 = (ulong)uVar3;
    if (uVar3 != 0) {
      uVar2 = uVar3 & 0x1f;
      lVar8 = uVar7 - uVar2;
      do {
        lVar9 = (ulong)param_3 * 8;
        puVar12 = *(undefined1 **)(*param_2 + lVar9);
        puVar11 = *(undefined1 **)(param_2[1] + lVar9);
        puVar10 = *(undefined1 **)(param_2[2] + lVar9);
        puVar13 = (undefined1 *)*param_4;
        param_3 = param_3 + 1;
        if ((uVar3 < 0x20) || (lVar8 == 0)) {
LAB_00da0ab0:
          lVar9 = 0;
LAB_00da0ab4:
          lVar15 = uVar7 - lVar9;
          puVar10 = puVar10 + lVar9;
          puVar11 = puVar11 + lVar9;
          puVar12 = puVar12 + lVar9;
          do {
            lVar15 = lVar15 + -1;
            *puVar13 = *puVar12;
            puVar13[1] = *puVar11;
            puVar13[2] = *puVar10;
            puVar13 = puVar13 + 3;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          } while (lVar15 != 0);
        }
        else {
          puVar14 = puVar13 + uVar7 * 3;
          if ((puVar13 < puVar12 + uVar7 && puVar12 < puVar14) ||
             ((puVar13 < puVar11 + uVar7 && puVar11 < puVar14 ||
              (puVar13 < puVar10 + uVar7 && puVar10 < puVar14)))) goto LAB_00da0ab0;
          puVar4 = (undefined8 *)(puVar10 + 0x10);
          puVar5 = (undefined8 *)(puVar12 + 0x10);
          puVar6 = (undefined8 *)(puVar11 + 0x10);
          lVar9 = lVar8;
          puVar14 = puVar13;
          do {
            uVar17 = puVar5[-1];
            uVar16 = puVar5[-2];
            uVar23 = puVar5[1];
            uVar22 = *puVar5;
            uVar19 = puVar6[-1];
            uVar18 = puVar6[-2];
            uVar25 = puVar6[1];
            uVar24 = *puVar6;
            uVar21 = puVar4[-1];
            uVar20 = puVar4[-2];
            uVar27 = puVar4[1];
            uVar26 = *puVar4;
            lVar9 = lVar9 + -0x20;
            puVar5 = puVar5 + 4;
            *puVar14 = (char)uVar16;
            puVar14[1] = (char)uVar18;
            puVar14[2] = (char)uVar20;
            puVar14[3] = (char)((ulong)uVar16 >> 8);
            puVar14[4] = (char)((ulong)uVar18 >> 8);
            puVar14[5] = (char)((ulong)uVar20 >> 8);
            puVar14[6] = (char)((ulong)uVar16 >> 0x10);
            puVar14[7] = (char)((ulong)uVar18 >> 0x10);
            puVar14[8] = (char)((ulong)uVar20 >> 0x10);
            puVar14[9] = (char)((ulong)uVar16 >> 0x18);
            puVar14[10] = (char)((ulong)uVar18 >> 0x18);
            puVar14[0xb] = (char)((ulong)uVar20 >> 0x18);
            puVar14[0xc] = (char)((ulong)uVar16 >> 0x20);
            puVar14[0xd] = (char)((ulong)uVar18 >> 0x20);
            puVar14[0xe] = (char)((ulong)uVar20 >> 0x20);
            puVar14[0xf] = (char)((ulong)uVar16 >> 0x28);
            puVar14[0x10] = (char)((ulong)uVar18 >> 0x28);
            puVar14[0x11] = (char)((ulong)uVar20 >> 0x28);
            puVar14[0x12] = (char)((ulong)uVar16 >> 0x30);
            puVar14[0x13] = (char)((ulong)uVar18 >> 0x30);
            puVar14[0x14] = (char)((ulong)uVar20 >> 0x30);
            puVar14[0x15] = (char)((ulong)uVar16 >> 0x38);
            puVar14[0x16] = (char)((ulong)uVar18 >> 0x38);
            puVar14[0x17] = (char)((ulong)uVar20 >> 0x38);
            puVar14[0x18] = (char)uVar17;
            puVar14[0x19] = (char)uVar19;
            puVar14[0x1a] = (char)uVar21;
            puVar14[0x1b] = (char)((ulong)uVar17 >> 8);
            puVar14[0x1c] = (char)((ulong)uVar19 >> 8);
            puVar14[0x1d] = (char)((ulong)uVar21 >> 8);
            puVar14[0x1e] = (char)((ulong)uVar17 >> 0x10);
            puVar14[0x1f] = (char)((ulong)uVar19 >> 0x10);
            puVar14[0x20] = (char)((ulong)uVar21 >> 0x10);
            puVar14[0x21] = (char)((ulong)uVar17 >> 0x18);
            puVar14[0x22] = (char)((ulong)uVar19 >> 0x18);
            puVar14[0x23] = (char)((ulong)uVar21 >> 0x18);
            puVar14[0x24] = (char)((ulong)uVar17 >> 0x20);
            puVar14[0x25] = (char)((ulong)uVar19 >> 0x20);
            puVar14[0x26] = (char)((ulong)uVar21 >> 0x20);
            puVar14[0x27] = (char)((ulong)uVar17 >> 0x28);
            puVar14[0x28] = (char)((ulong)uVar19 >> 0x28);
            puVar14[0x29] = (char)((ulong)uVar21 >> 0x28);
            puVar14[0x2a] = (char)((ulong)uVar17 >> 0x30);
            puVar14[0x2b] = (char)((ulong)uVar19 >> 0x30);
            puVar14[0x2c] = (char)((ulong)uVar21 >> 0x30);
            puVar14[0x2d] = (char)((ulong)uVar17 >> 0x38);
            puVar14[0x2e] = (char)((ulong)uVar19 >> 0x38);
            puVar14[0x2f] = (char)((ulong)uVar21 >> 0x38);
            puVar4 = puVar4 + 4;
            puVar14[0x30] = (char)uVar22;
            puVar14[0x31] = (char)uVar24;
            puVar14[0x32] = (char)uVar26;
            puVar14[0x33] = (char)((ulong)uVar22 >> 8);
            puVar14[0x34] = (char)((ulong)uVar24 >> 8);
            puVar14[0x35] = (char)((ulong)uVar26 >> 8);
            puVar14[0x36] = (char)((ulong)uVar22 >> 0x10);
            puVar14[0x37] = (char)((ulong)uVar24 >> 0x10);
            puVar14[0x38] = (char)((ulong)uVar26 >> 0x10);
            puVar14[0x39] = (char)((ulong)uVar22 >> 0x18);
            puVar14[0x3a] = (char)((ulong)uVar24 >> 0x18);
            puVar14[0x3b] = (char)((ulong)uVar26 >> 0x18);
            puVar14[0x3c] = (char)((ulong)uVar22 >> 0x20);
            puVar14[0x3d] = (char)((ulong)uVar24 >> 0x20);
            puVar14[0x3e] = (char)((ulong)uVar26 >> 0x20);
            puVar14[0x3f] = (char)((ulong)uVar22 >> 0x28);
            puVar14[0x40] = (char)((ulong)uVar24 >> 0x28);
            puVar14[0x41] = (char)((ulong)uVar26 >> 0x28);
            puVar14[0x42] = (char)((ulong)uVar22 >> 0x30);
            puVar14[0x43] = (char)((ulong)uVar24 >> 0x30);
            puVar14[0x44] = (char)((ulong)uVar26 >> 0x30);
            puVar14[0x45] = (char)((ulong)uVar22 >> 0x38);
            puVar14[0x46] = (char)((ulong)uVar24 >> 0x38);
            puVar14[0x47] = (char)((ulong)uVar26 >> 0x38);
            puVar14[0x48] = (char)uVar23;
            puVar14[0x49] = (char)uVar25;
            puVar14[0x4a] = (char)uVar27;
            puVar14[0x4b] = (char)((ulong)uVar23 >> 8);
            puVar14[0x4c] = (char)((ulong)uVar25 >> 8);
            puVar14[0x4d] = (char)((ulong)uVar27 >> 8);
            puVar14[0x4e] = (char)((ulong)uVar23 >> 0x10);
            puVar14[0x4f] = (char)((ulong)uVar25 >> 0x10);
            puVar14[0x50] = (char)((ulong)uVar27 >> 0x10);
            puVar14[0x51] = (char)((ulong)uVar23 >> 0x18);
            puVar14[0x52] = (char)((ulong)uVar25 >> 0x18);
            puVar14[0x53] = (char)((ulong)uVar27 >> 0x18);
            puVar14[0x54] = (char)((ulong)uVar23 >> 0x20);
            puVar14[0x55] = (char)((ulong)uVar25 >> 0x20);
            puVar14[0x56] = (char)((ulong)uVar27 >> 0x20);
            puVar14[0x57] = (char)((ulong)uVar23 >> 0x28);
            puVar14[0x58] = (char)((ulong)uVar25 >> 0x28);
            puVar14[0x59] = (char)((ulong)uVar27 >> 0x28);
            puVar14[0x5a] = (char)((ulong)uVar23 >> 0x30);
            puVar14[0x5b] = (char)((ulong)uVar25 >> 0x30);
            puVar14[0x5c] = (char)((ulong)uVar27 >> 0x30);
            puVar14[0x5d] = (char)((ulong)uVar23 >> 0x38);
            puVar14[0x5e] = (char)((ulong)uVar25 >> 0x38);
            puVar14[0x5f] = (char)((ulong)uVar27 >> 0x38);
            puVar6 = puVar6 + 4;
            puVar14 = puVar14 + 0x60;
          } while (lVar9 != 0);
          lVar9 = lVar8;
          puVar13 = puVar13 + uVar7 * 3 + (ulong)uVar2 * -3;
          if (uVar2 != 0) goto LAB_00da0ab4;
        }
        param_4 = param_4 + 1;
        bVar1 = 1 < param_5;
        param_5 = param_5 + -1;
      } while (bVar1);
    }
  }
  return;
}

