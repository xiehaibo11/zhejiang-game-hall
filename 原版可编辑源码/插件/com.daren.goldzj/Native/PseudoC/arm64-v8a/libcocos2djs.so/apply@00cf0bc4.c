
/* spine::ShearTimeline::apply(spine::Skeleton&, float, float, spine::Vector<spine::Event*>*, float,
   spine::MixBlend, spine::MixDirection) */

void spine::ShearTimeline::apply
               (undefined1 param_1_00 [16],float param_3,float param_5,CurveTimeline *param_1,
               long param_4,undefined8 param_6,int param_7)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar4 = *(long *)(*(long *)(param_4 + 0x28) + (long)*(int *)(param_1 + 0x48) * 8);
  if (*(char *)(lVar4 + 0x95) != '\0') {
    pfVar2 = *(float **)(param_1 + 0x40);
    if (*pfVar2 <= param_3) {
      lVar3 = *(long *)(param_1 + 0x30);
      if (pfVar2[lVar3 + -3] <= param_3) {
        fVar7 = pfVar2[lVar3 + -2];
        fVar8 = pfVar2[lVar3 + -1];
      }
      else {
        iVar1 = Animation::binarySearch((Vector *)(param_1 + 0x28),param_3,3);
        lVar3 = *(long *)(param_1 + 0x40);
        fVar5 = *(float *)(lVar3 + (long)iVar1 * 4);
        fVar7 = *(float *)(lVar3 + (long)(iVar1 + -2) * 4);
        fVar8 = *(float *)(lVar3 + (long)(iVar1 + -1) * 4);
        fVar5 = (float)CurveTimeline::getCurvePercent
                                 (param_1,(long)(iVar1 / 3 + -1),
                                  1.0 - (param_3 - fVar5) /
                                        (*(float *)(lVar3 + (long)(iVar1 + -3) * 4) - fVar5));
        fVar7 = fVar7 + (*(float *)(*(long *)(param_1 + 0x40) + (long)(iVar1 + 1) * 4) - fVar7) *
                        fVar5;
        fVar8 = fVar8 + (*(float *)(*(long *)(param_1 + 0x40) + (long)(iVar1 + 2) * 4) - fVar8) *
                        fVar5;
      }
      if (param_7 - 1U < 2) {
        uVar6 = *(undefined8 *)(*(long *)(lVar4 + 8) + 0x48);
        fVar5 = (float)*(undefined8 *)(lVar4 + 0x54);
        fVar9 = (float)((ulong)*(undefined8 *)(lVar4 + 0x54) >> 0x20);
        uVar6 = CONCAT44(fVar9 + ((fVar8 + (float)((ulong)uVar6 >> 0x20)) - fVar9) * param_5,
                         fVar5 + ((fVar7 + (float)uVar6) - fVar5) * param_5);
      }
      else {
        if (param_7 != 3) {
          if (param_7 != 0) {
            return;
          }
          *(float *)(lVar4 + 0x54) = param_5 * fVar7 + *(float *)(*(long *)(lVar4 + 8) + 0x48);
          *(float *)(lVar4 + 0x58) = param_5 * fVar8 + *(float *)(*(long *)(lVar4 + 8) + 0x4c);
          return;
        }
        uVar6 = CONCAT44(fVar8 * param_5 + (float)((ulong)*(undefined8 *)(lVar4 + 0x54) >> 0x20),
                         fVar7 * param_5 + (float)*(undefined8 *)(lVar4 + 0x54));
      }
    }
    else {
      if (param_7 != 1) {
        if (param_7 != 0) {
          return;
        }
        *(undefined8 *)(lVar4 + 0x54) = *(undefined8 *)(*(long *)(lVar4 + 8) + 0x48);
        return;
      }
      uVar6 = *(undefined8 *)(*(long *)(lVar4 + 8) + 0x48);
      fVar7 = (float)*(undefined8 *)(lVar4 + 0x54);
      fVar8 = (float)((ulong)*(undefined8 *)(lVar4 + 0x54) >> 0x20);
      uVar6 = CONCAT44(fVar8 + ((float)((ulong)uVar6 >> 0x20) - fVar8) * param_5,
                       fVar7 + ((float)uVar6 - fVar7) * param_5);
    }
    *(undefined8 *)(lVar4 + 0x54) = uVar6;
  }
  return;
}

