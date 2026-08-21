
/* void cocos2d::volumeRampMulti<4, 5, float, short, int, int, int>(float*, unsigned long, short
   const*, int*, int*, int const*, int*, int) */

void cocos2d::volumeRampMulti<4,5,float,short,int,int,int>
               (float *param_1,ulong param_2,short *param_3,int *param_4,int *param_5,int *param_6,
               int *param_7,int param_8)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_4 == (int *)0x0) {
    iVar3 = *param_5;
    do {
      uVar7 = *(undefined8 *)param_3;
      fVar8 = (float)iVar3;
      param_2 = param_2 - 1;
      auVar10._0_4_ = (int)(short)uVar7;
      auVar10._4_4_ = (int)(short)((ulong)uVar7 >> 0x10);
      auVar10._8_4_ = (int)(short)((ulong)uVar7 >> 0x20);
      auVar10._12_4_ = (int)(short)((ulong)uVar7 >> 0x30);
      auVar10 = NEON_scvtf(auVar10,4);
      param_1[2] = auVar10._8_4_ * fVar8 * 1.1368684e-13;
      param_1[3] = auVar10._12_4_ * fVar8 * 1.1368684e-13;
      *param_1 = auVar10._0_4_ * fVar8 * 1.1368684e-13;
      param_1[1] = auVar10._4_4_ * fVar8 * 1.1368684e-13;
      psVar1 = param_3 + 4;
                    /* try { // try from 00a91eec to 00b91eff has its CatchHandler @ 00a92070 */
      param_3 = param_3 + 5;
                    /* try { // try from 00a91f00 to 00b91fdb has its CatchHandler @ 00a91ea0 */
      param_1[4] = (float)(int)*psVar1 * fVar8 * 1.1368684e-13;
      param_1 = param_1 + 5;
      iVar3 = iVar3 + *param_6;
      *param_5 = iVar3;
    } while (param_2 != 0);
  }
  else {
    do {
      uVar7 = *(undefined8 *)param_3;
      iVar3 = *param_5;
      param_2 = param_2 - 1;
      auVar9._0_4_ = (int)(short)uVar7;
      sVar4 = (short)((ulong)uVar7 >> 0x10);
      auVar9._4_4_ = (int)sVar4;
      sVar5 = (short)((ulong)uVar7 >> 0x20);
      auVar9._8_4_ = (int)sVar5;
      sVar6 = (short)((ulong)uVar7 >> 0x30);
      auVar9._12_4_ = (int)sVar6;
      fVar8 = (float)iVar3;
      auVar10 = NEON_scvtf(auVar9,4);
      param_1[2] = auVar10._8_4_ * fVar8 * 1.1368684e-13;
      param_1[3] = auVar10._12_4_ * fVar8 * 1.1368684e-13;
      *param_1 = auVar10._0_4_ * fVar8 * 1.1368684e-13;
      param_1[1] = auVar10._4_4_ * fVar8 * 1.1368684e-13;
                    /* catch() { ... } // from try @ 00a91d40 with catch @ 00a91e30 */
                    /* catch() { ... } // from try @ 00a91d34 with catch @ 00a91e34 */
                    /* catch() { ... } // from try @ 00a91d14 with catch @ 00a91e38 */
      sVar2 = param_3[4];
                    /* catch() { ... } // from try @ 00a91d4c with catch @ 00a91e48 */
      param_1[4] = (float)(int)sVar2 * fVar8 * 1.1368684e-13;
      *param_5 = iVar3 + *param_6;
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) *
                 ((((int)sVar4 + (int)(short)uVar7 + (int)sVar5 + (int)sVar6 + (int)sVar2) * 0x1000)
                  / 5 >> 0xc);
                    /* catch() { ... } // from try @ 00a91f00 with catch @ 00a91ea0
                       catch() { ... } // from try @ 00a9203c with catch @ 00a91ea0 */
      param_3 = param_3 + 5;
      param_1 = param_1 + 5;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

