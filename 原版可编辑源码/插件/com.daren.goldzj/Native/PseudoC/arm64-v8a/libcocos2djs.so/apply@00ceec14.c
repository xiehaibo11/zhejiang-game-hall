
/* spine::PathConstraintMixTimeline::apply(spine::Skeleton&, float, float,
   spine::Vector<spine::Event*>*, float, spine::MixBlend, spine::MixDirection) */

void spine::PathConstraintMixTimeline::apply
               (undefined1 param_1_00 [16],float param_3,float param_5,CurveTimeline *param_1,
               long param_4,undefined8 param_6,int param_7)

{
  ulong uVar1;
  float *pfVar2;
  long *plVar3;
  ulong uVar4;
  float fVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  plVar3 = *(long **)(*(long *)(param_4 + 200) + (long)*(int *)(param_1 + 0x48) * 8);
  uVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
  if ((uVar1 & 1) != 0) {
    pfVar2 = *(float **)(param_1 + 0x40);
    if (*pfVar2 <= param_3) {
      if (pfVar2[*(long *)(param_1 + 0x30) + -3] <= param_3) {
        uVar6 = *(undefined8 *)(pfVar2 + *(long *)(param_1 + 0x30) + -2);
      }
      else {
        uVar1 = Animation::binarySearch((Vector *)(param_1 + 0x28),param_3,3);
        uVar4 = -(uVar1 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar1 & 0xffffffff) << 2;
        pfVar2 = (float *)(*(long *)(param_1 + 0x40) + uVar4);
        uVar6 = *(undefined8 *)(pfVar2 + -2);
        fVar5 = (float)CurveTimeline::getCurvePercent
                                 (param_1,(long)((int)uVar1 / 3 + -1),
                                  1.0 - (param_3 - *pfVar2) / (pfVar2[-3] - *pfVar2));
        lVar7 = *(long *)(param_1 + 0x40) + uVar4;
        fVar8 = (float)uVar6;
        fVar9 = (float)((ulong)uVar6 >> 0x20);
        uVar6 = CONCAT44(fVar9 + (*(float *)(lVar7 + 8) - fVar9) * fVar5,
                         fVar8 + (*(float *)(lVar7 + 4) - fVar8) * fVar5);
      }
      if (param_7 == 0) {
        lVar7 = *(long *)(plVar3[1] + 0x70);
      }
      else {
        lVar7 = plVar3[8];
      }
    }
    else {
      if (param_7 != 1) {
        if (param_7 != 0) {
          return;
        }
        plVar3[8] = *(long *)(plVar3[1] + 0x70);
        return;
      }
      lVar7 = plVar3[8];
      uVar6 = *(undefined8 *)(plVar3[1] + 0x70);
    }
    fVar5 = (float)((ulong)lVar7 >> 0x20);
    plVar3[8] = CONCAT44(fVar5 + ((float)((ulong)uVar6 >> 0x20) - fVar5) * param_5,
                         (float)lVar7 + ((float)uVar6 - (float)lVar7) * param_5);
  }
  return;
}

