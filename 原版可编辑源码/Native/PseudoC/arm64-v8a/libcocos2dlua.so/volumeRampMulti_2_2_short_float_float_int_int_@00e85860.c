
/* void cocos2d::experimental::volumeRampMulti<2, 2, short, float, float, int, int>(short*, unsigned
   long, float const*, int*, float*, float const*, int*, int) */

void cocos2d::experimental::volumeRampMulti<2,2,short,float,float,int,int>
               (short *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

{
  float *pfVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = *param_5;
  if (param_4 == (int *)0x0) {
    fVar6 = param_5[1];
    do {
      fVar8 = *param_3 * fVar5 + 384.0;
      fVar7 = 4.59163e-41;
      if ((int)fVar8 < 0x43c08000) {
        fVar7 = fVar8;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar8) {
        sVar2 = SUB42(fVar7,0);
      }
      *param_1 = sVar2;
      fVar5 = fVar5 + *param_6;
      *param_5 = fVar5;
      pfVar1 = param_3 + 1;
      param_3 = param_3 + 2;
      fVar8 = *pfVar1 * fVar6 + 384.0;
      fVar7 = 4.59163e-41;
      if ((int)fVar8 < 0x43c08000) {
        fVar7 = fVar8;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar8) {
        sVar2 = SUB42(fVar7,0);
      }
      param_1[1] = sVar2;
      param_2 = param_2 - 1;
      param_1 = param_1 + 2;
      fVar6 = fVar6 + param_6[1];
      param_5[1] = fVar6;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar6 = *param_3;
      if (fVar6 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else if (16.0 <= fVar6) {
        iVar3 = 0x7fffffff;
      }
      else {
        fVar7 = 0.5;
        if (fVar6 * 1.3421773e+08 <= 0.0) {
          fVar7 = -0.5;
        }
        iVar3 = (int)(fVar7 + fVar6 * 1.3421773e+08);
      }
      fVar7 = fVar6 * fVar5 + 384.0;
      fVar6 = 4.59163e-41;
      if ((int)fVar7 < 0x43c08000) {
        fVar6 = fVar7;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar7) {
        sVar2 = SUB42(fVar6,0);
      }
      *param_1 = sVar2;
      fVar5 = fVar5 + *param_6;
      *param_5 = fVar5;
      fVar7 = param_3[1];
      fVar6 = param_5[1];
      if (fVar7 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar7) {
        iVar4 = 0x7fffffff;
      }
      else {
        fVar8 = 0.5;
        if (fVar7 * 1.3421773e+08 <= 0.0) {
          fVar8 = -0.5;
        }
        iVar4 = (int)(fVar8 + fVar7 * 1.3421773e+08);
      }
      fVar8 = fVar7 * fVar6 + 384.0;
      fVar7 = 4.59163e-41;
      if ((int)fVar8 < 0x43c08000) {
        fVar7 = fVar8;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar8) {
        sVar2 = SUB42(fVar7,0);
      }
      param_1[1] = sVar2;
      iVar4 = iVar4 + iVar3;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      param_5[1] = fVar6 + param_6[1];
      param_3 = param_3 + 2;
      *param_4 = *param_4 + (*param_7 >> 0x10) * (iVar4 >> 0xd);
      param_2 = param_2 - 1;
      param_1 = param_1 + 2;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

