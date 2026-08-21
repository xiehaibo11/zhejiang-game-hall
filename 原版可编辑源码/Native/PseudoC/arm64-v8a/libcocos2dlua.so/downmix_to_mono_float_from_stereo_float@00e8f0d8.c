
void downmix_to_mono_float_from_stereo_float(float *param_1,float *param_2,ulong param_3)

{
  bool bVar1;
  float *pfVar2;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  
  if (param_3 != 0) {
    if ((7 < param_3) && ((param_2 + param_3 * 2 <= param_1 || (param_1 + param_3 <= param_2)))) {
      uVar6 = param_3 & 0xfffffffffffffff8;
      pfVar7 = param_1 + 4;
      pfVar8 = param_2 + 8;
      param_2 = param_2 + uVar6 * 2;
      param_1 = param_1 + uVar6;
      uVar9 = uVar6;
      do {
        fVar10 = *pfVar8;
        fVar14 = pfVar8[1];
        fVar11 = pfVar8[2];
        fVar15 = pfVar8[3];
        fVar12 = pfVar8[4];
        fVar16 = pfVar8[5];
        fVar13 = pfVar8[6];
        fVar17 = pfVar8[7];
        fVar18 = pfVar8[-8];
        fVar20 = pfVar8[-7];
        fVar19 = pfVar8[-6];
        fVar21 = pfVar8[-5];
        pfVar2 = pfVar8 + -4;
        pfVar3 = pfVar8 + -3;
        pfVar4 = pfVar8 + -2;
        pfVar5 = pfVar8 + -1;
        uVar9 = uVar9 - 8;
        pfVar8 = pfVar8 + 0x10;
        *(ulong *)(pfVar7 + -2) = CONCAT44((*pfVar4 + *pfVar5) * 0.5,(*pfVar2 + *pfVar3) * 0.5);
        *(ulong *)(pfVar7 + -4) = CONCAT44((fVar19 + fVar21) * 0.5,(fVar18 + fVar20) * 0.5);
        *(ulong *)(pfVar7 + 2) = CONCAT44((fVar13 + fVar17) * 0.5,(fVar12 + fVar16) * 0.5);
        *(ulong *)pfVar7 = CONCAT44((fVar11 + fVar15) * 0.5,(fVar10 + fVar14) * 0.5);
        pfVar7 = pfVar7 + 8;
      } while (uVar9 != 0);
      bVar1 = uVar6 == param_3;
      param_3 = param_3 - uVar6;
      if (bVar1) {
        return;
      }
    }
    do {
      param_3 = param_3 - 1;
      *param_1 = (*param_2 + param_2[1]) * 0.5;
      param_1 = param_1 + 1;
      param_2 = param_2 + 2;
    } while (param_3 != 0);
  }
  return;
}

