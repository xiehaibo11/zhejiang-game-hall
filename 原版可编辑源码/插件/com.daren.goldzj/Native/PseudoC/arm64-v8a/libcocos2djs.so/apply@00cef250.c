
/* spine::PathConstraintSpacingTimeline::apply(spine::Skeleton&, float, float,
   spine::Vector<spine::Event*>*, float, spine::MixBlend, spine::MixDirection) */

void spine::PathConstraintSpacingTimeline::apply
               (undefined1 param_1_00 [16],float param_3,float param_5,CurveTimeline *param_1,
               long param_4,undefined8 param_6,int param_7)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  
  plVar5 = *(long **)(*(long *)(param_4 + 200) + (long)*(int *)(param_1 + 0x48) * 8);
  uVar2 = (**(code **)(*plVar5 + 0x20))(plVar5);
  if ((uVar2 & 1) == 0) {
    return;
  }
  pfVar3 = *(float **)(param_1 + 0x40);
  if (*pfVar3 <= param_3) {
    if (pfVar3[*(long *)(param_1 + 0x30) + -2] <= param_3) {
      fVar6 = pfVar3[*(long *)(param_1 + 0x30) + -1];
    }
    else {
      iVar1 = Animation::binarySearch((Vector *)(param_1 + 0x28),param_3,2);
      lVar4 = *(long *)(param_1 + 0x40);
      fVar7 = *(float *)(lVar4 + (long)iVar1 * 4);
      fVar6 = *(float *)(lVar4 + (long)(iVar1 + -1) * 4);
      fVar7 = (float)CurveTimeline::getCurvePercent
                               (param_1,(long)(iVar1 / 2 + -1),
                                1.0 - (param_3 - fVar7) /
                                      (*(float *)(lVar4 + (long)(iVar1 + -2) * 4) - fVar7));
      fVar6 = fVar6 + fVar7 * (*(float *)(*(long *)(param_1 + 0x40) + (long)(iVar1 + 1) * 4) - fVar6
                              );
    }
    if (param_7 == 0) {
      fVar7 = *(float *)(plVar5[1] + 0x6c);
      goto LAB_00cef3b0;
    }
  }
  else {
    if (param_7 != 1) {
      if (param_7 == 0) {
        *(undefined4 *)((long)plVar5 + 0x3c) = *(undefined4 *)(plVar5[1] + 0x6c);
        return;
      }
      return;
    }
    fVar6 = *(float *)(plVar5[1] + 0x6c);
  }
  fVar7 = *(float *)((long)plVar5 + 0x3c);
LAB_00cef3b0:
  *(float *)((long)plVar5 + 0x3c) = fVar7 + (fVar6 - fVar7) * param_5;
  return;
}

