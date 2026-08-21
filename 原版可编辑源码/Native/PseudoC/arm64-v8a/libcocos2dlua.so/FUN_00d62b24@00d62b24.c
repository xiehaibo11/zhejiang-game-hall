
void FUN_00d62b24(float param_1,long *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  float *pfVar4;
  undefined1 *puVar5;
  ulong uVar6;
  
                    /* catch() { ... } // from try @ 00d62a28 with catch @ 00d62b24 */
                    /* catch() { ... } // from try @ 00d62a20 with catch @ 00d62b28 */
                    /* catch() { ... } // from try @ 00d62784 with catch @ 00d62b2c */
                    /* catch() { ... } // from try @ 00d62778 with catch @ 00d62b30 */
                    /* catch() { ... } // from try @ 00d6276c with catch @ 00d62b34 */
  uVar6 = (ulong)param_3;
                    /* catch() { ... } // from try @ 00d62760 with catch @ 00d62b38 */
                    /* catch() { ... } // from try @ 00d62700 with catch @ 00d62b3c */
                    /* catch() { ... } // from try @ 00d626f4 with catch @ 00d62b40 */
                    /* catch() { ... } // from try @ 00d626e8 with catch @ 00d62b44 */
                    /* catch() { ... } // from try @ 00d626dc with catch @ 00d62b48 */
                    /* catch() { ... } // from try @ 00d626c0 with catch @ 00d62b4c */
                    /* catch() { ... } // from try @ 00d626b4 with catch @ 00d62b50 */
  pfVar4 = (float *)_spMalloc(-(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2,
                              "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                              ,0x260);
                    /* catch() { ... } // from try @ 00d626a8 with catch @ 00d62b54 */
                    /* catch() { ... } // from try @ 00d6269c with catch @ 00d62b58 */
                    /* catch() { ... } // from try @ 00d6267c with catch @ 00d62b5c */
  if (param_1 == 1.0) {
    if (0 < (int)param_3) {
      puVar5 = (undefined1 *)(*param_2 + 2);
      do {
        *param_2 = (long)(puVar5 + -1);
        uVar2 = puVar5[-2];
        *param_2 = (long)puVar5;
                    /* catch() { ... } // from try @ 00d62670 with catch @ 00d62b90 */
        uVar3 = puVar5[-1];
        *param_2 = (long)(puVar5 + 1);
        uVar1 = *puVar5;
        *param_2 = (long)(puVar5 + 2);
        uVar6 = uVar6 - 1;
                    /* catch() { ... } // from try @ 00d62664 with catch @ 00d62bb0 */
        *pfVar4 = (float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar1),puVar5[1]);
        puVar5 = puVar5 + 4;
        pfVar4 = pfVar4 + 1;
      } while (uVar6 != 0);
    }
  }
  else {
                    /* catch() { ... } // from try @ 00d62a48 with catch @ 00d62bc4 */
                    /* catch() { ... } // from try @ 00d62a38 with catch @ 00d62bc8 */
    if (0 < (int)param_3) {
                    /* catch() { ... } // from try @ 00d628ac with catch @ 00d62bcc */
      puVar5 = (undefined1 *)(*param_2 + 2);
      do {
        *param_2 = (long)(puVar5 + -1);
        uVar2 = puVar5[-2];
        *param_2 = (long)puVar5;
        uVar3 = puVar5[-1];
        *param_2 = (long)(puVar5 + 1);
        uVar1 = *puVar5;
        *param_2 = (long)(puVar5 + 2);
        uVar6 = uVar6 - 1;
                    /* catch() { ... } // from try @ 00d628a4 with catch @ 00d62c18 */
                    /* catch() { ... } // from try @ 00d62574 with catch @ 00d62c1c */
                    /* catch() { ... } // from try @ 00d62544 with catch @ 00d62c20 */
        *pfVar4 = (float)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar1),puVar5[1]) * param_1;
                    /* catch() { ... } // from try @ 00d62514 with catch @ 00d62c24 */
        puVar5 = puVar5 + 4;
        pfVar4 = pfVar4 + 1;
                    /* catch() { ... } // from try @ 00d6284c with catch @ 00d62c28 */
      } while (uVar6 != 0);
    }
  }
                    /* catch() { ... } // from try @ 00d62830 with catch @ 00d62c2c */
                    /* catch() { ... } // from try @ 00d62814 with catch @ 00d62c30 */
                    /* catch() { ... } // from try @ 00d629f8 with catch @ 00d62c34 */
                    /* catch() { ... } // from try @ 00d62964 with catch @ 00d62c38 */
  return;
}

