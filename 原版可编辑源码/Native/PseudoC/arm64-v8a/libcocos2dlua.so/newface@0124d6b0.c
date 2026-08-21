
/* gjkepa2_impl::EPA::newface(gjkepa2_impl::GJK::sSV*, gjkepa2_impl::GJK::sSV*,
   gjkepa2_impl::GJK::sSV*, bool) */

sFace * __thiscall
gjkepa2_impl::EPA::newface(EPA *this,sSV *param_1,sSV *param_2,sSV *param_3,bool param_4)

{
  sFace *psVar1;
  ulong uVar2;
  undefined4 uVar3;
  sFace *psVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  psVar4 = *(sFace **)(this + 0x3870);
  if (psVar4 == (sFace *)0x0) {
    *(undefined4 *)this = 5;
  }
  else {
    if (*(long *)(psVar4 + 0x50) != 0) {
      *(undefined8 *)(*(long *)(psVar4 + 0x50) + 0x48) = *(undefined8 *)(psVar4 + 0x48);
    }
    if (*(long *)(psVar4 + 0x48) != 0) {
      *(undefined8 *)(*(long *)(psVar4 + 0x48) + 0x50) = *(undefined8 *)(psVar4 + 0x50);
    }
    if (*(sFace **)(this + 0x3870) == psVar4) {
      *(undefined8 *)(this + 0x3870) = *(undefined8 *)(psVar4 + 0x50);
    }
    *(int *)(this + 0x3878) = *(int *)(this + 0x3878) + -1;
    *(undefined8 *)(psVar4 + 0x48) = 0;
    *(undefined8 *)(psVar4 + 0x50) = *(undefined8 *)(this + 0x3860);
    if (*(long *)(this + 0x3860) != 0) {
      *(sFace **)(*(long *)(this + 0x3860) + 0x48) = psVar4;
    }
    *(sFace **)(this + 0x3860) = psVar4;
    *(int *)(this + 0x3868) = *(int *)(this + 0x3868) + 1;
    psVar4[0x5b] = (sFace)0x0;
    *(sSV **)(psVar4 + 0x18) = param_1;
    *(sSV **)(psVar4 + 0x20) = param_2;
    *(sSV **)(psVar4 + 0x28) = param_3;
    fVar5 = *(float *)(param_2 + 0x10) - *(float *)(param_1 + 0x10);
    fVar7 = *(float *)(param_3 + 0x10) - *(float *)(param_1 + 0x10);
    fVar6 = *(float *)(param_2 + 0x14) - *(float *)(param_1 + 0x14);
    fVar10 = *(float *)(param_2 + 0x18) - *(float *)(param_1 + 0x18);
    fVar9 = *(float *)(param_3 + 0x14) - *(float *)(param_1 + 0x14);
    fVar11 = *(float *)(param_3 + 0x18) - *(float *)(param_1 + 0x18);
    fVar8 = fVar6 * fVar11 - fVar10 * fVar9;
    fVar10 = fVar10 * fVar7 - fVar5 * fVar11;
    fVar5 = fVar5 * fVar9 - fVar6 * fVar7;
    *(float *)psVar4 = fVar8;
    *(float *)(psVar4 + 4) = fVar10;
    *(float *)(psVar4 + 8) = fVar5;
    fVar5 = fVar8 * fVar8 + fVar10 * fVar10 + fVar5 * fVar5;
    fVar6 = SQRT(fVar5);
    *(undefined4 *)(psVar4 + 0xc) = 0;
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar5);
    }
    if (fVar6 <= 0.0001) {
      uVar3 = 2;
    }
    else {
      psVar1 = psVar4 + 0x10;
      uVar2 = getedgedist(this,psVar4,param_1,param_2,(float *)psVar1);
      if ((((uVar2 & 1) == 0) &&
          (uVar2 = getedgedist(this,psVar4,param_2,param_3,(float *)psVar1), (uVar2 & 1) == 0)) &&
         (uVar2 = getedgedist(this,psVar4,param_3,param_1,(float *)psVar1), (uVar2 & 1) == 0)) {
        *(float *)(psVar4 + 0x10) =
             (*(float *)(param_1 + 0x10) * *(float *)psVar4 +
              *(float *)(param_1 + 0x14) * *(float *)(psVar4 + 4) +
             *(float *)(param_1 + 0x18) * *(float *)(psVar4 + 8)) / fVar6;
      }
      fVar6 = 1.0 / fVar6;
      *(float *)psVar4 = fVar6 * *(float *)psVar4;
      *(float *)(psVar4 + 4) = fVar6 * *(float *)(psVar4 + 4);
      *(float *)(psVar4 + 8) = fVar6 * *(float *)(psVar4 + 8);
      if (param_4) {
        return psVar4;
      }
      if (-1e-05 <= *(float *)psVar1) {
        return psVar4;
      }
      uVar3 = 3;
    }
    *(undefined4 *)this = uVar3;
    if (*(long *)(psVar4 + 0x50) != 0) {
      *(undefined8 *)(*(long *)(psVar4 + 0x50) + 0x48) = *(undefined8 *)(psVar4 + 0x48);
    }
    if (*(long *)(psVar4 + 0x48) != 0) {
      *(undefined8 *)(*(long *)(psVar4 + 0x48) + 0x50) = *(undefined8 *)(psVar4 + 0x50);
    }
    if (*(sFace **)(this + 0x3860) == psVar4) {
      *(undefined8 *)(this + 0x3860) = *(undefined8 *)(psVar4 + 0x50);
    }
    *(int *)(this + 0x3868) = *(int *)(this + 0x3868) + -1;
    *(undefined8 *)(psVar4 + 0x48) = 0;
    *(undefined8 *)(psVar4 + 0x50) = *(undefined8 *)(this + 0x3870);
    if (*(long *)(this + 0x3870) != 0) {
      *(sFace **)(*(long *)(this + 0x3870) + 0x48) = psVar4;
    }
    *(sFace **)(this + 0x3870) = psVar4;
    *(int *)(this + 0x3878) = *(int *)(this + 0x3878) + 1;
  }
  return (sFace *)0x0;
}

