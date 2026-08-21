
void memcpy_to_float_from_q4_27(float *param_1,int *param_2,ulong param_3)

{
  undefined1 (*pauVar1) [16];
  bool bVar2;
  ulong uVar3;
  float *pfVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_3 != 0) {
    if (7 < param_3) {
      uVar3 = param_3 & 0xfffffffffffffff8;
      pfVar4 = param_1 + 4;
      pauVar5 = (undefined1 (*) [16])(param_2 + 4);
      param_2 = param_2 + uVar3;
      param_1 = param_1 + uVar3;
      uVar6 = uVar3;
      do {
        pauVar1 = pauVar5 + -1;
        auVar8 = *pauVar5;
        uVar6 = uVar6 - 8;
        pauVar5 = pauVar5 + 2;
        auVar7 = NEON_scvtf(*pauVar1,4);
        auVar8 = NEON_scvtf(auVar8,4);
        pfVar4[-2] = auVar7._8_4_ * 7.450581e-09;
        pfVar4[-1] = auVar7._12_4_ * 7.450581e-09;
        pfVar4[-4] = auVar7._0_4_ * 7.450581e-09;
        pfVar4[-3] = auVar7._4_4_ * 7.450581e-09;
        pfVar4[2] = auVar8._8_4_ * 7.450581e-09;
        pfVar4[3] = auVar8._12_4_ * 7.450581e-09;
        *pfVar4 = auVar8._0_4_ * 7.450581e-09;
        pfVar4[1] = auVar8._4_4_ * 7.450581e-09;
        pfVar4 = pfVar4 + 8;
      } while (uVar6 != 0);
      bVar2 = uVar3 == param_3;
      param_3 = param_3 - uVar3;
      if (bVar2) {
        return;
      }
    }
    do {
      param_3 = param_3 - 1;
      *param_1 = (float)*param_2 * 7.450581e-09;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}

