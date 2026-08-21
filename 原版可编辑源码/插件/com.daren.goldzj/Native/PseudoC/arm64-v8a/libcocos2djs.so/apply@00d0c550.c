
/* spine::TransformConstraintTimeline::apply(spine::Skeleton&, float, float,
   spine::Vector<spine::Event*>*, float, spine::MixBlend, spine::MixDirection) */

void spine::TransformConstraintTimeline::apply
               (undefined1 param_1_00 [16],float param_3,float param_5,CurveTimeline *param_1,
               long param_4,undefined8 param_6,int param_7)

{
  ulong uVar1;
  float *pfVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  
  plVar4 = *(long **)(*(long *)(param_4 + 0xa8) + (long)*(int *)(param_1 + 0x48) * 8);
  uVar1 = (**(code **)(*plVar4 + 0x20))(plVar4);
  if ((uVar1 & 1) != 0) {
    pfVar2 = *(float **)(param_1 + 0x40);
    if (*pfVar2 <= param_3) {
      lVar3 = *(long *)(param_1 + 0x30);
      if (pfVar2[lVar3 + -5] <= param_3) {
        uVar9 = *(undefined8 *)(pfVar2 + lVar3 + -4);
        uVar7 = *(undefined8 *)(pfVar2 + lVar3 + -2);
      }
      else {
        uVar1 = Animation::binarySearch((Vector *)(param_1 + 0x28),param_3,5);
        uVar5 = -(uVar1 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar1 & 0xffffffff) << 2;
        pfVar2 = (float *)(*(long *)(param_1 + 0x40) + uVar5);
        uVar9 = *(undefined8 *)(pfVar2 + -4);
        uVar7 = *(undefined8 *)(pfVar2 + -2);
        fVar6 = (float)CurveTimeline::getCurvePercent
                                 (param_1,(long)((int)uVar1 / 5 + -1),
                                  1.0 - (param_3 - *pfVar2) / (pfVar2[-5] - *pfVar2));
        lVar3 = *(long *)(param_1 + 0x40) + uVar5;
        fVar11 = (float)uVar9;
        fVar10 = (float)((ulong)uVar9 >> 0x20);
        fVar12 = (float)uVar7;
        fVar14 = (float)((ulong)uVar7 >> 0x20);
        uVar9 = CONCAT44(fVar10 + (*(float *)(lVar3 + 8) - fVar10) * fVar6,
                         fVar11 + (*(float *)(lVar3 + 4) - fVar11) * fVar6);
        uVar7 = CONCAT44(fVar14 + (*(float *)(lVar3 + 0x10) - fVar14) * fVar6,
                         fVar12 + (*(float *)(lVar3 + 0xc) - fVar12) * fVar6);
      }
      fVar6 = (float)((ulong)uVar9 >> 0x20);
      fVar11 = (float)((ulong)uVar7 >> 0x20);
      if (param_7 == 0) {
        uVar13 = *(undefined8 *)(plVar4[1] + 0x58);
        fVar10 = (float)uVar13;
        fVar12 = (float)((ulong)uVar13 >> 0x20);
        plVar4[7] = CONCAT44(fVar12 + (fVar6 - fVar12) * param_5,
                             fVar10 + ((float)uVar9 - fVar10) * param_5);
        uVar9 = *(undefined8 *)(plVar4[1] + 0x60);
        fVar6 = (float)uVar9;
        fVar10 = (float)((ulong)uVar9 >> 0x20);
        plVar4[8] = CONCAT44(fVar10 + (fVar11 - fVar10) * param_5,
                             fVar6 + ((float)uVar7 - fVar6) * param_5);
        return;
      }
      fVar10 = (float)plVar4[7];
      fVar12 = (float)((ulong)plVar4[7] >> 0x20);
      fVar14 = (float)plVar4[8];
      fVar15 = (float)((ulong)plVar4[8] >> 0x20);
      lVar3 = CONCAT44(fVar12 + (fVar6 - fVar12) * param_5,
                       fVar10 + ((float)uVar9 - fVar10) * param_5);
      lVar8 = CONCAT44(fVar15 + (fVar11 - fVar15) * param_5,
                       fVar14 + ((float)uVar7 - fVar14) * param_5);
    }
    else if (param_7 == 1) {
      uVar7 = *(undefined8 *)(plVar4[1] + 0x60);
      uVar9 = *(undefined8 *)(plVar4[1] + 0x58);
      fVar6 = (float)plVar4[7];
      fVar11 = (float)((ulong)plVar4[7] >> 0x20);
      fVar10 = (float)plVar4[8];
      fVar12 = (float)((ulong)plVar4[8] >> 0x20);
      lVar3 = CONCAT44(fVar11 + ((float)((ulong)uVar9 >> 0x20) - fVar11) * param_5,
                       fVar6 + ((float)uVar9 - fVar6) * param_5);
      lVar8 = CONCAT44(fVar12 + ((float)((ulong)uVar7 >> 0x20) - fVar12) * param_5,
                       fVar10 + ((float)uVar7 - fVar10) * param_5);
    }
    else {
      if (param_7 != 0) {
        return;
      }
      lVar8 = *(long *)(plVar4[1] + 0x60);
      lVar3 = *(long *)(plVar4[1] + 0x58);
    }
    plVar4[8] = lVar8;
    plVar4[7] = lVar3;
  }
  return;
}

