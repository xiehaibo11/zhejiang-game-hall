
undefined8 FUN_01079c40(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  ulong uVar15;
  ulong local_d0 [16];
  
  puVar14 = *(uint **)(param_1 + 0x348);
  if ((puVar14 != (uint *)0x0) && (puVar14[1] == param_2)) {
    if (param_2 != 0) {
      uVar7 = 0;
      uVar13 = param_2;
      do {
                    /* try { // try from 01079c94 to 01179d37 has its CatchHandler @ 01079c94
                       catch(type#1 @ 00000000) { ... } // from try @ 01079c94 with catch @ 01079c94
                       catch(type#1 @ 00000000) { ... } // from try @ 01079db0 with catch @ 01079c94
                        */
        bVar3 = (byte)puVar14[(ulong)uVar7 * 6 + 0x2a];
        puVar6 = *(ulong **)(puVar14 + (ulong)uVar7 * 6 + 0x2e);
        uVar15 = (ulong)uVar7;
        if (bVar3 == 0) {
LAB_01079ce0:
          uVar11 = *puVar6;
        }
        else {
          lVar8 = *(long *)(param_3 + (ulong)uVar7 * 8);
          lVar9 = *(long *)(puVar14 + (ulong)uVar7 * 6 + 0x2c);
          uVar12 = 0xffffffff;
          do {
            lVar10 = *(long *)(lVar9 + (ulong)(uVar12 + 1) * 8);
            if (lVar8 == lVar10) {
              uVar11 = puVar6[uVar12 + 1];
              goto LAB_01079d38;
            }
            if (lVar8 < lVar10) {
              uVar11 = (ulong)(uVar12 + 1);
              uVar1 = uVar12;
              goto joined_r0x01079cf8;
            }
            uVar1 = uVar12 + 1;
            uVar2 = uVar12 + 2;
            uVar12 = uVar1;
          } while (uVar2 < bVar3);
          uVar11 = 0xffffffff;
joined_r0x01079cf8:
          if ((int)uVar1 < 0) goto LAB_01079ce0;
          if ((int)uVar11 < 0) {
            uVar11 = puVar6[(ulong)bVar3 - 1];
          }
          else {
            uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
            uVar11 = -(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3;
            lVar10 = *(long *)(lVar9 + uVar5);
            uVar11 = FT_MulDiv(lVar8 - lVar10,
                               *(long *)((long)puVar6 + uVar11) - *(long *)((long)puVar6 + uVar5),
                               *(long *)(lVar9 + uVar11) - lVar10);
            uVar13 = puVar14[1];
          }
        }
LAB_01079d38:
                    /* try { // try from 01079d38 to 01179d3f has its CatchHandler @ 01079e68 */
        uVar7 = uVar7 + 1;
        local_d0[uVar15] = uVar11;
      } while (uVar7 < uVar13);
      puVar14 = *(uint **)(param_1 + 0x348);
      if (puVar14 == (uint *)0x0) {
        return 6;
      }
    }
    if (puVar14[1] == param_2) {
      uVar7 = *puVar14;
      if (uVar7 != 0) {
        uVar13 = 0;
        do {
          if (param_2 == 0) {
            uVar4 = 0x10000;
          }
          else {
            uVar7 = 0;
            uVar4 = 0x10000;
            do {
              uVar15 = local_d0[uVar7] & ((long)local_d0[uVar7] >> 0x3f ^ 0xffffffffffffffffU);
                    /* try { // try from 01079d90 to 01179d93 has its CatchHandler @ 01079e30 */
              if (0xffff < (long)uVar15) {
                uVar15 = 0x10000;
              }
              uVar11 = 0x10000 - uVar15;
              if ((1 << (ulong)(uVar7 & 0x1f) & uVar13) != 0) {
                uVar11 = uVar15;
              }
                    /* try { // try from 01079da0 to 01179daf has its CatchHandler @ 01079e34 */
              uVar4 = FT_MulFix(uVar4,uVar11);
              param_2 = puVar14[1];
              uVar7 = uVar7 + 1;
                    /* try { // try from 01079db0 to 01179ea3 has its CatchHandler @ 01079c94 */
            } while (uVar7 < param_2);
            uVar7 = *puVar14;
          }
          *(undefined8 *)(*(long *)(puVar14 + 0x42) + (ulong)uVar13 * 8) = uVar4;
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar7);
      }
      return 0;
    }
  }
  return 6;
}

