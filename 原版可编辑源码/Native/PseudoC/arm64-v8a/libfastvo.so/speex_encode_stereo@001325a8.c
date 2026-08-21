
void speex_encode_stereo(float *param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  float *pfVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar7 = 1.0;
  if ((int)param_2 < 1) {
    fVar6 = 0.0;
    fVar5 = 0.0;
  }
  else {
    uVar2 = (ulong)param_2;
    pfVar3 = param_1 + 1;
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
    do {
      fVar8 = pfVar3[-1];
      fVar10 = *pfVar3;
      uVar2 = uVar2 - 1;
      pfVar3 = pfVar3 + 2;
      fVar9 = (fVar8 + fVar10) * 0.5;
      *param_1 = fVar9;
      fVar7 = fVar7 + fVar8 * fVar8;
      fVar6 = fVar6 + fVar10 * fVar10;
      fVar5 = fVar5 + fVar9 * fVar9;
      param_1 = param_1 + 1;
    } while (uVar2 != 0);
    fVar7 = fVar7 + 1.0;
  }
  speex_bits_pack(param_3,0xe,5);
  speex_bits_pack(param_3,9,4);
  dVar4 = log((double)(fVar7 / (fVar6 + 1.0)));
  speex_bits_pack(param_3,(float)(dVar4 * 4.0) <= 0.0,1);
  fVar9 = (float)(double)(long)(ABS((float)(dVar4 * 4.0)) + 0.5);
  fVar8 = 31.0;
  if (fVar9 <= 30.0) {
    fVar8 = fVar9;
  }
  speex_bits_pack(param_3,(int)fVar8,5);
  uVar1 = scal_quant((int)((fVar5 / (fVar7 + fVar6)) * 32767.0),&DAT_001372f0,4);
  speex_bits_pack(param_3,uVar1,2);
  return;
}

