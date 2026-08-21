
void FUN_010a749c(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  
  plVar2 = (long *)(param_2 + 8);
  if (param_3 != 0) {
    plVar2 = (long *)(param_2 + 0x10);
  }
  lVar6 = param_1 + (ulong)param_3 * 0x9d8;
  lVar7 = *plVar2;
  plVar2 = (long *)(param_2 + 0x18);
  if (param_3 != 0) {
    plVar2 = (long *)(param_2 + 0x20);
  }
  lVar8 = *plVar2;
  if ((*(long *)(lVar6 + 0xa18) != lVar7) || (*(long *)(lVar6 + 0xa20) != lVar8)) {
    *(long *)(lVar6 + 0xa18) = lVar7;
    *(long *)(lVar6 + 0xa20) = lVar8;
    lVar6 = param_1 + (ulong)param_3 * 0x9d8;
    *(long *)(lVar6 + 0x50) = lVar7;
    *(long *)(lVar6 + 0x58) = lVar8;
    if (*(int *)(lVar6 + 0x1fc) != 0) {
      uVar9 = 0;
      do {
        lVar10 = param_1 + (ulong)param_3 * 0x9d8 + (ulong)uVar9 * 0x38;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a75b0 with catch @ 010a7540
                       catch(type#1 @ 00000000) { ... } // from try @ 010a75e0 with catch @ 010a7540
                       catch(type#1 @ 00000000) { ... } // from try @ 010a7610 with catch @ 010a7540
                       catch(type#1 @ 00000000) { ... } // from try @ 010a7638 with catch @ 010a7540
                       catch(type#1 @ 00000000) { ... } // from try @ 010a7664 with catch @ 010a7540
                        */
        lVar3 = FT_MulFix(*(undefined8 *)(lVar10 + 0x200),lVar7);
        *(long *)(lVar10 + 0x208) = lVar3 + lVar8;
        *(long *)(lVar10 + 0x210) = lVar3 + lVar8;
        lVar3 = FT_MulFix(*(undefined8 *)(lVar10 + 0x218),lVar7);
        *(long *)(lVar10 + 0x220) = lVar3 + lVar8;
        *(long *)(lVar10 + 0x228) = lVar3 + lVar8;
        *(uint *)(lVar10 + 0x230) = *(uint *)(lVar10 + 0x230) & 0xfffffffe;
        lVar3 = FT_MulFix(*(long *)(lVar10 + 0x200) - *(long *)(lVar10 + 0x218),lVar7);
        if (lVar3 + 0x30U < 0x61) {
                    /* try { // try from 010a75a8 to 011a75af has its CatchHandler @ 010a76a4 */
                    /* try { // try from 010a75b0 to 011a75d3 has its CatchHandler @ 010a7540 */
          uVar4 = *(long *)(lVar10 + 0x208) + 0x20U & 0xffffffffffffffc0;
          *(ulong *)(lVar10 + 0x210) = uVar4;
          lVar5 = FT_DivFix(uVar4,lVar7);
                    /* try { // try from 010a75d4 to 011a75df has its CatchHandler @ 010a76a4 */
          lVar5 = lVar5 - *(long *)(lVar10 + 0x218);
          lVar3 = -lVar5;
          if (-1 < lVar5) {
            lVar3 = lVar5;
          }
          lVar3 = FT_MulFix(lVar3,lVar7);
                    /* try { // try from 010a75e0 to 011a7607 has its CatchHandler @ 010a7540 */
          uVar4 = 0;
          if (0x1f < lVar3) {
            uVar4 = lVar3 + 0x20U & 0xffffffffffffffc0;
          }
          uVar1 = -uVar4;
          if (-1 < lVar5) {
            uVar1 = uVar4;
          }
          *(ulong *)(lVar10 + 0x228) = *(ulong *)(lVar10 + 0x210) - uVar1;
                    /* try { // try from 010a7608 to 011a760f has its CatchHandler @ 010a76a0 */
          *(uint *)(lVar10 + 0x230) = *(uint *)(lVar10 + 0x230) | 1;
        }
                    /* try { // try from 010a7610 to 011a762f has its CatchHandler @ 010a7540 */
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(lVar6 + 0x1fc));
    }
  }
                    /* try { // try from 010a7630 to 011a7637 has its CatchHandler @ 010a76a0 */
                    /* try { // try from 010a7638 to 011a7657 has its CatchHandler @ 010a7540 */
  return;
}

