
void memcpy_to_float_from_p24(float *param_1,undefined1 (*param_2) [12],ulong param_3)

{
  undefined1 auVar1 [12];
  bool bVar2;
  float *pfVar3;
  undefined1 (*pauVar4) [12];
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if (param_3 != 0) {
    if ((3 < param_3) &&
       ((*param_2 + param_3 * 3 <= param_1 || ((undefined1 (*) [12])(param_1 + param_3) <= param_2))
       )) {
      uVar5 = param_3 & 0xfffffffffffffffc;
                    /* try { // try from 00a9850c to 00b98797 has its CatchHandler @ 00a98324 */
      pfVar3 = param_1;
      pauVar4 = param_2;
      uVar6 = uVar5;
      do {
        uVar6 = uVar6 - 4;
        auVar1 = *pauVar4;
        auVar7._0_5_ = (uint5)auVar1._0_3_ << 8;
        auVar7[5] = auVar1[3];
        auVar7[6] = auVar1[4];
        auVar7[7] = auVar1[5];
        auVar7[8] = 0;
        auVar7[9] = auVar1[6];
        auVar7[10] = auVar1[7];
        auVar7[0xb] = auVar1[8];
        auVar7[0xc] = 0;
        auVar7[0xd] = auVar1[9];
        auVar7[0xe] = auVar1[10];
        auVar7[0xf] = auVar1[0xb];
        auVar7 = NEON_scvtf(auVar7,4);
        pfVar3[2] = auVar7._8_4_ * 4.656613e-10;
        pfVar3[3] = auVar7._12_4_ * 4.656613e-10;
        *pfVar3 = auVar7._0_4_ * 4.656613e-10;
        pfVar3[1] = auVar7._4_4_ * 4.656613e-10;
        pfVar3 = pfVar3 + 4;
        pauVar4 = pauVar4 + 1;
      } while (uVar6 != 0);
      bVar2 = uVar5 == param_3;
      param_3 = param_3 - uVar5;
      param_2 = (undefined1 (*) [12])(*param_2 + uVar5 * 3);
      param_1 = param_1 + uVar5;
      if (bVar2) {
        return;
      }
    }
    do {
      param_3 = param_3 - 1;
      *param_1 = (float)(int)((uint)(byte)(*param_2)[0] << 8 | (uint)(byte)(*param_2)[1] << 0x10 |
                             (uint)(byte)(*param_2)[2] << 0x18) * 4.656613e-10;
      param_2 = (undefined1 (*) [12])(*param_2 + 3);
      param_1 = param_1 + 1;
                    /* try { // try from 00a98500 to 00b9850b has its CatchHandler @ 00a98784 */
    } while (param_3 != 0);
  }
  return;
}

