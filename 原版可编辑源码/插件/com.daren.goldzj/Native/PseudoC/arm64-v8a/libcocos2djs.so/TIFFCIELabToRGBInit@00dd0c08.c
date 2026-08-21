
undefined8 TIFFCIELabToRGBInit(uint *param_1,void *param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  
  *param_1 = 0x5dc;
  _TIFFmemcpy(param_1 + 7,param_2,0x54);
  fVar5 = (float)param_1[0x10];
  fVar7 = (float)param_1[0x16];
  uVar2 = *param_1;
  uVar3 = (ulong)uVar2;
  fVar8 = (float)param_1[0x19];
  param_1[1] = (uint)((fVar5 - fVar7) / (float)(int)uVar2);
  if (-1 < (int)uVar2) {
    lVar4 = 0;
    do {
      fVar5 = (float)NEON_ucvtf(param_1[0x13]);
      dVar6 = pow((double)(int)lVar4 / (double)(int)uVar3,1.0 / (double)fVar8);
      param_1[lVar4 + 0x1c] = (uint)(fVar5 * (float)dVar6);
      uVar3 = (ulong)(int)*param_1;
      bVar1 = lVar4 < (long)uVar3;
      lVar4 = lVar4 + 1;
    } while (bVar1);
    fVar5 = (float)param_1[0x10];
    fVar7 = (float)param_1[0x16];
  }
  fVar8 = (float)param_1[0x1a];
  param_1[2] = (uint)((fVar5 - fVar7) / (float)(int)uVar3);
  if (-1 < (int)uVar3) {
    lVar4 = 0;
    do {
      fVar5 = (float)NEON_ucvtf(param_1[0x14]);
      dVar6 = pow((double)(int)lVar4 / (double)(int)uVar3,1.0 / (double)fVar8);
      param_1[lVar4 + 0x5f9] = (uint)(fVar5 * (float)dVar6);
      uVar3 = (ulong)(int)*param_1;
      bVar1 = lVar4 < (long)uVar3;
      lVar4 = lVar4 + 1;
    } while (bVar1);
    fVar5 = (float)param_1[0x10];
    fVar7 = (float)param_1[0x16];
  }
  fVar8 = (float)param_1[0x1b];
  param_1[3] = (uint)((fVar5 - fVar7) / (float)(int)uVar3);
  if (-1 < (int)uVar3) {
    lVar4 = 0;
    do {
      fVar5 = (float)NEON_ucvtf(param_1[0x15]);
      dVar6 = pow((double)(int)lVar4 / (double)(int)uVar3,1.0 / (double)fVar8);
      param_1[lVar4 + 0xbd6] = (uint)(fVar5 * (float)dVar6);
      uVar3 = (ulong)(int)*param_1;
      bVar1 = lVar4 < (long)uVar3;
      lVar4 = lVar4 + 1;
    } while (bVar1);
  }
  param_1[4] = *param_3;
  param_1[5] = param_3[1];
  param_1[6] = param_3[2];
  return 0;
}

