
void png_read_finish_row(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = *(int *)(param_1 + 0x24c) + 1;
  *(uint *)(param_1 + 0x24c) = uVar1;
  if (uVar1 < *(uint *)(param_1 + 0x238)) {
    return;
  }
  if (*(char *)(param_1 + 0x2ac) != '\0') {
                    /* catch() { ... } // from try @ 010d2814 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d2880 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d28e8 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d2948 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d29a0 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d2a08 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d2a68 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d2ac0 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d2b28 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d2b90 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d2bf8 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d2c40 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d2ca8 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d2d10 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d2d70 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d2dd0 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d2e30 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d2e90 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d2ef8 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d2f58 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d2fb8 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d3000 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d3048 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d3090 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d30d8 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d3120 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d3188 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d31e8 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d3250 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d32b8 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d3320 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d3380 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d33d8 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d3438 with catch @ 010d27c8
                       catch() { ... } // from try @ 010d3490 with catch @ 010d27c8 */
    *(undefined4 *)(param_1 + 0x24c) = 0;
    memset(*(void **)(param_1 + 600),0,*(long *)(param_1 + 0x240) + 1);
    bVar7 = *(char *)(param_1 + 0x2ad) + 1;
    *(byte *)(param_1 + 0x2ad) = bVar7;
    if (bVar7 < 7) {
      iVar4 = *(int *)(param_1 + 0x230) + -1;
      if ((*(byte *)(param_1 + 0x16c) >> 1 & 1) != 0) {
        bVar2 = (&DAT_01475161)[bVar7];
        uVar1 = 0;
        if (bVar2 != 0) {
          uVar1 = ((iVar4 + (uint)bVar2) - (uint)(byte)(&DAT_0147515a)[bVar7]) / (uint)bVar2;
        }
        *(uint *)(param_1 + 0x248) = uVar1;
        return;
      }
                    /* try { // try from 010d2878 to 011d287f has its CatchHandler @ 010d359c */
                    /* try { // try from 010d2880 to 011d28df has its CatchHandler @ 010d27c8 */
      do {
        bVar2 = (&DAT_01475153)[bVar7];
        bVar3 = (&DAT_01475161)[bVar7];
        uVar1 = (*(int *)(param_1 + 0x234) + -1 + (uint)bVar2) - (uint)(byte)(&DAT_0147514c)[bVar7];
        uVar5 = (iVar4 + (uint)bVar3) - (uint)(byte)(&DAT_0147515a)[bVar7];
        uVar9 = (uint)bVar2;
        uVar8 = (uint)bVar3;
        if ((bVar2 <= uVar1) && (bVar3 <= uVar5)) {
          uVar6 = 0;
          if (uVar9 != 0) {
            uVar6 = uVar1 / uVar9;
          }
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar5 / uVar8;
          }
          *(uint *)(param_1 + 0x238) = uVar6;
          *(uint *)(param_1 + 0x248) = uVar1;
          return;
        }
        bVar7 = bVar7 + 1;
        *(byte *)(param_1 + 0x2ad) = bVar7;
      } while (bVar7 < 7);
                    /* try { // try from 010d28e0 to 011d28e7 has its CatchHandler @ 010d3598 */
      uVar6 = 0;
      if (uVar9 != 0) {
        uVar6 = uVar1 / uVar9;
      }
      uVar1 = 0;
      if (uVar8 != 0) {
        uVar1 = uVar5 / uVar8;
      }
                    /* try { // try from 010d28e8 to 011d293f has its CatchHandler @ 010d27c8 */
      *(uint *)(param_1 + 0x238) = uVar6;
      *(uint *)(param_1 + 0x248) = uVar1;
      bVar7 = *(byte *)(param_1 + 0x168);
      goto joined_r0x010d27f8;
    }
  }
  bVar7 = *(byte *)(param_1 + 0x168);
joined_r0x010d27f8:
  if ((bVar7 >> 3 & 1) == 0) {
    png_read_IDAT_data(param_1,0,0);
                    /* try { // try from 010d280c to 011d2813 has its CatchHandler @ 010d35a0 */
    *(undefined8 *)(param_1 + 400) = 0;
                    /* try { // try from 010d2814 to 011d2877 has its CatchHandler @ 010d27c8 */
    if ((*(uint *)(param_1 + 0x168) >> 3 & 1) == 0) {
      *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 8;
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 8;
    }
  }
  if (*(int *)(param_1 + 0x170) != 0x49444154) {
                    /* try { // try from 010d2940 to 011d2947 has its CatchHandler @ 010d3594 */
    return;
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  png_crc_finish(param_1,*(undefined4 *)(param_1 + 0x290));
  return;
}

