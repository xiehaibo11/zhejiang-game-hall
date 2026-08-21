
void TIFFSwabArrayOfShort(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  
  if (0 < (long)param_2) {
    uVar1 = 0xfffffffffffffffe;
    if (-2 < (long)~param_2) {
      uVar1 = ~param_2;
    }
    uVar1 = uVar1 + param_2 + 2;
    if ((0x1f < uVar1) && (uVar4 = uVar1 & 0xffffffffffffffe0, uVar4 != 0)) {
      param_2 = param_2 - uVar4;
      puVar2 = (undefined1 *)(param_1 + 0x20);
      uVar5 = uVar4;
      do {
        uVar6 = *puVar2;
        uVar7 = puVar2[2];
        uVar8 = puVar2[4];
        uVar9 = puVar2[6];
        uVar10 = puVar2[8];
        uVar11 = puVar2[10];
        uVar12 = puVar2[0xc];
        uVar13 = puVar2[0xe];
        uVar14 = puVar2[0x10];
        uVar15 = puVar2[0x12];
        uVar16 = puVar2[0x14];
        uVar17 = puVar2[0x16];
        uVar18 = puVar2[0x18];
        uVar19 = puVar2[0x1a];
        uVar20 = puVar2[0x1c];
        uVar21 = puVar2[0x1e];
        uVar22 = puVar2[-0x20];
        uVar23 = puVar2[-0x1e];
        uVar24 = puVar2[-0x1c];
        uVar25 = puVar2[-0x1a];
        uVar26 = puVar2[-0x18];
        uVar27 = puVar2[-0x16];
        uVar28 = puVar2[-0x14];
        uVar29 = puVar2[-0x12];
        uVar30 = puVar2[-0x10];
        uVar31 = puVar2[-0xe];
        uVar32 = puVar2[-0xc];
        uVar33 = puVar2[-10];
        uVar34 = puVar2[-8];
        uVar35 = puVar2[-6];
        uVar36 = puVar2[-4];
        uVar37 = puVar2[-2];
        uVar5 = uVar5 - 0x20;
        puVar2[-0x20] = puVar2[-0x1f];
        puVar2[-0x1f] = uVar22;
        puVar2[-0x1e] = puVar2[-0x1d];
        puVar2[-0x1d] = uVar23;
        puVar2[-0x1c] = puVar2[-0x1b];
        puVar2[-0x1b] = uVar24;
        puVar2[-0x1a] = puVar2[-0x19];
        puVar2[-0x19] = uVar25;
        puVar2[-0x18] = puVar2[-0x17];
        puVar2[-0x17] = uVar26;
        puVar2[-0x16] = puVar2[-0x15];
        puVar2[-0x15] = uVar27;
        puVar2[-0x14] = puVar2[-0x13];
        puVar2[-0x13] = uVar28;
        puVar2[-0x12] = puVar2[-0x11];
        puVar2[-0x11] = uVar29;
        puVar2[-0x10] = puVar2[-0xf];
        puVar2[-0xf] = uVar30;
        puVar2[-0xe] = puVar2[-0xd];
        puVar2[-0xd] = uVar31;
        puVar2[-0xc] = puVar2[-0xb];
        puVar2[-0xb] = uVar32;
        puVar2[-10] = puVar2[-9];
        puVar2[-9] = uVar33;
        puVar2[-8] = puVar2[-7];
        puVar2[-7] = uVar34;
        puVar2[-6] = puVar2[-5];
        puVar2[-5] = uVar35;
        puVar2[-4] = puVar2[-3];
        puVar2[-3] = uVar36;
        puVar2[-2] = puVar2[-1];
        puVar2[-1] = uVar37;
        *puVar2 = puVar2[1];
        puVar2[1] = uVar6;
        puVar2[2] = puVar2[3];
        puVar2[3] = uVar7;
        puVar2[4] = puVar2[5];
        puVar2[5] = uVar8;
        puVar2[6] = puVar2[7];
        puVar2[7] = uVar9;
        puVar2[8] = puVar2[9];
        puVar2[9] = uVar10;
        puVar2[10] = puVar2[0xb];
        puVar2[0xb] = uVar11;
        puVar2[0xc] = puVar2[0xd];
        puVar2[0xd] = uVar12;
        puVar2[0xe] = puVar2[0xf];
        puVar2[0xf] = uVar13;
        puVar2[0x10] = puVar2[0x11];
        puVar2[0x11] = uVar14;
        puVar2[0x12] = puVar2[0x13];
        puVar2[0x13] = uVar15;
        puVar2[0x14] = puVar2[0x15];
        puVar2[0x15] = uVar16;
        puVar2[0x16] = puVar2[0x17];
        puVar2[0x17] = uVar17;
        puVar2[0x18] = puVar2[0x19];
        puVar2[0x19] = uVar18;
        puVar2[0x1a] = puVar2[0x1b];
        puVar2[0x1b] = uVar19;
        puVar2[0x1c] = puVar2[0x1d];
        puVar2[0x1d] = uVar20;
        puVar2[0x1e] = puVar2[0x1f];
        puVar2[0x1f] = uVar21;
        puVar2 = puVar2 + 0x40;
      } while (uVar5 != 0);
      param_1 = param_1 + uVar4 * 2;
      if (uVar1 == uVar4) {
        return;
      }
    }
    puVar2 = (undefined1 *)(param_1 + 1);
    lVar3 = param_2 + 1;
    do {
      uVar6 = *puVar2;
      lVar3 = lVar3 + -1;
      *puVar2 = puVar2[-1];
      puVar2[-1] = uVar6;
      puVar2 = puVar2 + 2;
    } while (1 < lVar3);
  }
  return;
}

