
/* spine::ColorTimeline::apply(spine::Skeleton&, float, float, spine::Vector<spine::Event*>*, float,
   spine::MixBlend, spine::MixDirection) */

void spine::ColorTimeline::apply
               (undefined1 param_1_00 [16],float param_3,float param_5,CurveTimeline *param_1,
               long param_4,undefined8 param_6,int param_7)

{
  long lVar1;
  ulong uVar2;
  SlotData *this;
  long lVar3;
  float *pfVar4;
  long lVar5;
  Slot *this_00;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  float *pfVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = *(Slot **)(*(long *)(param_4 + 0x48) + (long)*(int *)(param_1 + 0x28) * 8);
  uVar2 = (**(code **)(**(long **)(this_00 + 0x10) + 0x20))();
  if ((uVar2 & 1) != 0) {
    pfVar4 = *(float **)(param_1 + 0x48);
    if (*pfVar4 <= param_3) {
      lVar5 = *(long *)(param_1 + 0x38);
      if (pfVar4[lVar5 + -5] <= param_3) {
        uVar15 = *(undefined8 *)(pfVar4 + lVar5 + -2);
        uVar13 = *(undefined8 *)(pfVar4 + lVar5 + -4);
      }
      else {
        uVar2 = Animation::binarySearch((Vector *)(param_1 + 0x30),param_3,5);
        uVar8 = -(uVar2 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar2 & 0xffffffff) << 2;
        pfVar4 = (float *)(*(long *)(param_1 + 0x48) + uVar8);
        uVar18 = *(undefined8 *)(pfVar4 + -2);
        uVar14 = *(undefined8 *)(pfVar4 + -4);
        fVar11 = (float)CurveTimeline::getCurvePercent
                                  (param_1,(ulong)(long)(int)uVar2 / 5 - 1,
                                   1.0 - (param_3 - *pfVar4) / (pfVar4[-5] - *pfVar4));
        lVar5 = *(long *)(param_1 + 0x48) + uVar8;
        uVar15 = *(undefined8 *)(lVar5 + 0xc);
        uVar13 = *(undefined8 *)(lVar5 + 4);
        fVar12 = (float)uVar14;
        fVar16 = (float)((ulong)uVar14 >> 0x20);
        fVar17 = (float)uVar18;
        fVar19 = (float)((ulong)uVar18 >> 0x20);
        uVar13 = CONCAT44(fVar16 + ((float)((ulong)uVar13 >> 0x20) - fVar16) * fVar11,
                          fVar12 + ((float)uVar13 - fVar12) * fVar11);
        uVar15 = CONCAT44(fVar19 + ((float)((ulong)uVar15 >> 0x20) - fVar19) * fVar11,
                          fVar17 + ((float)uVar15 - fVar17) * fVar11);
      }
      lVar5 = Slot::getColor(this_00);
      if (param_5 == 1.0) {
        *(undefined8 *)(lVar5 + 0x10) = uVar15;
        *(undefined8 *)(lVar5 + 8) = uVar13;
        uVar10 = MathUtil::clamp((float)uVar13,0.0,1.0);
        *(undefined4 *)(lVar5 + 8) = uVar10;
        uVar10 = MathUtil::clamp(*(float *)(lVar5 + 0xc),0.0,1.0);
        *(undefined4 *)(lVar5 + 0xc) = uVar10;
        uVar10 = MathUtil::clamp(*(float *)(lVar5 + 0x10),0.0,1.0);
        *(undefined4 *)(lVar5 + 0x10) = uVar10;
        uVar10 = MathUtil::clamp(*(float *)(lVar5 + 0x14),0.0,1.0);
        *(undefined4 *)(lVar5 + 0x14) = uVar10;
      }
      else {
        if (param_7 == 0) {
          this = (SlotData *)Slot::getData(this_00);
          lVar3 = SlotData::getColor(this);
          uVar14 = *(undefined8 *)(lVar3 + 8);
          *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar3 + 0x10);
          *(undefined8 *)(lVar5 + 8) = uVar14;
          uVar10 = MathUtil::clamp((float)uVar14,0.0,1.0);
          *(undefined4 *)(lVar5 + 8) = uVar10;
          fVar11 = (float)MathUtil::clamp(*(float *)(lVar5 + 0xc),0.0,1.0);
          *(float *)(lVar5 + 0xc) = fVar11;
          fVar11 = (float)MathUtil::clamp(*(float *)(lVar5 + 0x10),0.0,1.0);
          *(float *)(lVar5 + 0x10) = fVar11;
          fVar11 = (float)MathUtil::clamp(*(float *)(lVar5 + 0x14),0.0,1.0);
          *(float *)(lVar5 + 0x14) = fVar11;
        }
        else {
          fVar11 = *(float *)(lVar5 + 0x14);
        }
        pfVar9 = (float *)(lVar5 + 0x10);
        pfVar7 = (float *)(lVar5 + 0xc);
        pfVar6 = (float *)(lVar5 + 8);
        pfVar4 = (float *)(lVar5 + 0x14);
        fVar12 = *pfVar6 + ((float)uVar13 - *pfVar6) * param_5;
        *pfVar6 = fVar12;
        *pfVar7 = *pfVar7 + ((float)((ulong)uVar13 >> 0x20) - *pfVar7) * param_5;
        *pfVar9 = *pfVar9 + ((float)uVar15 - *pfVar9) * param_5;
        *pfVar4 = fVar11 + ((float)((ulong)uVar15 >> 0x20) - fVar11) * param_5;
        fVar11 = (float)MathUtil::clamp(fVar12,0.0,1.0);
        *pfVar6 = fVar11;
        fVar11 = (float)MathUtil::clamp(*pfVar7,0.0,1.0);
        *pfVar7 = fVar11;
        fVar11 = (float)MathUtil::clamp(*pfVar9,0.0,1.0);
        *pfVar9 = fVar11;
        fVar11 = (float)MathUtil::clamp(*pfVar4,0.0,1.0);
        *pfVar4 = fVar11;
      }
    }
    else if (param_7 == 1) {
      local_60 = &PTR__SpineObject_01c8eb68;
      uStack_50 = *(undefined8 *)(*(long *)(this_00 + 8) + 0x40);
      local_58 = *(undefined8 *)(*(long *)(this_00 + 8) + 0x38);
      fVar11 = (float)*(undefined8 *)(this_00 + 0x28);
      fVar12 = (float)((ulong)*(undefined8 *)(this_00 + 0x28) >> 0x20);
      fVar16 = (float)*(undefined8 *)(this_00 + 0x30);
      fVar17 = (float)((ulong)*(undefined8 *)(this_00 + 0x30) >> 0x20);
      fVar11 = ((float)local_58 - fVar11) * param_5 + fVar11;
      *(ulong *)(this_00 + 0x30) =
           CONCAT44(((float)((ulong)uStack_50 >> 0x20) - fVar17) * param_5 + fVar17,
                    ((float)uStack_50 - fVar16) * param_5 + fVar16);
      *(ulong *)(this_00 + 0x28) =
           CONCAT44(((float)((ulong)local_58 >> 0x20) - fVar12) * param_5 + fVar12,fVar11);
      uVar10 = MathUtil::clamp(fVar11,0.0,1.0);
      *(undefined4 *)(this_00 + 0x28) = uVar10;
      uVar10 = MathUtil::clamp(*(float *)(this_00 + 0x2c),0.0,1.0);
      *(undefined4 *)(this_00 + 0x2c) = uVar10;
      uVar10 = MathUtil::clamp(*(float *)(this_00 + 0x30),0.0,1.0);
      *(undefined4 *)(this_00 + 0x30) = uVar10;
      uVar10 = MathUtil::clamp(*(float *)(this_00 + 0x34),0.0,1.0);
      *(undefined4 *)(this_00 + 0x34) = uVar10;
      SpineObject::~SpineObject((SpineObject *)&local_60);
    }
    else if (param_7 == 0) {
      uVar13 = *(undefined8 *)(*(long *)(this_00 + 8) + 0x38);
      *(undefined8 *)(this_00 + 0x30) = *(undefined8 *)(*(long *)(this_00 + 8) + 0x40);
      *(undefined8 *)(this_00 + 0x28) = uVar13;
      uVar10 = MathUtil::clamp((float)uVar13,0.0,1.0);
      *(undefined4 *)(this_00 + 0x28) = uVar10;
      uVar10 = MathUtil::clamp(*(float *)(this_00 + 0x2c),0.0,1.0);
      *(undefined4 *)(this_00 + 0x2c) = uVar10;
      uVar10 = MathUtil::clamp(*(float *)(this_00 + 0x30),0.0,1.0);
      *(undefined4 *)(this_00 + 0x30) = uVar10;
      uVar10 = MathUtil::clamp(*(float *)(this_00 + 0x34),0.0,1.0);
      *(undefined4 *)(this_00 + 0x34) = uVar10;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

