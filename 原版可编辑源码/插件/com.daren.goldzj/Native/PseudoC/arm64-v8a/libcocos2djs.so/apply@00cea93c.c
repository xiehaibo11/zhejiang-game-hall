
/* spine::IkConstraintTimeline::apply(spine::Skeleton&, float, float, spine::Vector<spine::Event*>*,
   float, spine::MixBlend, spine::MixDirection) */

void __thiscall
spine::IkConstraintTimeline::apply
          (undefined1 param_1_00 [16],float param_3,float param_5,IkConstraintTimeline *this,
          long param_1,undefined8 param_6,int param_7,int param_8)

{
  int iVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  plVar7 = *(long **)(*(long *)(param_1 + 0x88) + (long)*(int *)(this + 0x48) * 8);
  uVar2 = (**(code **)(*plVar7 + 0x20))(plVar7);
  if ((uVar2 & 1) == 0) {
    return;
  }
  pfVar5 = *(float **)(this + 0x40);
  if (param_3 < *pfVar5) {
    if (param_7 == 1) {
      lVar4 = plVar7[1];
      fVar8 = (float)plVar7[7];
      fVar9 = (float)((ulong)plVar7[7] >> 0x20);
      plVar7[7] = CONCAT44(fVar9 + ((float)((ulong)*(undefined8 *)(lVar4 + 0x60) >> 0x20) - fVar9) *
                                   param_5,
                           fVar8 + ((float)*(undefined8 *)(lVar4 + 0x60) - fVar8) * param_5);
    }
    else {
      if (param_7 != 0) {
        return;
      }
      lVar4 = plVar7[1];
      plVar7[7] = *(long *)(lVar4 + 0x60);
    }
LAB_00ceabb4:
    *(undefined4 *)(plVar7 + 6) = *(undefined4 *)(lVar4 + 0x58);
    *(undefined1 *)((long)plVar7 + 0x34) = *(undefined1 *)(lVar4 + 0x5c);
    uVar3 = *(undefined1 *)(lVar4 + 0x5d);
    goto LAB_00ceac20;
  }
  lVar6 = *(long *)(this + 0x30);
  if (pfVar5[lVar6 + -6] <= param_3) {
    if (param_7 != 0) {
      pfVar5 = pfVar5 + lVar6;
      *(float *)(plVar7 + 7) =
           *(float *)(plVar7 + 7) + (pfVar5[-5] - *(float *)(plVar7 + 7)) * param_5;
      *(float *)((long)plVar7 + 0x3c) =
           *(float *)((long)plVar7 + 0x3c) +
           (pfVar5[-4] - *(float *)((long)plVar7 + 0x3c)) * param_5;
      goto joined_r0x00ceaacc;
    }
    lVar4 = plVar7[1];
    *(float *)(plVar7 + 7) =
         *(float *)(lVar4 + 0x60) + (pfVar5[lVar6 + -5] - *(float *)(lVar4 + 0x60)) * param_5;
    *(float *)((long)plVar7 + 0x3c) =
         *(float *)(lVar4 + 100) + (pfVar5[lVar6 + -4] - *(float *)(lVar4 + 100)) * param_5;
    if (param_8 == 1) goto LAB_00ceabb4;
    *(int *)(plVar7 + 6) = (int)pfVar5[lVar6 + -3];
    *(bool *)((long)plVar7 + 0x34) = pfVar5[lVar6 + -2] != 0.0;
    fVar8 = pfVar5[lVar6 + -1];
  }
  else {
    iVar1 = Animation::binarySearch((Vector *)(this + 0x28),param_3,6);
    pfVar5 = (float *)(*(long *)(this + 0x40) + (long)iVar1 * 4);
    fVar10 = pfVar5[-5];
    fVar9 = pfVar5[-4];
    fVar8 = (float)CurveTimeline::getCurvePercent
                             ((CurveTimeline *)this,(long)(iVar1 / 6 + -1),
                              1.0 - (param_3 - *pfVar5) / (pfVar5[-6] - *pfVar5));
    if (param_7 == 0) {
      lVar4 = *(long *)(this + 0x40);
      lVar6 = plVar7[1];
      pfVar5 = (float *)(lVar4 + (long)iVar1 * 4);
      *(float *)(plVar7 + 7) =
           *(float *)(lVar6 + 0x60) +
           ((fVar10 + fVar8 * (pfVar5[1] - fVar10)) - *(float *)(lVar6 + 0x60)) * param_5;
      *(float *)((long)plVar7 + 0x3c) =
           *(float *)(lVar6 + 100) +
           ((fVar9 + fVar8 * (pfVar5[2] - fVar9)) - *(float *)(lVar6 + 100)) * param_5;
      if (param_8 == 1) {
        *(undefined4 *)(plVar7 + 6) = *(undefined4 *)(lVar6 + 0x58);
        *(undefined1 *)((long)plVar7 + 0x34) = *(undefined1 *)(lVar6 + 0x5c);
        uVar3 = *(undefined1 *)(lVar6 + 0x5d);
        goto LAB_00ceac20;
      }
      fVar8 = *(float *)(lVar4 + *(long *)(this + 0x30) * 4 + -0xc);
    }
    else {
      pfVar5 = (float *)(*(long *)(this + 0x40) + (long)iVar1 * 4);
      *(float *)(plVar7 + 7) =
           *(float *)(plVar7 + 7) +
           ((fVar10 + fVar8 * (pfVar5[1] - fVar10)) - *(float *)(plVar7 + 7)) * param_5;
      *(float *)((long)plVar7 + 0x3c) =
           *(float *)((long)plVar7 + 0x3c) +
           ((fVar9 + fVar8 * (pfVar5[2] - fVar9)) - *(float *)((long)plVar7 + 0x3c)) * param_5;
joined_r0x00ceaacc:
      if (param_8 != 0) {
        return;
      }
      fVar8 = pfVar5[-3];
    }
    *(int *)(plVar7 + 6) = (int)fVar8;
    *(bool *)((long)plVar7 + 0x34) = pfVar5[-2] != 0.0;
    fVar8 = pfVar5[-1];
  }
  uVar3 = fVar8 != 0.0;
LAB_00ceac20:
  *(undefined1 *)((long)plVar7 + 0x35) = uVar3;
  return;
}

