
void memcpy_to_u8_from_float(float *param_1,float *param_2,ulong param_3)

{
  float *pfVar1;
  float fVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_3 != 0) {
    if ((3 < param_3) &&
       ((param_2 + param_3 <= param_1 || ((float *)((long)param_1 + param_3) <= param_2)))) {
      uVar6 = param_3 & 0xfffffffffffffffc;
      pfVar1 = (float *)((long)param_1 + uVar6);
      pfVar5 = param_2;
      uVar7 = uVar6;
      do {
        uVar7 = uVar7 - 4;
        auVar8._0_4_ = *pfVar5 + 98305.0;
        auVar8._4_4_ = pfVar5[1] + 98305.0;
        auVar8._8_4_ = pfVar5[2] + 98305.0;
        auVar8._12_4_ = pfVar5[3] + 98305.0;
        auVar9._8_4_ = 0x47c000ff;
        auVar9._0_8_ = 0x47c000ff47c000ff;
        auVar9._12_4_ = 0x47c000ff;
        auVar9 = NEON_smin(auVar8,auVar9,4);
        auVar3._8_4_ = 0x47c00000;
        auVar3._0_8_ = 0x47c0000047c00000;
        auVar3._12_4_ = 0x47c00000;
        auVar9 = NEON_smax(auVar9,auVar3,4);
        *param_1 = (float)CONCAT13(auVar9[0xc],CONCAT12(auVar9[8],CONCAT11(auVar9[4],auVar9[0])));
        param_1 = param_1 + 1;
        pfVar5 = pfVar5 + 4;
      } while (uVar7 != 0);
      bVar4 = uVar6 == param_3;
      param_3 = param_3 - uVar6;
      param_2 = param_2 + uVar6;
      param_1 = pfVar1;
      if (bVar4) {
        return;
      }
    }
    do {
      param_3 = param_3 - 1;
      fVar2 = *param_2 + 98305.0;
      if (0x47c000fe < (int)(*param_2 + 98305.0)) {
        fVar2 = 98305.99;
      }
      if ((int)fVar2 < 0x47c00001) {
        fVar2 = 0.0;
      }
      *(char *)param_1 = SUB41(fVar2,0);
      param_2 = param_2 + 1;
      param_1 = (float *)((long)param_1 + 1);
    } while (param_3 != 0);
  }
  return;
}

