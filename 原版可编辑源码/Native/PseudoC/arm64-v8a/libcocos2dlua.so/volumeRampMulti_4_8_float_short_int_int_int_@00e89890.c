
/* void cocos2d::experimental::volumeRampMulti<4, 8, float, short, int, int, int>(float*, unsigned
   long, short const*, int*, int*, int const*, int*, int) */

void cocos2d::experimental::volumeRampMulti<4,8,float,short,int,int,int>
               (float *param_1,ulong param_2,short *param_3,int *param_4,int *param_5,int *param_6,
               int *param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short sVar11;
  short sVar13;
  undefined8 uVar5;
  short sVar15;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar6;
  short sVar12;
  short sVar14;
  short sVar16;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar17;
  
  if (param_4 == (int *)0x0) {
    iVar4 = *param_5;
    do {
      uVar5 = *(undefined8 *)param_3;
      fVar17 = (float)iVar4;
      param_2 = param_2 - 1;
      auVar8._0_4_ = (int)(short)uVar5;
      auVar8._4_4_ = (int)(short)((ulong)uVar5 >> 0x10);
      auVar8._8_4_ = (int)(short)((ulong)uVar5 >> 0x20);
      auVar8._12_4_ = (int)(short)((ulong)uVar5 >> 0x30);
      auVar8 = NEON_scvtf(auVar8,4);
      param_1[2] = auVar8._8_4_ * fVar17 * 1.1368684e-13;
      param_1[3] = auVar8._12_4_ * fVar17 * 1.1368684e-13;
      *param_1 = auVar8._0_4_ * fVar17 * 1.1368684e-13;
      param_1[1] = auVar8._4_4_ * fVar17 * 1.1368684e-13;
      uVar5 = *(undefined8 *)(param_3 + 4);
      param_3 = param_3 + 8;
      auVar10._0_4_ = (int)(short)uVar5;
      auVar10._4_4_ = (int)(short)((ulong)uVar5 >> 0x10);
      auVar10._8_4_ = (int)(short)((ulong)uVar5 >> 0x20);
      auVar10._12_4_ = (int)(short)((ulong)uVar5 >> 0x30);
      auVar8 = NEON_scvtf(auVar10,4);
      param_1[6] = auVar8._8_4_ * fVar17 * 1.1368684e-13;
      param_1[7] = auVar8._12_4_ * fVar17 * 1.1368684e-13;
      param_1[4] = auVar8._0_4_ * fVar17 * 1.1368684e-13;
      param_1[5] = auVar8._4_4_ * fVar17 * 1.1368684e-13;
      param_1 = param_1 + 8;
      iVar4 = iVar4 + *param_6;
      *param_5 = iVar4;
    } while (param_2 != 0);
  }
  else {
    do {
      uVar5 = *(undefined8 *)param_3;
      iVar2 = *param_5;
      sVar11 = (short)((ulong)uVar5 >> 0x10);
      sVar13 = (short)((ulong)uVar5 >> 0x20);
      sVar15 = (short)((ulong)uVar5 >> 0x30);
      auVar7._0_4_ = (int)(short)uVar5;
      auVar7._4_4_ = (int)sVar11;
      auVar7._8_4_ = (int)sVar13;
      auVar7._12_4_ = (int)sVar15;
      fVar17 = (float)iVar2;
      auVar8 = NEON_scvtf(auVar7,4);
      param_1[2] = auVar8._8_4_ * fVar17 * 1.1368684e-13;
      param_1[3] = auVar8._12_4_ * fVar17 * 1.1368684e-13;
      *param_1 = auVar8._0_4_ * fVar17 * 1.1368684e-13;
      param_1[1] = auVar8._4_4_ * fVar17 * 1.1368684e-13;
      uVar6 = *(undefined8 *)(param_3 + 4);
      sVar12 = (short)((ulong)uVar6 >> 0x10);
      sVar14 = (short)((ulong)uVar6 >> 0x20);
      sVar16 = (short)((ulong)uVar6 >> 0x30);
      auVar9._0_4_ = (int)(short)uVar6;
      auVar9._4_4_ = (int)sVar12;
      auVar9._8_4_ = (int)sVar14;
      auVar9._12_4_ = (int)sVar16;
      auVar8 = NEON_scvtf(auVar9,4);
      param_1[6] = auVar8._8_4_ * fVar17 * 1.1368684e-13;
      param_1[7] = auVar8._12_4_ * fVar17 * 1.1368684e-13;
      param_1[4] = auVar8._0_4_ * fVar17 * 1.1368684e-13;
      param_1[5] = auVar8._4_4_ * fVar17 * 1.1368684e-13;
      iVar4 = (int)sVar11 + (int)(short)uVar5 + (int)sVar13 + (int)sVar15 + (int)(short)uVar6 +
              (int)sVar12 + (int)sVar14 + (int)sVar16;
      uVar3 = iVar4 * 0x1000;
      *param_5 = iVar2 + *param_6;
      uVar1 = iVar4 * 0x1000 | 7;
      if (-1 < (int)uVar3) {
        uVar1 = uVar3;
      }
      *param_4 = *param_4 + (*param_7 >> 0x10) * ((int)uVar1 >> 0xf);
      param_3 = param_3 + 8;
      param_2 = param_2 - 1;
      param_1 = param_1 + 8;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

