
/* spine::PathConstraintPositionTimeline::apply(spine::Skeleton&, float, float,
   spine::Vector<spine::Event*>*, float, spine::MixBlend, spine::MixDirection) */

void spine::PathConstraintPositionTimeline::apply
               (undefined1 param_1_00 [16],float param_3,float param_5,CurveTimeline *param_1,
               long param_4,undefined8 param_6,int param_7)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  
  plVar4 = *(long **)(*(long *)(param_4 + 200) + (long)*(int *)(param_1 + 0x48) * 8);
  uVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
  if ((uVar2 & 1) == 0) {
    return;
  }
  pfVar3 = *(float **)(param_1 + 0x40);
  if (*pfVar3 <= param_3) {
    if (pfVar3[*(long *)(param_1 + 0x30) + -2] <= param_3) {
      fVar6 = pfVar3[*(long *)(param_1 + 0x30) + -1];
    }
    else {
      uVar2 = Animation::binarySearch((Vector *)(param_1 + 0x28),param_3,2);
      uVar5 = -(uVar2 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar2 & 0xffffffff) << 2;
      iVar1 = (int)uVar2;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      pfVar3 = (float *)(*(long *)(param_1 + 0x40) + uVar5);
      fVar6 = pfVar3[-1];
      fVar7 = (float)CurveTimeline::getCurvePercent
                               (param_1,(long)((iVar1 >> 1) + -1),
                                1.0 - (param_3 - *pfVar3) / (pfVar3[-2] - *pfVar3));
      fVar6 = fVar6 + fVar7 * (*(float *)(*(long *)(param_1 + 0x40) + uVar5 + 4) - fVar6);
    }
    if (param_7 == 0) {
      fVar7 = *(float *)(plVar4[1] + 0x68);
      goto LAB_00cef1bc;
    }
  }
  else {
    if (param_7 != 1) {
      if (param_7 == 0) {
        *(undefined4 *)(plVar4 + 7) = *(undefined4 *)(plVar4[1] + 0x68);
        return;
      }
      return;
    }
    fVar6 = *(float *)(plVar4[1] + 0x68);
  }
  fVar7 = *(float *)(plVar4 + 7);
LAB_00cef1bc:
  *(float *)(plVar4 + 7) = fVar7 + (fVar6 - fVar7) * param_5;
  return;
}

