
/* spine::TranslateTimeline::apply(spine::Skeleton&, float, float, spine::Vector<spine::Event*>*,
   float, spine::MixBlend, spine::MixDirection) */

void spine::TranslateTimeline::apply
               (undefined1 param_1_00 [16],float param_3,float param_5,CurveTimeline *param_1,
               long param_4,undefined8 param_6,int param_7)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  
  lVar4 = *(long *)(*(long *)(param_4 + 0x28) + (long)*(int *)(param_1 + 0x48) * 8);
  if (*(char *)(lVar4 + 0x95) != '\0') {
    pfVar3 = *(float **)(param_1 + 0x40);
    if (*pfVar3 <= param_3) {
      if (pfVar3[*(long *)(param_1 + 0x30) + -3] <= param_3) {
        uVar7 = *(undefined8 *)(pfVar3 + *(long *)(param_1 + 0x30) + -2);
      }
      else {
        uVar2 = Animation::binarySearch((Vector *)(param_1 + 0x28),param_3,3);
        uVar5 = -(uVar2 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar2 & 0xffffffff) << 2;
        pfVar3 = (float *)(*(long *)(param_1 + 0x40) + uVar5);
        uVar7 = *(undefined8 *)(pfVar3 + -2);
        fVar6 = (float)CurveTimeline::getCurvePercent
                                 (param_1,(long)((int)uVar2 / 3 + -1),
                                  1.0 - (param_3 - *pfVar3) / (pfVar3[-3] - *pfVar3));
        lVar1 = *(long *)(param_1 + 0x40) + uVar5;
        fVar9 = (float)uVar7;
        fVar10 = (float)((ulong)uVar7 >> 0x20);
        uVar7 = CONCAT44(fVar10 + (*(float *)(lVar1 + 8) - fVar10) * fVar6,
                         fVar9 + (*(float *)(lVar1 + 4) - fVar9) * fVar6);
      }
      fVar6 = (float)((ulong)uVar7 >> 0x20);
      if (param_7 - 1U < 2) {
        uVar8 = *(undefined8 *)(*(long *)(lVar4 + 8) + 0x34);
        fVar9 = (float)*(undefined8 *)(lVar4 + 0x40);
        fVar10 = (float)((ulong)*(undefined8 *)(lVar4 + 0x40) >> 0x20);
        uVar7 = CONCAT44(fVar10 + ((fVar6 + (float)((ulong)uVar8 >> 0x20)) - fVar10) * param_5,
                         fVar9 + (((float)uVar7 + (float)uVar8) - fVar9) * param_5);
      }
      else {
        if (param_7 == 3) {
          uVar8 = *(undefined8 *)(lVar4 + 0x40);
        }
        else {
          if (param_7 != 0) {
            return;
          }
          uVar8 = *(undefined8 *)(*(long *)(lVar4 + 8) + 0x34);
        }
        uVar7 = CONCAT44(fVar6 * param_5 + (float)((ulong)uVar8 >> 0x20),
                         (float)uVar7 * param_5 + (float)uVar8);
      }
    }
    else {
      if (param_7 != 1) {
        if (param_7 != 0) {
          return;
        }
        *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(*(long *)(lVar4 + 8) + 0x34);
        return;
      }
      uVar7 = *(undefined8 *)(*(long *)(lVar4 + 8) + 0x34);
      fVar6 = (float)*(undefined8 *)(lVar4 + 0x40);
      fVar9 = (float)((ulong)*(undefined8 *)(lVar4 + 0x40) >> 0x20);
      uVar7 = CONCAT44(fVar9 + ((float)((ulong)uVar7 >> 0x20) - fVar9) * param_5,
                       fVar6 + ((float)uVar7 - fVar6) * param_5);
    }
    *(undefined8 *)(lVar4 + 0x40) = uVar7;
  }
  return;
}

