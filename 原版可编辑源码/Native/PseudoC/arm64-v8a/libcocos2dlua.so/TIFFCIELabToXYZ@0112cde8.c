
void TIFFCIELabToXYZ(long param_1,uint param_2,int param_3,int param_4,float *param_5,float *param_6
                    ,float *param_7)

{
  float fVar1;
  float fVar2;
  
  fVar1 = ((float)param_2 * 100.0) / 255.0;
  if (8.856 <= fVar1) {
    fVar1 = (fVar1 + 16.0) / 116.0;
    *param_6 = fVar1 * fVar1 * fVar1 * *(float *)(param_1 + 0x14);
  }
  else {
    fVar1 = (fVar1 * *(float *)(param_1 + 0x14)) / 903.292;
    *param_6 = fVar1;
    fVar1 = (fVar1 / *(float *)(param_1 + 0x14)) * 7.787 + 0.13793103;
  }
  fVar2 = (float)param_3 / 500.0 + fVar1;
  if (0.2069 <= fVar2) {
    fVar2 = fVar2 * fVar2 * *(float *)(param_1 + 0x10) * fVar2;
  }
  else {
    fVar2 = (*(float *)(param_1 + 0x10) * (fVar2 + -0.13793)) / 7.787;
  }
  *param_5 = fVar2;
  fVar1 = fVar1 + (float)param_4 / -200.0;
  if (fVar1 < 0.2069) {
    *param_7 = ((fVar1 + -0.13793) * *(float *)(param_1 + 0x18)) / 7.787;
    return;
  }
  *param_7 = fVar1 * fVar1 * fVar1 * *(float *)(param_1 + 0x18);
  return;
}

