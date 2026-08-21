
void TIFFXYZToRGB(float param_1,float param_2,float param_3,int *param_4,uint *param_5,uint *param_6
                 ,uint *param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = (float)param_4[7] * param_1 + (float)param_4[8] * param_2 + (float)param_4[9] * param_3;
  fVar6 = (float)param_4[0x16];
  fVar8 = (float)param_4[0x17];
  fVar7 = (float)param_4[10] * param_1 + (float)param_4[0xb] * param_2 +
          (float)param_4[0xc] * param_3;
  fVar9 = (float)param_4[0x18];
  if (fVar5 <= fVar6) {
    fVar5 = fVar6;
  }
  fVar4 = (float)param_4[0xd] * param_1 + (float)param_4[0xe] * param_2 +
          (float)param_4[0xf] * param_3;
  if (fVar7 <= fVar8) {
    fVar7 = fVar8;
  }
  if (fVar4 <= fVar9) {
    fVar4 = fVar9;
  }
  if ((float)param_4[0x10] <= fVar5) {
    fVar5 = (float)param_4[0x10];
  }
  if ((float)param_4[0x11] <= fVar7) {
    fVar7 = (float)param_4[0x11];
  }
  iVar2 = (int)((fVar5 - fVar6) / (float)param_4[1]);
  if ((float)param_4[0x12] <= fVar4) {
    fVar4 = (float)param_4[0x12];
  }
  iVar3 = *param_4;
  if (iVar2 <= *param_4) {
    iVar3 = iVar2;
  }
  fVar5 = 0.5;
  if ((float)param_4[(long)iVar3 + 0x1c] <= 0.0) {
    fVar5 = -0.5;
  }
  *param_5 = (int)(fVar5 + (float)param_4[(long)iVar3 + 0x1c]);
  iVar3 = (int)((fVar7 - fVar8) / (float)param_4[2]);
  iVar2 = *param_4;
  if (iVar3 <= *param_4) {
    iVar2 = iVar3;
  }
  fVar5 = 0.5;
  if ((float)param_4[(long)iVar2 + 0x5f9] <= 0.0) {
    fVar5 = -0.5;
  }
  *param_6 = (int)(fVar5 + (float)param_4[(long)iVar2 + 0x5f9]);
  iVar3 = (int)((fVar4 - fVar9) / (float)param_4[3]);
  iVar2 = *param_4;
  if (iVar3 <= *param_4) {
    iVar2 = iVar3;
  }
  fVar5 = 0.5;
  if ((float)param_4[(long)iVar2 + 0xbd6] <= 0.0) {
    fVar5 = -0.5;
  }
  *param_7 = (int)(fVar5 + (float)param_4[(long)iVar2 + 0xbd6]);
  uVar1 = *param_5;
  if ((uint)param_4[0x13] <= *param_5) {
    uVar1 = param_4[0x13];
  }
  *param_5 = uVar1;
  uVar1 = *param_6;
  if ((uint)param_4[0x14] <= *param_6) {
    uVar1 = param_4[0x14];
  }
  *param_6 = uVar1;
  uVar1 = *param_7;
  if ((uint)param_4[0x15] <= *param_7) {
    uVar1 = param_4[0x15];
  }
  *param_7 = uVar1;
  return;
}

