
void pvmp3_equalizer(long param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined *puVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  
  uVar9 = 0;
  if (param_2 == 0) {
    puVar10 = (undefined4 *)(param_1 + 0x8fc);
    do {
      uVar5 = param_3[0x12];
      uVar6 = param_3[0x24];
      uVar7 = param_3[0x36];
      uVar9 = uVar9 + 2;
      puVar10[-0x1f] = *param_3;
      puVar10[-0x1e] = uVar5;
      puVar10[-0x1d] = uVar6;
      puVar10[-0x1c] = uVar7;
      uVar5 = param_3[0x5a];
      uVar6 = param_3[0x6c];
      uVar7 = param_3[0x7e];
      puVar10[-0x1b] = param_3[0x48];
      puVar10[-0x1a] = uVar5;
      puVar10[-0x19] = uVar6;
      puVar10[-0x18] = uVar7;
      uVar5 = param_3[0xa2];
      uVar6 = param_3[0xb4];
      uVar7 = param_3[0xc6];
      puVar10[-0x17] = param_3[0x90];
      puVar10[-0x16] = uVar5;
      puVar10[-0x15] = uVar6;
      puVar10[-0x14] = uVar7;
      uVar5 = param_3[0xea];
      uVar6 = param_3[0xfc];
      uVar7 = param_3[0x10e];
      puVar10[-0x13] = param_3[0xd8];
      puVar10[-0x12] = uVar5;
      puVar10[-0x11] = uVar6;
      puVar10[-0x10] = uVar7;
      uVar5 = param_3[0x132];
      uVar6 = param_3[0x144];
      uVar7 = param_3[0x156];
      puVar10[-0xf] = param_3[0x120];
      puVar10[-0xe] = uVar5;
      puVar10[-0xd] = uVar6;
      puVar10[-0xc] = uVar7;
      uVar5 = param_3[0x17a];
      uVar6 = param_3[0x18c];
      uVar7 = param_3[0x19e];
      puVar10[-0xb] = param_3[0x168];
      puVar10[-10] = uVar5;
      puVar10[-9] = uVar6;
      puVar10[-8] = uVar7;
      uVar5 = param_3[0x1c2];
      uVar6 = param_3[0x1d4];
      uVar7 = param_3[0x1e6];
      puVar10[-7] = param_3[0x1b0];
      puVar10[-6] = uVar5;
      puVar10[-5] = uVar6;
      puVar10[-4] = uVar7;
      uVar5 = param_3[0x20a];
      uVar6 = param_3[0x21c];
      uVar7 = param_3[0x22e];
                    /* catch() { ... } // from try @ 00ec4370 with catch @ 00ec4308 */
      puVar10[-3] = param_3[0x1f8];
      puVar10[-2] = uVar5;
      puVar10[-1] = uVar6;
      *puVar10 = uVar7;
      uVar5 = param_3[0x13];
      uVar6 = param_3[0x25];
      uVar7 = param_3[0x37];
      puVar10[-0x3f] = param_3[1];
      puVar10[-0x3e] = uVar5;
      puVar10[-0x3d] = uVar6;
      puVar10[-0x3c] = uVar7;
      uVar5 = param_3[0x5b];
      uVar6 = param_3[0x6d];
      uVar7 = param_3[0x7f];
      puVar10[-0x3b] = param_3[0x49];
      puVar10[-0x3a] = uVar5;
      puVar10[-0x39] = uVar6;
      puVar10[-0x38] = uVar7;
      uVar5 = param_3[0xa3];
      uVar6 = param_3[0xb5];
      uVar7 = param_3[199];
      puVar10[-0x37] = param_3[0x91];
      puVar10[-0x36] = uVar5;
      puVar10[-0x35] = uVar6;
      puVar10[-0x34] = uVar7;
      uVar5 = param_3[0xeb];
      uVar6 = param_3[0xfd];
      uVar7 = param_3[0x10f];
                    /* try { // try from 00ec4368 to 00fc436f has its CatchHandler @ 00ec4380 */
      puVar10[-0x33] = param_3[0xd9];
      puVar10[-0x32] = uVar5;
      puVar10[-0x31] = uVar6;
      puVar10[-0x30] = uVar7;
                    /* try { // try from 00ec4370 to 00fc43bb has its CatchHandler @ 00ec4308 */
      uVar5 = param_3[0x133];
      uVar6 = param_3[0x145];
      uVar7 = param_3[0x157];
                    /* catch() { ... } // from try @ 00ec4368 with catch @ 00ec4380 */
      puVar10[-0x2f] = param_3[0x121];
      puVar10[-0x2e] = uVar5;
      puVar10[-0x2d] = uVar6;
      puVar10[-0x2c] = uVar7;
      uVar5 = param_3[0x17b];
      uVar6 = param_3[0x18d];
      uVar7 = param_3[0x19f];
      puVar10[-0x2b] = param_3[0x169];
      puVar10[-0x2a] = uVar5;
      puVar10[-0x29] = uVar6;
      puVar10[-0x28] = uVar7;
      uVar5 = param_3[0x1c3];
      uVar6 = param_3[0x1d5];
      uVar7 = param_3[0x1e7];
      puVar10[-0x27] = param_3[0x1b1];
      puVar10[-0x26] = uVar5;
      puVar10[-0x25] = uVar6;
      puVar10[-0x24] = uVar7;
      puVar2 = param_3 + 0x1f9;
                    /* catch() { ... } // from try @ 00ec4424 with catch @ 00ec43bc */
      uVar5 = param_3[0x20b];
      uVar6 = param_3[0x21d];
      uVar7 = param_3[0x22f];
      param_3 = param_3 + 2;
      puVar10[-0x23] = *puVar2;
      puVar10[-0x22] = uVar5;
      puVar10[-0x21] = uVar6;
      puVar10[-0x20] = uVar7;
      puVar10 = puVar10 + -0x40;
    } while (uVar9 < 0x12);
  }
  else {
    param_1 = param_1 + 0x780;
    piVar11 = param_3 + 0x24;
    puVar12 = &DAT_01438308 + (ulong)(param_2 & 7) * 0x80;
    piVar13 = param_3 + 0x25;
    do {
      uVar15 = 0;
      puVar12 = puVar12 + -0x80;
      lVar14 = param_1;
      piVar17 = piVar11;
      do {
        iVar8 = piVar17[-0x12];
        iVar3 = *piVar17;
        iVar4 = piVar17[0x12];
        *(int *)(lVar14 + 0x100) =
             (int)((ulong)((long)*(int *)(puVar12 + 0x80) * (long)(piVar17[-0x24] << 1)) >> 0x20);
        uVar15 = uVar15 + 0x48;
        *(int *)(lVar14 + 0x104) =
             (int)((ulong)((long)*(int *)(puVar12 + 0x84) * (long)(iVar8 << 1)) >> 0x20);
        *(int *)(lVar14 + 0x108) =
             (int)((ulong)((long)*(int *)(puVar12 + 0x88) * (long)(iVar3 << 1)) >> 0x20);
        piVar1 = (int *)(puVar12 + 0x8c);
        puVar12 = puVar12 + 0x10;
        *(int *)(lVar14 + 0x10c) = (int)((ulong)((long)*piVar1 * (long)(iVar4 << 1)) >> 0x20);
        lVar14 = lVar14 + 0x10;
        piVar17 = piVar17 + 0x48;
      } while (uVar15 < 0x240);
      lVar16 = 0;
      uVar15 = 0;
      piVar17 = piVar13;
      do {
        piVar1 = (int *)(puVar12 + lVar16);
        puVar10 = (undefined4 *)(lVar14 + lVar16);
        iVar8 = piVar17[-0x12];
        iVar3 = *piVar17;
        iVar4 = piVar17[0x12];
        *puVar10 = (int)((ulong)((long)*piVar1 * (long)(piVar17[-0x24] << 1)) >> 0x20);
        uVar15 = uVar15 + 0x48;
        puVar10[1] = (int)((ulong)((long)piVar1[1] * (long)(iVar8 << 1)) >> 0x20);
        lVar16 = lVar16 + 0x10;
        puVar10[2] = (int)((ulong)((long)piVar1[2] * (long)(iVar3 << 1)) >> 0x20);
        piVar17 = piVar17 + 0x48;
        puVar10[3] = (int)((ulong)((long)piVar1[3] * (long)(iVar4 << 1)) >> 0x20);
      } while (uVar15 < 0x240);
      uVar9 = uVar9 + 3;
      param_1 = param_1 + -0x180;
      piVar11 = piVar11 + 3;
      piVar13 = piVar13 + 3;
    } while (uVar9 < 0x12);
  }
  return;
}

