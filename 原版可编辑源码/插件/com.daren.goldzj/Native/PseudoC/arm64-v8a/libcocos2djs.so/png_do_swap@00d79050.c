
void png_do_swap(int *param_1,undefined1 *param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
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
  undefined1 uVar38;
  
  if ((*(char *)((long)param_1 + 0x11) == '\x10') &&
     (uVar2 = *param_1 * (uint)*(byte *)((long)param_1 + 0x12), uVar2 != 0)) {
    uVar1 = (ulong)(uVar2 - 1) + 1;
    if (uVar1 < 0x20) {
      lVar4 = 0;
    }
    else {
      lVar4 = uVar1 - (uVar2 & 0x1f);
      if (lVar4 != 0) {
        puVar5 = param_2 + 0x20;
        lVar6 = lVar4;
        do {
          uVar7 = *puVar5;
          uVar8 = puVar5[2];
          uVar9 = puVar5[4];
          uVar10 = puVar5[6];
          uVar11 = puVar5[8];
          uVar12 = puVar5[10];
          uVar13 = puVar5[0xc];
          uVar14 = puVar5[0xe];
          uVar15 = puVar5[0x10];
          uVar16 = puVar5[0x12];
          uVar17 = puVar5[0x14];
          uVar18 = puVar5[0x16];
          uVar19 = puVar5[0x18];
          uVar20 = puVar5[0x1a];
          uVar21 = puVar5[0x1c];
          uVar22 = puVar5[0x1e];
          uVar23 = puVar5[-0x20];
          uVar24 = puVar5[-0x1e];
          uVar25 = puVar5[-0x1c];
          uVar26 = puVar5[-0x1a];
          uVar27 = puVar5[-0x18];
          uVar28 = puVar5[-0x16];
          uVar29 = puVar5[-0x14];
          uVar30 = puVar5[-0x12];
          uVar31 = puVar5[-0x10];
          uVar32 = puVar5[-0xe];
          uVar33 = puVar5[-0xc];
          uVar34 = puVar5[-10];
          uVar35 = puVar5[-8];
          uVar36 = puVar5[-6];
          uVar37 = puVar5[-4];
          uVar38 = puVar5[-2];
          lVar6 = lVar6 + -0x20;
          puVar5[-0x20] = puVar5[-0x1f];
          puVar5[-0x1f] = uVar23;
          puVar5[-0x1e] = puVar5[-0x1d];
          puVar5[-0x1d] = uVar24;
          puVar5[-0x1c] = puVar5[-0x1b];
          puVar5[-0x1b] = uVar25;
          puVar5[-0x1a] = puVar5[-0x19];
          puVar5[-0x19] = uVar26;
          puVar5[-0x18] = puVar5[-0x17];
          puVar5[-0x17] = uVar27;
          puVar5[-0x16] = puVar5[-0x15];
          puVar5[-0x15] = uVar28;
          puVar5[-0x14] = puVar5[-0x13];
          puVar5[-0x13] = uVar29;
          puVar5[-0x12] = puVar5[-0x11];
          puVar5[-0x11] = uVar30;
          puVar5[-0x10] = puVar5[-0xf];
          puVar5[-0xf] = uVar31;
          puVar5[-0xe] = puVar5[-0xd];
          puVar5[-0xd] = uVar32;
          puVar5[-0xc] = puVar5[-0xb];
          puVar5[-0xb] = uVar33;
          puVar5[-10] = puVar5[-9];
          puVar5[-9] = uVar34;
          puVar5[-8] = puVar5[-7];
          puVar5[-7] = uVar35;
          puVar5[-6] = puVar5[-5];
          puVar5[-5] = uVar36;
          puVar5[-4] = puVar5[-3];
          puVar5[-3] = uVar37;
          puVar5[-2] = puVar5[-1];
          puVar5[-1] = uVar38;
          *puVar5 = puVar5[1];
          puVar5[1] = uVar7;
          puVar5[2] = puVar5[3];
          puVar5[3] = uVar8;
          puVar5[4] = puVar5[5];
          puVar5[5] = uVar9;
          puVar5[6] = puVar5[7];
          puVar5[7] = uVar10;
          puVar5[8] = puVar5[9];
          puVar5[9] = uVar11;
          puVar5[10] = puVar5[0xb];
          puVar5[0xb] = uVar12;
          puVar5[0xc] = puVar5[0xd];
          puVar5[0xd] = uVar13;
          puVar5[0xe] = puVar5[0xf];
          puVar5[0xf] = uVar14;
          puVar5[0x10] = puVar5[0x11];
          puVar5[0x11] = uVar15;
          puVar5[0x12] = puVar5[0x13];
          puVar5[0x13] = uVar16;
          puVar5[0x14] = puVar5[0x15];
          puVar5[0x15] = uVar17;
          puVar5[0x16] = puVar5[0x17];
          puVar5[0x17] = uVar18;
          puVar5[0x18] = puVar5[0x19];
          puVar5[0x19] = uVar19;
          puVar5[0x1a] = puVar5[0x1b];
          puVar5[0x1b] = uVar20;
          puVar5[0x1c] = puVar5[0x1d];
          puVar5[0x1d] = uVar21;
          puVar5[0x1e] = puVar5[0x1f];
          puVar5[0x1f] = uVar22;
          puVar5 = puVar5 + 0x40;
        } while (lVar6 != 0);
        param_2 = param_2 + lVar4 * 2;
        if ((uVar2 & 0x1f) == 0) {
          return;
        }
      }
    }
    iVar3 = uVar2 - (int)lVar4;
    do {
      uVar7 = *param_2;
      iVar3 = iVar3 + -1;
      *param_2 = param_2[1];
      param_2[1] = uVar7;
      param_2 = param_2 + 2;
    } while (iVar3 != 0);
  }
  return;
}

