
/* spine::TwoColorTimeline::apply(spine::Skeleton&, float, float, spine::Vector<spine::Event*>*,
   float, spine::MixBlend, spine::MixDirection) */

void spine::TwoColorTimeline::apply
               (undefined1 param_1_00 [16],float param_3,float param_5,CurveTimeline *param_1,
               long param_4,undefined8 param_6,int param_7)

{
  ulong uVar1;
  long lVar2;
  SlotData *pSVar3;
  long lVar4;
  float *pfVar5;
  Slot *pSVar6;
  Slot *pSVar7;
  Slot *pSVar8;
  ulong uVar9;
  Slot *pSVar10;
  Slot *pSVar11;
  Slot *pSVar12;
  Slot *pSVar13;
  Slot *pSVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  undefined8 local_80;
  
  pSVar6 = *(Slot **)(*(long *)(param_4 + 0x48) + (long)*(int *)(param_1 + 0x48) * 8);
  uVar1 = (**(code **)(**(long **)(pSVar6 + 0x10) + 0x20))();
  if ((uVar1 & 1) != 0) {
    pfVar5 = *(float **)(param_1 + 0x40);
    if (*pfVar5 <= param_3) {
      lVar2 = *(long *)(param_1 + 0x30);
      if (pfVar5[lVar2 + -8] <= param_3) {
        local_80 = *(undefined8 *)(pfVar5 + lVar2 + -3);
        uVar17 = *(undefined8 *)(pfVar5 + lVar2 + -5);
        uVar16 = *(undefined8 *)(pfVar5 + lVar2 + -7);
        fVar22 = pfVar5[lVar2 + -1];
      }
      else {
        uVar1 = Animation::binarySearch((Vector *)(param_1 + 0x28),param_3,8);
        uVar9 = -(uVar1 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar1 & 0xffffffff) << 2;
        pfVar5 = (float *)(*(long *)(param_1 + 0x40) + uVar9);
        uVar17 = *(undefined8 *)(pfVar5 + -5);
        uVar16 = *(undefined8 *)(pfVar5 + -7);
        uVar25 = *(undefined8 *)(pfVar5 + -3);
        fVar22 = pfVar5[-1];
        fVar23 = (float)CurveTimeline::getCurvePercent
                                  (param_1,((ulong)(long)(int)uVar1 >> 3) - 1,
                                   1.0 - (param_3 - *pfVar5) / (pfVar5[-8] - *pfVar5));
        lVar2 = *(long *)(param_1 + 0x40) + uVar9;
        fVar18 = (float)uVar16;
        fVar19 = (float)((ulong)uVar16 >> 0x20);
        fVar20 = (float)uVar17;
        fVar21 = (float)((ulong)uVar17 >> 0x20);
        fVar24 = (float)uVar25;
        fVar26 = (float)((ulong)uVar25 >> 0x20);
        uVar16 = CONCAT44(fVar19 + ((float)((ulong)*(undefined8 *)(lVar2 + 4) >> 0x20) - fVar19) *
                                   fVar23,
                          fVar18 + ((float)*(undefined8 *)(lVar2 + 4) - fVar18) * fVar23);
        uVar17 = CONCAT44(fVar21 + ((float)((ulong)*(undefined8 *)(lVar2 + 0xc) >> 0x20) - fVar21) *
                                   fVar23,
                          fVar20 + ((float)*(undefined8 *)(lVar2 + 0xc) - fVar20) * fVar23);
        local_80 = CONCAT44(fVar26 + ((float)((ulong)*(undefined8 *)(lVar2 + 0x14) >> 0x20) - fVar26
                                     ) * fVar23,
                            fVar24 + ((float)*(undefined8 *)(lVar2 + 0x14) - fVar24) * fVar23);
        fVar22 = fVar22 + fVar23 * (*(float *)(lVar2 + 0x1c) - fVar22);
      }
      if (param_5 == 1.0) {
        lVar2 = Slot::getColor(pSVar6);
        *(undefined8 *)(lVar2 + 0x10) = uVar17;
        *(undefined8 *)(lVar2 + 8) = uVar16;
        uVar15 = MathUtil::clamp((float)uVar16,0.0,1.0);
        *(undefined4 *)(lVar2 + 8) = uVar15;
        uVar15 = MathUtil::clamp(*(float *)(lVar2 + 0xc),0.0,1.0);
        *(undefined4 *)(lVar2 + 0xc) = uVar15;
        uVar15 = MathUtil::clamp(*(float *)(lVar2 + 0x10),0.0,1.0);
        *(undefined4 *)(lVar2 + 0x10) = uVar15;
        uVar15 = MathUtil::clamp(*(float *)(lVar2 + 0x14),0.0,1.0);
        *(undefined4 *)(lVar2 + 0x14) = uVar15;
        lVar2 = Slot::getDarkColor(pSVar6);
        *(undefined8 *)(lVar2 + 8) = local_80;
        *(float *)(lVar2 + 0x10) = fVar22;
        *(undefined4 *)(lVar2 + 0x14) = 0x3f800000;
        uVar15 = MathUtil::clamp((float)local_80,0.0,1.0);
        *(undefined4 *)(lVar2 + 8) = uVar15;
        uVar15 = MathUtil::clamp(*(float *)(lVar2 + 0xc),0.0,1.0);
        *(undefined4 *)(lVar2 + 0xc) = uVar15;
        uVar15 = MathUtil::clamp(*(float *)(lVar2 + 0x10),0.0,1.0);
        *(undefined4 *)(lVar2 + 0x10) = uVar15;
        uVar15 = MathUtil::clamp(*(float *)(lVar2 + 0x14),0.0,1.0);
        *(undefined4 *)(lVar2 + 0x14) = uVar15;
      }
      else {
        if (param_7 == 0) {
          uVar25 = *(undefined8 *)(*(long *)(pSVar6 + 8) + 0x38);
          *(undefined8 *)(pSVar6 + 0x30) = *(undefined8 *)(*(long *)(pSVar6 + 8) + 0x40);
          *(undefined8 *)(pSVar6 + 0x28) = uVar25;
          uVar15 = MathUtil::clamp((float)uVar25,0.0,1.0);
          *(undefined4 *)(pSVar6 + 0x28) = uVar15;
          uVar15 = MathUtil::clamp(*(float *)(pSVar6 + 0x2c),0.0,1.0);
          *(undefined4 *)(pSVar6 + 0x2c) = uVar15;
          uVar15 = MathUtil::clamp(*(float *)(pSVar6 + 0x30),0.0,1.0);
          *(undefined4 *)(pSVar6 + 0x30) = uVar15;
          uVar15 = MathUtil::clamp(*(float *)(pSVar6 + 0x34),0.0,1.0);
          *(undefined4 *)(pSVar6 + 0x34) = uVar15;
          uVar25 = *(undefined8 *)(*(long *)(pSVar6 + 8) + 0x50);
          *(undefined8 *)(pSVar6 + 0x48) = *(undefined8 *)(*(long *)(pSVar6 + 8) + 0x58);
          *(undefined8 *)(pSVar6 + 0x40) = uVar25;
          uVar15 = MathUtil::clamp((float)uVar25,0.0,1.0);
          *(undefined4 *)(pSVar6 + 0x40) = uVar15;
          uVar15 = MathUtil::clamp(*(float *)(pSVar6 + 0x44),0.0,1.0);
          *(undefined4 *)(pSVar6 + 0x44) = uVar15;
          uVar15 = MathUtil::clamp(*(float *)(pSVar6 + 0x48),0.0,1.0);
          *(undefined4 *)(pSVar6 + 0x48) = uVar15;
          uVar15 = MathUtil::clamp(*(float *)(pSVar6 + 0x4c),0.0,1.0);
          *(undefined4 *)(pSVar6 + 0x4c) = uVar15;
        }
        pSVar8 = pSVar6 + 0x40;
        pSVar7 = pSVar6 + 0x28;
        pSVar14 = pSVar6 + 0x34;
        pSVar13 = pSVar6 + 0x30;
        pSVar12 = pSVar6 + 0x48;
        pSVar11 = pSVar6 + 0x2c;
        pSVar10 = pSVar6 + 0x44;
        pSVar6 = pSVar6 + 0x4c;
        fVar23 = ((float)uVar16 - *(float *)pSVar7) * param_5 + *(float *)pSVar7;
        *(float *)pSVar7 = fVar23;
        *(float *)pSVar11 =
             ((float)((ulong)uVar16 >> 0x20) - *(float *)pSVar11) * param_5 + *(float *)pSVar11;
        *(float *)pSVar13 = ((float)uVar17 - *(float *)pSVar13) * param_5 + *(float *)pSVar13;
        *(float *)pSVar14 =
             ((float)((ulong)uVar17 >> 0x20) - *(float *)pSVar14) * param_5 + *(float *)pSVar14;
        uVar15 = MathUtil::clamp(fVar23,0.0,1.0);
        *(undefined4 *)pSVar7 = uVar15;
        uVar15 = MathUtil::clamp(*(float *)pSVar11,0.0,1.0);
        *(undefined4 *)pSVar11 = uVar15;
        uVar15 = MathUtil::clamp(*(float *)pSVar13,0.0,1.0);
        *(undefined4 *)pSVar13 = uVar15;
        uVar15 = MathUtil::clamp(*(float *)pSVar14,0.0,1.0);
        *(undefined4 *)pSVar14 = uVar15;
        fVar23 = ((float)local_80 - *(float *)pSVar8) * param_5 + *(float *)pSVar8;
        *(float *)pSVar8 = fVar23;
        *(float *)pSVar10 =
             ((float)((ulong)local_80 >> 0x20) - *(float *)pSVar10) * param_5 + *(float *)pSVar10;
        *(float *)pSVar12 = (fVar22 - *(float *)pSVar12) * param_5 + *(float *)pSVar12;
        *(float *)pSVar6 = *(float *)pSVar6 + 0.0;
        uVar15 = MathUtil::clamp(fVar23,0.0,1.0);
        *(undefined4 *)pSVar8 = uVar15;
        uVar15 = MathUtil::clamp(*(float *)pSVar10,0.0,1.0);
        *(undefined4 *)pSVar10 = uVar15;
        uVar15 = MathUtil::clamp(*(float *)pSVar12,0.0,1.0);
        *(undefined4 *)pSVar12 = uVar15;
        uVar15 = MathUtil::clamp(*(float *)pSVar6,0.0,1.0);
        *(undefined4 *)pSVar6 = uVar15;
      }
    }
    else if (param_7 == 1) {
      lVar2 = Slot::getColor(pSVar6);
      fVar22 = *(float *)(lVar2 + 8);
      lVar4 = SlotData::getColor(*(SlotData **)(pSVar6 + 8));
      fVar23 = *(float *)(lVar2 + 0xc);
      *(float *)(lVar2 + 8) = *(float *)(lVar2 + 8) + (fVar22 - *(float *)(lVar4 + 8)) * param_5;
      lVar4 = SlotData::getColor(*(SlotData **)(pSVar6 + 8));
      fVar22 = *(float *)(lVar2 + 0x10);
      *(float *)(lVar2 + 0xc) =
           *(float *)(lVar2 + 0xc) + (fVar23 - *(float *)(lVar4 + 0xc)) * param_5;
      lVar4 = SlotData::getColor(*(SlotData **)(pSVar6 + 8));
      fVar23 = *(float *)(lVar2 + 0x14);
      *(float *)(lVar2 + 0x10) =
           *(float *)(lVar2 + 0x10) + (fVar22 - *(float *)(lVar4 + 0x10)) * param_5;
      lVar4 = SlotData::getColor(*(SlotData **)(pSVar6 + 8));
      *(float *)(lVar2 + 0x14) =
           *(float *)(lVar2 + 0x14) + (fVar23 - *(float *)(lVar4 + 0x14)) * param_5;
      lVar2 = Slot::getDarkColor(pSVar6);
      fVar22 = *(float *)(lVar2 + 8);
      lVar4 = SlotData::getDarkColor(*(SlotData **)(pSVar6 + 8));
      fVar23 = *(float *)(lVar2 + 0xc);
      *(float *)(lVar2 + 8) = *(float *)(lVar2 + 8) + (fVar22 - *(float *)(lVar4 + 8)) * param_5;
      lVar4 = SlotData::getDarkColor(*(SlotData **)(pSVar6 + 8));
      fVar22 = *(float *)(lVar2 + 0x10);
      *(float *)(lVar2 + 0xc) =
           *(float *)(lVar2 + 0xc) + (fVar23 - *(float *)(lVar4 + 0xc)) * param_5;
      lVar4 = SlotData::getDarkColor(*(SlotData **)(pSVar6 + 8));
      *(float *)(lVar2 + 0x10) =
           *(float *)(lVar2 + 0x10) + (fVar22 - *(float *)(lVar4 + 0x10)) * param_5;
    }
    else if (param_7 == 0) {
      lVar2 = Slot::getColor(pSVar6);
      pSVar3 = (SlotData *)Slot::getData(pSVar6);
      lVar4 = SlotData::getColor(pSVar3);
      uVar16 = *(undefined8 *)(lVar4 + 8);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar4 + 0x10);
      *(undefined8 *)(lVar2 + 8) = uVar16;
      uVar15 = MathUtil::clamp((float)uVar16,0.0,1.0);
      *(undefined4 *)(lVar2 + 8) = uVar15;
      uVar15 = MathUtil::clamp(*(float *)(lVar2 + 0xc),0.0,1.0);
      *(undefined4 *)(lVar2 + 0xc) = uVar15;
      uVar15 = MathUtil::clamp(*(float *)(lVar2 + 0x10),0.0,1.0);
      *(undefined4 *)(lVar2 + 0x10) = uVar15;
      uVar15 = MathUtil::clamp(*(float *)(lVar2 + 0x14),0.0,1.0);
      *(undefined4 *)(lVar2 + 0x14) = uVar15;
      lVar2 = Slot::getDarkColor(pSVar6);
      pSVar3 = (SlotData *)Slot::getData(pSVar6);
      lVar4 = SlotData::getDarkColor(pSVar3);
      uVar16 = *(undefined8 *)(lVar4 + 8);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar4 + 0x10);
      *(undefined8 *)(lVar2 + 8) = uVar16;
      uVar15 = MathUtil::clamp((float)uVar16,0.0,1.0);
      *(undefined4 *)(lVar2 + 8) = uVar15;
      uVar15 = MathUtil::clamp(*(float *)(lVar2 + 0xc),0.0,1.0);
      *(undefined4 *)(lVar2 + 0xc) = uVar15;
      uVar15 = MathUtil::clamp(*(float *)(lVar2 + 0x10),0.0,1.0);
      *(undefined4 *)(lVar2 + 0x10) = uVar15;
      uVar15 = MathUtil::clamp(*(float *)(lVar2 + 0x14),0.0,1.0);
      *(undefined4 *)(lVar2 + 0x14) = uVar15;
    }
  }
  return;
}

