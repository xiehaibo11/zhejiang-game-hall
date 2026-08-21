
/* void cocos2d::volumeRampMulti<4, 7, float, short, int, int, int>(float*, unsigned long, short
   const*, int*, int*, int const*, int*, int) */

void cocos2d::volumeRampMulti<4,7,float,short,int,int,int>
               (float *param_1,ulong param_2,short *param_3,int *param_4,int *param_5,int *param_6,
               int *param_7,int param_8)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_4 == (int *)0x0) {
    iVar5 = *param_5;
    do {
      uVar9 = *(undefined8 *)param_3;
      fVar10 = (float)iVar5;
      param_2 = param_2 - 1;
      auVar12._0_4_ = (int)(short)uVar9;
      auVar12._4_4_ = (int)(short)((ulong)uVar9 >> 0x10);
      auVar12._8_4_ = (int)(short)((ulong)uVar9 >> 0x20);
      auVar12._12_4_ = (int)(short)((ulong)uVar9 >> 0x30);
      auVar12 = NEON_scvtf(auVar12,4);
      param_1[2] = auVar12._8_4_ * fVar10 * 1.1368684e-13;
      param_1[3] = auVar12._12_4_ * fVar10 * 1.1368684e-13;
      *param_1 = auVar12._0_4_ * fVar10 * 1.1368684e-13;
      param_1[1] = auVar12._4_4_ * fVar10 * 1.1368684e-13;
      param_1[4] = (float)(int)param_3[4] * fVar10 * 1.1368684e-13;
      param_1[5] = (float)(int)param_3[5] * fVar10 * 1.1368684e-13;
      psVar1 = param_3 + 6;
      param_3 = param_3 + 7;
      param_1[6] = (float)(int)*psVar1 * fVar10 * 1.1368684e-13;
      param_1 = param_1 + 7;
      iVar5 = iVar5 + *param_6;
      *param_5 = iVar5;
    } while (param_2 != 0);
  }
  else {
    do {
      uVar9 = *(undefined8 *)param_3;
      iVar5 = *param_5;
                    /* try { // try from 00a93094 to 00b9309b has its CatchHandler @ 00a931fc */
      param_2 = param_2 - 1;
      auVar11._0_4_ = (int)(short)uVar9;
      sVar6 = (short)((ulong)uVar9 >> 0x10);
      auVar11._4_4_ = (int)sVar6;
      sVar7 = (short)((ulong)uVar9 >> 0x20);
      auVar11._8_4_ = (int)sVar7;
      sVar8 = (short)((ulong)uVar9 >> 0x30);
      auVar11._12_4_ = (int)sVar8;
                    /* try { // try from 00a9309c to 00b931ff has its CatchHandler @ 00a93048 */
      fVar10 = (float)iVar5;
      auVar12 = NEON_scvtf(auVar11,4);
      param_1[2] = auVar12._8_4_ * fVar10 * 1.1368684e-13;
      param_1[3] = auVar12._12_4_ * fVar10 * 1.1368684e-13;
      *param_1 = auVar12._0_4_ * fVar10 * 1.1368684e-13;
      param_1[1] = auVar12._4_4_ * fVar10 * 1.1368684e-13;
      sVar2 = param_3[4];
      param_1[4] = (float)(int)sVar2 * fVar10 * 1.1368684e-13;
      sVar3 = param_3[5];
      param_1[5] = (float)(int)sVar3 * fVar10 * 1.1368684e-13;
      sVar4 = param_3[6];
      param_1[6] = (float)(int)sVar4 * fVar10 * 1.1368684e-13;
      *param_5 = iVar5 + *param_6;
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) *
                 ((((int)sVar6 + (int)(short)uVar9 + (int)sVar7 + (int)sVar8 + (int)sVar2 +
                    (int)sVar3 + (int)sVar4) * 0x1000) / 7 >> 0xc);
      param_3 = param_3 + 7;
      param_1 = param_1 + 7;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a93094 with catch @ 00a931fc
                        */
  return;
}

