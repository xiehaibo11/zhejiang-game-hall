
/* spine::RotateTimeline::apply(spine::Skeleton&, float, float, spine::Vector<spine::Event*>*,
   float, spine::MixBlend, spine::MixDirection) */

void spine::RotateTimeline::apply
               (undefined1 param_1_00 [16],float param_3,float param_5,CurveTimeline *param_1,
               Skeleton *param_4,undefined8 param_6,int param_7)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = Skeleton::getBones(param_4);
  lVar1 = *(long *)(*(long *)(lVar1 + 0x18) + (long)*(int *)(param_1 + 0x28) * 8);
  if (*(char *)(lVar1 + 0x95) == '\0') {
    return;
  }
  pfVar3 = *(float **)(param_1 + 0x48);
  if (*pfVar3 <= param_3) {
    if (pfVar3[*(long *)(param_1 + 0x38) + -2] <= param_3) {
      fVar5 = pfVar3[*(long *)(param_1 + 0x38) + -1];
      if (param_7 - 1U < 2) {
        fVar6 = *(float *)(lVar1 + 0x48);
        fVar5 = fVar5 + (*(float *)(*(long *)(lVar1 + 8) + 0x3c) - fVar6);
        fVar5 = fVar5 - (float)((0x4000 - (int)(fVar5 / -360.0 + 16384.5)) * 0x168);
      }
      else {
        if (param_7 == 0) {
          fVar5 = fVar5 * param_5;
          param_5 = *(float *)(*(long *)(lVar1 + 8) + 0x3c);
          goto LAB_00cf0464;
        }
        if (param_7 != 3) {
          return;
        }
        fVar6 = *(float *)(lVar1 + 0x48);
      }
      fVar6 = fVar6 + fVar5 * param_5;
    }
    else {
      uVar2 = Animation::binarySearch((Vector *)(param_1 + 0x30),param_3,2);
      uVar4 = -(uVar2 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar2 & 0xffffffff) << 2;
      pfVar3 = (float *)(*(long *)(param_1 + 0x48) + uVar4);
      fVar7 = pfVar3[-1];
      fVar5 = (float)CurveTimeline::getCurvePercent
                               (param_1,(long)(((int)uVar2 >> 1) + -1),
                                1.0 - (param_3 - *pfVar3) / (pfVar3[-2] - *pfVar3));
      fVar6 = *(float *)(*(long *)(param_1 + 0x48) + uVar4 + 4) - fVar7;
      fVar7 = fVar7 + fVar5 * (fVar6 - (float)((0x4000 - (int)(fVar6 / -360.0 + 16384.5)) * 0x168));
      if (param_7 - 1U < 2) {
        fVar6 = *(float *)(lVar1 + 0x48);
        fVar7 = fVar7 + (*(float *)(*(long *)(lVar1 + 8) + 0x3c) - fVar6);
      }
      else {
        if (param_7 == 0) {
          fVar5 = (fVar7 - (float)((0x4000 - (int)(fVar7 / -360.0 + 16384.5)) * 0x168)) * param_5 +
                  *(float *)(*(long *)(lVar1 + 8) + 0x3c);
          goto LAB_00cf0468;
        }
        if (param_7 != 3) {
          return;
        }
        fVar6 = *(float *)(lVar1 + 0x48);
      }
      fVar6 = fVar6 + (fVar7 - (float)((0x4000 - (int)(fVar7 / -360.0 + 16384.5)) * 0x168)) *
                      param_5;
    }
    *(float *)(lVar1 + 0x48) = fVar6;
  }
  else {
    if (param_7 != 1) {
      if (param_7 != 0) {
        return;
      }
      *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)(*(long *)(lVar1 + 8) + 0x3c);
      return;
    }
    fVar5 = *(float *)(lVar1 + 0x48);
    fVar6 = *(float *)(*(long *)(lVar1 + 8) + 0x3c) - fVar5;
    param_5 = (fVar6 - (float)((0x4000 - (int)(fVar6 / -360.0 + 16384.5)) * 0x168)) * param_5;
LAB_00cf0464:
    fVar5 = fVar5 + param_5;
LAB_00cf0468:
    *(float *)(lVar1 + 0x48) = fVar5;
  }
  return;
}

