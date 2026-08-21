
void FT_GlyphLoader_Add(long param_1)

{
  uint uVar1;
  ulong uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  long lVar6;
  short sVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_1 == 0) {
    return;
  }
  sVar3 = *(short *)(param_1 + 0x60);
  sVar4 = *(short *)(param_1 + 0x1a);
  sVar5 = *(short *)(param_1 + 0x62) + sVar4;
  sVar7 = sVar3 + *(short *)(param_1 + 0x18);
  *(short *)(param_1 + 0x1a) = sVar5;
  uVar1 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x98);
                    /* catch() { ... } // from try @ 0105b9d4 with catch @ 0105ba78 */
  *(short *)(param_1 + 0x18) = sVar7;
  *(uint *)(param_1 + 0x50) = uVar1;
  if (sVar3 == 0) goto LAB_0105bb1c;
  lVar6 = *(long *)(param_1 + 0x78);
  uVar8 = (long)sVar3 & 0xffffffff;
  uVar2 = uVar8;
  if (uVar8 < 2) {
    uVar2 = 1;
  }
  if (uVar2 < 0x10) {
    uVar9 = 0;
LAB_0105baf8:
    do {
      lVar10 = uVar9 * 2;
      uVar9 = uVar9 + 1;
                    /* try { // try from 0105bb04 to 0115bb13 has its CatchHandler @ 0105bb2c */
      *(short *)(lVar6 + lVar10) = *(short *)(lVar6 + lVar10) + sVar4;
    } while (uVar9 < uVar8);
  }
  else {
    uVar9 = uVar2 & 0xfffffff0;
    if (uVar9 == 0) goto LAB_0105baf8;
    puVar11 = (undefined8 *)(lVar6 + 0x10);
    uVar12 = uVar9;
    do {
      uVar14 = puVar11[-1];
      uVar13 = puVar11[-2];
      uVar16 = puVar11[1];
      uVar15 = *puVar11;
      uVar12 = uVar12 - 0x10;
      puVar11[-1] = CONCAT26(sVar4 + (short)((ulong)uVar14 >> 0x30),
                             CONCAT24(sVar4 + (short)((ulong)uVar14 >> 0x20),
                                      CONCAT22(sVar4 + (short)((ulong)uVar14 >> 0x10),
                                               sVar4 + (short)uVar14)));
      puVar11[-2] = CONCAT26(sVar4 + (short)((ulong)uVar13 >> 0x30),
                             CONCAT24(sVar4 + (short)((ulong)uVar13 >> 0x20),
                                      CONCAT22(sVar4 + (short)((ulong)uVar13 >> 0x10),
                                               sVar4 + (short)uVar13)));
      puVar11[1] = CONCAT26(sVar4 + (short)((ulong)uVar16 >> 0x30),
                            CONCAT24(sVar4 + (short)((ulong)uVar16 >> 0x20),
                                     CONCAT22(sVar4 + (short)((ulong)uVar16 >> 0x10),
                                              sVar4 + (short)uVar16)));
      *puVar11 = CONCAT26(sVar4 + (short)((ulong)uVar15 >> 0x30),
                          CONCAT24(sVar4 + (short)((ulong)uVar15 >> 0x20),
                                   CONCAT22(sVar4 + (short)((ulong)uVar15 >> 0x10),
                                            sVar4 + (short)uVar15)));
      puVar11 = puVar11 + 4;
    } while (uVar12 != 0);
    if (uVar2 != uVar9) goto LAB_0105baf8;
  }
  sVar5 = *(short *)(param_1 + 0x1a);
  sVar7 = *(short *)(param_1 + 0x18);
LAB_0105bb1c:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105bb04 with catch @ 0105bb2c
                        */
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
                    /* try { // try from 0105bb40 to 0115bc6b has its CatchHandler @ 0105bb40
                       catch() { ... } // from try @ 0105bb40 with catch @ 0105bb40
                       catch() { ... } // from try @ 0105bc8c with catch @ 0105bb40 */
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x20) + (long)sVar5 * 0x10;
  *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x28) + (long)sVar5;
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x30) + (long)sVar7 * 2;
  if (*(char *)(param_1 + 0x14) != '\0') {
    lVar6 = (long)sVar5 * 0x10;
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x40) + lVar6;
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x48) + lVar6;
  }
  *(ulong *)(param_1 + 0xa0) = *(long *)(param_1 + 0x58) + (ulong)uVar1 * 0x30;
  return;
}

