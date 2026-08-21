
void memcpy_to_float_from_i16(float *param_1,short *param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  float *pfVar3;
  short *psVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  if (param_3 != 0) {
    if (7 < param_3) {
      uVar2 = param_3 & 0xfffffffffffffff8;
      pfVar3 = param_1 + 4;
      psVar4 = param_2 + 4;
      param_2 = param_2 + uVar2;
      param_1 = param_1 + uVar2;
      uVar5 = uVar2;
      do {
        uVar6 = *(undefined8 *)(psVar4 + -4);
        uVar8 = *(undefined8 *)psVar4;
        uVar5 = uVar5 - 8;
        psVar4 = psVar4 + 8;
        auVar7._0_4_ = (int)(short)uVar6;
        auVar7._4_4_ = (int)(short)((ulong)uVar6 >> 0x10);
        auVar7._8_4_ = (int)(short)((ulong)uVar6 >> 0x20);
        auVar7._12_4_ = (int)(short)((ulong)uVar6 >> 0x30);
        auVar9._0_4_ = (int)(short)uVar8;
        auVar9._4_4_ = (int)(short)((ulong)uVar8 >> 0x10);
        auVar9._8_4_ = (int)(short)((ulong)uVar8 >> 0x20);
        auVar9._12_4_ = (int)(short)((ulong)uVar8 >> 0x30);
        auVar7 = NEON_scvtf(auVar7,4);
        auVar9 = NEON_scvtf(auVar9,4);
        pfVar3[-2] = auVar7._8_4_ * 3.0517578e-05;
        pfVar3[-1] = auVar7._12_4_ * 3.0517578e-05;
        pfVar3[-4] = auVar7._0_4_ * 3.0517578e-05;
        pfVar3[-3] = auVar7._4_4_ * 3.0517578e-05;
        pfVar3[2] = auVar9._8_4_ * 3.0517578e-05;
        pfVar3[3] = auVar9._12_4_ * 3.0517578e-05;
        *pfVar3 = auVar9._0_4_ * 3.0517578e-05;
        pfVar3[1] = auVar9._4_4_ * 3.0517578e-05;
        pfVar3 = pfVar3 + 8;
      } while (uVar5 != 0);
      bVar1 = uVar2 == param_3;
      param_3 = param_3 - uVar2;
      if (bVar1) {
        return;
      }
    }
    do {
      param_3 = param_3 - 1;
      *param_1 = (float)(int)*param_2 * 3.0517578e-05;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}

