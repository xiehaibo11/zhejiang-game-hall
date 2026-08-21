
/* void cocos2d::volumeRampMulti<4, 6, float, short, int, int, int>(float*, unsigned long, short
   const*, int*, int*, int const*, int*, int) */

void cocos2d::volumeRampMulti<4,6,float,short,int,int,int>
               (float *param_1,ulong param_2,short *param_3,int *param_4,int *param_5,int *param_6,
               int *param_7,int param_8)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (param_4 == (int *)0x0) {
    iVar4 = *param_5;
    do {
      uVar8 = *(undefined8 *)param_3;
      fVar9 = (float)iVar4;
      param_2 = param_2 - 1;
      auVar11._0_4_ = (int)(short)uVar8;
      auVar11._4_4_ = (int)(short)((ulong)uVar8 >> 0x10);
      auVar11._8_4_ = (int)(short)((ulong)uVar8 >> 0x20);
      auVar11._12_4_ = (int)(short)((ulong)uVar8 >> 0x30);
      auVar11 = NEON_scvtf(auVar11,4);
      param_1[2] = auVar11._8_4_ * fVar9 * 1.1368684e-13;
      param_1[3] = auVar11._12_4_ * fVar9 * 1.1368684e-13;
      *param_1 = auVar11._0_4_ * fVar9 * 1.1368684e-13;
      param_1[1] = auVar11._4_4_ * fVar9 * 1.1368684e-13;
                    /* try { // try from 00a9203c to 00b9209f has its CatchHandler @ 00a91ea0 */
      param_1[4] = (float)(int)param_3[4] * fVar9 * 1.1368684e-13;
      psVar1 = param_3 + 5;
      param_3 = param_3 + 6;
      param_1[5] = (float)(int)*psVar1 * fVar9 * 1.1368684e-13;
      param_1 = param_1 + 6;
      iVar4 = iVar4 + *param_6;
      *param_5 = iVar4;
    } while (param_2 != 0);
  }
  else {
    do {
      uVar8 = *(undefined8 *)param_3;
      iVar4 = *param_5;
      param_2 = param_2 - 1;
      auVar10._0_4_ = (int)(short)uVar8;
      sVar5 = (short)((ulong)uVar8 >> 0x10);
      auVar10._4_4_ = (int)sVar5;
      sVar6 = (short)((ulong)uVar8 >> 0x20);
      auVar10._8_4_ = (int)sVar6;
      sVar7 = (short)((ulong)uVar8 >> 0x30);
      auVar10._12_4_ = (int)sVar7;
      fVar9 = (float)iVar4;
      auVar11 = NEON_scvtf(auVar10,4);
      param_1[2] = auVar11._8_4_ * fVar9 * 1.1368684e-13;
      param_1[3] = auVar11._12_4_ * fVar9 * 1.1368684e-13;
      *param_1 = auVar11._0_4_ * fVar9 * 1.1368684e-13;
      param_1[1] = auVar11._4_4_ * fVar9 * 1.1368684e-13;
      sVar2 = param_3[4];
      param_1[4] = (float)(int)sVar2 * fVar9 * 1.1368684e-13;
      sVar3 = param_3[5];
      param_1[5] = (float)(int)sVar3 * fVar9 * 1.1368684e-13;
      *param_5 = iVar4 + *param_6;
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) *
                 ((((int)sVar5 + (int)(short)uVar8 + (int)sVar6 + (int)sVar7 + (int)sVar2 +
                   (int)sVar3) * 0x1000) / 6 >> 0xc);
                    /* try { // try from 00a91fdc to 00b9203b has its CatchHandler @ 00a9208c */
      param_3 = param_3 + 6;
      param_1 = param_1 + 6;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
                    /* catch() { ... } // from try @ 00a91eec with catch @ 00a92070 */
  return;
}

