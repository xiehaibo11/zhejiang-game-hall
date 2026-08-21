
/* gjkepa2_impl::EPA::getedgedist(gjkepa2_impl::EPA::sFace*, gjkepa2_impl::GJK::sSV*,
   gjkepa2_impl::GJK::sSV*, float&) */

undefined8 __thiscall
gjkepa2_impl::EPA::getedgedist(EPA *this,sFace *param_1,sSV *param_2,sSV *param_3,float *param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar2 = *(float *)(param_3 + 0x10);
  fVar4 = *(float *)(param_3 + 0x14);
  fVar7 = *(float *)(param_2 + 0x10);
  fVar6 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_3 + 0x18);
  fVar5 = *(float *)(param_2 + 0x18);
  fVar10 = fVar4 - fVar6;
  fVar9 = fVar3 - fVar5;
  fVar11 = fVar2 - fVar7;
  if (0.0 <= fVar5 * (fVar11 * *(float *)(param_1 + 4) - fVar10 * *(float *)param_1) +
             fVar7 * (fVar10 * *(float *)(param_1 + 8) - fVar9 * *(float *)(param_1 + 4)) +
             fVar6 * (fVar9 * *(float *)param_1 - fVar11 * *(float *)(param_1 + 8))) {
    uVar1 = 0;
  }
  else {
    if (fVar7 * fVar11 + fVar6 * fVar10 + fVar5 * fVar9 <= 0.0) {
      if (0.0 <= fVar2 * fVar11 + fVar4 * fVar10 + fVar3 * fVar9) {
        fVar8 = fVar2 * fVar7 + fVar4 * fVar6 + fVar3 * fVar5;
        fVar2 = ((fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) *
                 (fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) - fVar8 * fVar8) /
                (fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
        if (fVar2 <= 0.0) {
          fVar2 = 0.0;
        }
      }
      else {
        fVar2 = fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3;
      }
    }
    else {
      fVar2 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
    }
    fVar3 = SQRT(fVar2);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(fVar2);
    }
    uVar1 = 1;
    *param_4 = fVar3;
  }
  return uVar1;
}

