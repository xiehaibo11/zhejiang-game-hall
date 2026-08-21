
/* spine::AnimationState::applyRotateTimeline(spine::RotateTimeline*, spine::Skeleton&, float,
   float, spine::MixBlend, spine::Vector<float>&, unsigned long, bool) */

void spine::AnimationState::applyRotateTimeline
               (undefined8 param_1_00,float param_4,CurveTimeline *param_1,long param_2,int param_5,
               long param_6,long param_7,ulong param_8)

{
  bool bVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  float *pfVar5;
  long *plVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((param_8 & 1) != 0) {
    *(undefined4 *)(*(long *)(param_6 + 0x18) + param_7 * 4) = 0;
  }
  if (param_4 != 1.0) {
    plVar6 = *(long **)(*(long *)(param_2 + 0x28) + (long)*(int *)(param_1 + 0x28) * 8);
    uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
    if ((uVar2 & 1) != 0) {
      pfVar3 = *(float **)(param_1 + 0x48);
      fVar8 = (float)param_1_00;
      if (*pfVar3 <= fVar8) {
        if (param_5 == 0) {
          pfVar5 = (float *)(plVar6[1] + 0x3c);
        }
        else {
          pfVar5 = (float *)(plVar6 + 9);
        }
        fVar13 = *pfVar5;
        if (pfVar3[*(long *)(param_1 + 0x38) + -2] <= fVar8) {
          fVar8 = *(float *)(plVar6[1] + 0x3c) + pfVar3[*(long *)(param_1 + 0x38) + -1];
        }
        else {
          uVar2 = Animation::binarySearch((Vector *)(param_1 + 0x30),fVar8,2);
          uVar7 = -(uVar2 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar2 & 0xffffffff) << 2;
          pfVar3 = (float *)(*(long *)(param_1 + 0x48) + uVar7);
          fVar11 = pfVar3[-1];
          fVar8 = (float)CurveTimeline::getCurvePercent
                                   (param_1,(long)(((int)uVar2 >> 1) + -1),
                                    1.0 - (fVar8 - *pfVar3) / (pfVar3[-2] - *pfVar3));
          fVar12 = *(float *)(*(long *)(param_1 + 0x48) + uVar7 + 4) - fVar11;
          fVar8 = *(float *)(plVar6[1] + 0x3c) +
                  fVar11 + fVar8 * (fVar12 - (float)((0x4000 - (int)(16384.5 - fVar12 / 360.0)) *
                                                    0x168));
          fVar8 = fVar8 - (float)((0x4000 - (int)(16384.5 - fVar8 / 360.0)) * 0x168);
        }
      }
      else {
        if (param_5 != 1) {
          if (param_5 != 0) {
            return;
          }
          *(undefined4 *)(plVar6 + 9) = *(undefined4 *)(plVar6[1] + 0x3c);
          return;
        }
        fVar13 = *(float *)(plVar6 + 9);
        fVar8 = *(float *)(plVar6[1] + 0x3c);
      }
      fVar8 = (fVar8 - fVar13) -
              (float)((0x4000 - (int)((fVar8 - fVar13) / -360.0 + 16384.5)) * 0x168);
      if (fVar8 == 0.0) {
        lVar4 = *(long *)(param_6 + 0x18);
        fVar12 = *(float *)(lVar4 + param_7 * 4);
      }
      else {
        fVar11 = 0.0;
        fVar12 = fVar8;
        if ((param_8 & 1) == 0) {
          pfVar3 = (float *)(*(long *)(param_6 + 0x18) + param_7 * 4);
          fVar11 = *pfVar3;
          fVar12 = pfVar3[1];
        }
        bVar1 = 0.0 <= fVar11;
        fVar9 = (float)MathUtil::sign(fVar12);
        fVar10 = (float)MathUtil::sign(fVar8);
        if (((fVar9 != fVar10) && (fVar12 = (float)MathUtil::abs(fVar12), fVar12 <= 90.0)) &&
           (fVar12 = (float)MathUtil::abs(fVar11), bVar1 = 0.0 < fVar8, 180.0 < fVar12)) {
          fVar12 = (float)MathUtil::sign(fVar11);
          fVar11 = fVar11 + fVar12 * 360.0;
        }
        fVar12 = (float)MathUtil::fmod(fVar11,360.0);
        fVar12 = (fVar8 + fVar11) - fVar12;
        if ((bool)(0.0 < fVar8 ^ bVar1)) {
          fVar11 = (float)MathUtil::sign(fVar11);
          fVar12 = fVar12 + fVar11 * 360.0;
        }
        lVar4 = *(long *)(param_6 + 0x18);
        *(float *)(lVar4 + param_7 * 4) = fVar12;
      }
      fVar13 = fVar13 + fVar12 * param_4;
      *(float *)(lVar4 + param_7 * 4 + 4) = fVar8;
      *(float *)(plVar6 + 9) = fVar13 - (float)((0x4000 - (int)(fVar13 / -360.0 + 16384.5)) * 0x168)
      ;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00cdf9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x18))(0,param_1_00,0x3f800000,param_1,param_2,0,param_5,0);
  return;
}

