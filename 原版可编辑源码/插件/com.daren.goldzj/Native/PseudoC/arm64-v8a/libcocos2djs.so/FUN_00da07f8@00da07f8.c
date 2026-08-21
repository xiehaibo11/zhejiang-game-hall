
void FUN_00da07f8(long param_1,long *param_2,uint param_3,ulong *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (0 < param_5) {
    uVar3 = *(uint *)(param_1 + 0x88);
    uVar4 = (ulong)uVar3;
    if (uVar3 != 0) {
      uVar2 = uVar3 & 0x1f;
      lVar5 = uVar4 - uVar2;
      do {
        puVar7 = (undefined1 *)*param_4;
        puVar6 = *(undefined1 **)(*param_2 + (ulong)param_3 * 8);
        if (((uVar3 < 0x20) || (lVar5 == 0)) ||
           ((puVar7 < puVar6 + uVar4 && (puVar6 < puVar7 + uVar4 * 3)))) {
          puVar9 = puVar7;
          lVar11 = 0;
LAB_00da08a8:
          lVar8 = uVar4 - lVar11;
          puVar9 = puVar9 + 2;
          puVar7 = puVar6 + lVar11;
          do {
            uVar12 = *puVar7;
            lVar8 = lVar8 + -1;
            *puVar9 = uVar12;
            puVar9[-1] = uVar12;
            puVar9[-2] = uVar12;
            puVar9 = puVar9 + 3;
            puVar7 = puVar7 + 1;
          } while (lVar8 != 0);
        }
        else {
          puVar9 = puVar7 + uVar4 * 3 + (ulong)uVar2 * -3;
          puVar10 = (undefined8 *)(puVar6 + 0x10);
          lVar11 = lVar5;
          do {
            uVar14 = puVar10[-1];
            uVar13 = puVar10[-2];
            uVar16 = puVar10[1];
            uVar15 = *puVar10;
            lVar11 = lVar11 + -0x20;
            puVar10 = puVar10 + 4;
            uVar12 = (undefined1)uVar13;
            *puVar7 = uVar12;
            puVar7[1] = uVar12;
            puVar7[2] = uVar12;
            uVar12 = (undefined1)((ulong)uVar13 >> 8);
            puVar7[3] = uVar12;
            puVar7[4] = uVar12;
            puVar7[5] = uVar12;
            uVar12 = (undefined1)((ulong)uVar13 >> 0x10);
            puVar7[6] = uVar12;
            puVar7[7] = uVar12;
            puVar7[8] = uVar12;
            uVar12 = (undefined1)((ulong)uVar13 >> 0x18);
            puVar7[9] = uVar12;
            puVar7[10] = uVar12;
            puVar7[0xb] = uVar12;
            uVar12 = (undefined1)((ulong)uVar13 >> 0x20);
            puVar7[0xc] = uVar12;
            puVar7[0xd] = uVar12;
            puVar7[0xe] = uVar12;
            uVar12 = (undefined1)((ulong)uVar13 >> 0x28);
            puVar7[0xf] = uVar12;
            puVar7[0x10] = uVar12;
            puVar7[0x11] = uVar12;
            uVar12 = (undefined1)((ulong)uVar13 >> 0x30);
            puVar7[0x12] = uVar12;
            puVar7[0x13] = uVar12;
            puVar7[0x14] = uVar12;
            uVar12 = (undefined1)((ulong)uVar13 >> 0x38);
            puVar7[0x15] = uVar12;
            puVar7[0x16] = uVar12;
            puVar7[0x17] = uVar12;
            uVar12 = (undefined1)uVar14;
            puVar7[0x18] = uVar12;
            puVar7[0x19] = uVar12;
            puVar7[0x1a] = uVar12;
            uVar12 = (undefined1)((ulong)uVar14 >> 8);
            puVar7[0x1b] = uVar12;
            puVar7[0x1c] = uVar12;
            puVar7[0x1d] = uVar12;
            uVar12 = (undefined1)((ulong)uVar14 >> 0x10);
            puVar7[0x1e] = uVar12;
            puVar7[0x1f] = uVar12;
            puVar7[0x20] = uVar12;
            uVar12 = (undefined1)((ulong)uVar14 >> 0x18);
            puVar7[0x21] = uVar12;
            puVar7[0x22] = uVar12;
            puVar7[0x23] = uVar12;
            uVar12 = (undefined1)((ulong)uVar14 >> 0x20);
            puVar7[0x24] = uVar12;
            puVar7[0x25] = uVar12;
            puVar7[0x26] = uVar12;
            uVar12 = (undefined1)((ulong)uVar14 >> 0x28);
            puVar7[0x27] = uVar12;
            puVar7[0x28] = uVar12;
            puVar7[0x29] = uVar12;
            uVar12 = (undefined1)((ulong)uVar14 >> 0x30);
            puVar7[0x2a] = uVar12;
            puVar7[0x2b] = uVar12;
            puVar7[0x2c] = uVar12;
            uVar12 = (undefined1)((ulong)uVar14 >> 0x38);
            puVar7[0x2d] = uVar12;
            puVar7[0x2e] = uVar12;
            puVar7[0x2f] = uVar12;
            uVar12 = (undefined1)uVar15;
            puVar7[0x30] = uVar12;
            puVar7[0x31] = uVar12;
            puVar7[0x32] = uVar12;
            uVar12 = (undefined1)((ulong)uVar15 >> 8);
            puVar7[0x33] = uVar12;
            puVar7[0x34] = uVar12;
            puVar7[0x35] = uVar12;
            uVar12 = (undefined1)((ulong)uVar15 >> 0x10);
            puVar7[0x36] = uVar12;
            puVar7[0x37] = uVar12;
            puVar7[0x38] = uVar12;
            uVar12 = (undefined1)((ulong)uVar15 >> 0x18);
            puVar7[0x39] = uVar12;
            puVar7[0x3a] = uVar12;
            puVar7[0x3b] = uVar12;
            uVar12 = (undefined1)((ulong)uVar15 >> 0x20);
            puVar7[0x3c] = uVar12;
            puVar7[0x3d] = uVar12;
            puVar7[0x3e] = uVar12;
            uVar12 = (undefined1)((ulong)uVar15 >> 0x28);
            puVar7[0x3f] = uVar12;
            puVar7[0x40] = uVar12;
            puVar7[0x41] = uVar12;
            uVar12 = (undefined1)((ulong)uVar15 >> 0x30);
            puVar7[0x42] = uVar12;
            puVar7[0x43] = uVar12;
            puVar7[0x44] = uVar12;
            uVar12 = (undefined1)((ulong)uVar15 >> 0x38);
            puVar7[0x45] = uVar12;
            puVar7[0x46] = uVar12;
            puVar7[0x47] = uVar12;
            uVar12 = (undefined1)uVar16;
            puVar7[0x48] = uVar12;
            puVar7[0x49] = uVar12;
            puVar7[0x4a] = uVar12;
            uVar12 = (undefined1)((ulong)uVar16 >> 8);
            puVar7[0x4b] = uVar12;
            puVar7[0x4c] = uVar12;
            puVar7[0x4d] = uVar12;
            uVar12 = (undefined1)((ulong)uVar16 >> 0x10);
            puVar7[0x4e] = uVar12;
            puVar7[0x4f] = uVar12;
            puVar7[0x50] = uVar12;
            uVar12 = (undefined1)((ulong)uVar16 >> 0x18);
            puVar7[0x51] = uVar12;
            puVar7[0x52] = uVar12;
            puVar7[0x53] = uVar12;
            uVar12 = (undefined1)((ulong)uVar16 >> 0x20);
            puVar7[0x54] = uVar12;
            puVar7[0x55] = uVar12;
            puVar7[0x56] = uVar12;
            uVar12 = (undefined1)((ulong)uVar16 >> 0x28);
            puVar7[0x57] = uVar12;
            puVar7[0x58] = uVar12;
            puVar7[0x59] = uVar12;
            uVar12 = (undefined1)((ulong)uVar16 >> 0x30);
            puVar7[0x5a] = uVar12;
            puVar7[0x5b] = uVar12;
            puVar7[0x5c] = uVar12;
            uVar12 = (undefined1)((ulong)uVar16 >> 0x38);
            puVar7[0x5d] = uVar12;
            puVar7[0x5e] = uVar12;
            puVar7[0x5f] = uVar12;
            puVar7 = puVar7 + 0x60;
          } while (lVar11 != 0);
          lVar11 = lVar5;
          if (uVar2 != 0) goto LAB_00da08a8;
        }
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        bVar1 = 1 < param_5;
        param_5 = param_5 + -1;
      } while (bVar1);
    }
  }
  return;
}

