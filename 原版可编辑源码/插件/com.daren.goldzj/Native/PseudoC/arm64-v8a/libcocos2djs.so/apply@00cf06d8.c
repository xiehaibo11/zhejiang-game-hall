
/* spine::ScaleTimeline::apply(spine::Skeleton&, float, float, spine::Vector<spine::Event*>*, float,
   spine::MixBlend, spine::MixDirection) */

void __thiscall
spine::ScaleTimeline::apply
          (undefined1 param_1_00 [16],float param_3,float param_5,ScaleTimeline *this,long param_1,
          undefined8 param_6,int param_7,int param_8)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float local_90;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + (long)*(int *)(this + 0x48) * 8);
  if (*(char *)(lVar4 + 0x95) == '\0') {
    return;
  }
  pfVar2 = *(float **)(this + 0x40);
  if (param_3 < *pfVar2) {
    if (param_7 == 1) {
      uVar9 = *(undefined8 *)(*(long *)(lVar4 + 8) + 0x40);
      fVar5 = (float)*(undefined8 *)(lVar4 + 0x4c);
      fVar10 = (float)((ulong)*(undefined8 *)(lVar4 + 0x4c) >> 0x20);
      *(ulong *)(lVar4 + 0x4c) =
           CONCAT44(fVar10 + ((float)((ulong)uVar9 >> 0x20) - fVar10) * param_5,
                    fVar5 + ((float)uVar9 - fVar5) * param_5);
      return;
    }
    if (param_7 != 0) {
      return;
    }
    *(undefined8 *)(lVar4 + 0x4c) = *(undefined8 *)(*(long *)(lVar4 + 8) + 0x40);
    return;
  }
  lVar3 = *(long *)(this + 0x30);
  if (pfVar2[lVar3 + -3] <= param_3) {
    uVar12 = *(undefined8 *)(*(long *)(lVar4 + 8) + 0x40);
    uVar9 = CONCAT44(pfVar2[lVar3 + -1] * (float)((ulong)uVar12 >> 0x20),
                     pfVar2[lVar3 + -2] * (float)uVar12);
  }
  else {
    iVar1 = Animation::binarySearch((Vector *)(this + 0x28),param_3,3);
    lVar3 = *(long *)(this + 0x40);
    fVar5 = *(float *)(lVar3 + (long)iVar1 * 4);
    fVar10 = *(float *)(lVar3 + (long)(iVar1 + -2) * 4);
    fVar11 = *(float *)(lVar3 + (long)(iVar1 + -1) * 4);
    fVar5 = (float)CurveTimeline::getCurvePercent
                             ((CurveTimeline *)this,(long)(iVar1 / 3 + -1),
                              1.0 - (param_3 - fVar5) /
                                    (*(float *)(lVar3 + (long)(iVar1 + -3) * 4) - fVar5));
    uVar12 = *(undefined8 *)(*(long *)(lVar4 + 8) + 0x40);
    uVar9 = CONCAT44((float)((ulong)uVar12 >> 0x20) *
                     (fVar11 + (*(float *)(*(long *)(this + 0x40) + (long)(iVar1 + 2) * 4) - fVar11)
                               * fVar5),
                     (float)uVar12 *
                     (fVar10 + (*(float *)(*(long *)(this + 0x40) + (long)(iVar1 + 1) * 4) - fVar10)
                               * fVar5));
  }
  fVar10 = (float)uVar9;
  fVar7 = (float)uVar12;
  fVar11 = (float)((ulong)uVar9 >> 0x20);
  fVar5 = (float)((ulong)uVar12 >> 0x20);
  if (param_5 == 1.0) {
    if (param_7 != 3) {
      *(undefined8 *)(lVar4 + 0x4c) = uVar9;
      return;
    }
    uVar9 = *(undefined8 *)(lVar4 + 0x4c);
    fVar10 = fVar10 - fVar7;
    fVar11 = fVar11 - fVar5;
LAB_00cf0a24:
    *(ulong *)(lVar4 + 0x4c) =
         CONCAT44((float)((ulong)uVar9 >> 0x20) + fVar11,(float)uVar9 + fVar10);
    return;
  }
  if (param_8 != 1) {
    if (param_7 - 1U < 2) {
      local_90 = (float)MathUtil::abs(*(float *)(lVar4 + 0x4c));
      fVar5 = (float)MathUtil::sign(fVar10);
      fVar7 = *(float *)(lVar4 + 0x50);
    }
    else {
      if (param_7 == 3) {
        fVar5 = (float)MathUtil::sign(fVar10);
        fVar7 = (float)MathUtil::sign(fVar11);
        fVar6 = (float)MathUtil::abs(*(float *)(lVar4 + 0x4c));
        fVar8 = (float)MathUtil::abs(*(float *)(*(long *)(lVar4 + 8) + 0x40));
        *(float *)(lVar4 + 0x4c) = fVar5 * fVar6 + (fVar10 - fVar5 * fVar8) * param_5;
        fVar5 = (float)MathUtil::abs(*(float *)(lVar4 + 0x50));
        fVar10 = (float)MathUtil::abs(*(float *)(*(long *)(lVar4 + 8) + 0x44));
        fVar5 = fVar7 * fVar5 + (fVar11 - fVar7 * fVar10) * param_5;
        goto LAB_00cf0b30;
      }
      if (param_7 != 0) {
        return;
      }
      local_90 = (float)MathUtil::abs(fVar7);
      fVar5 = (float)MathUtil::sign(fVar10);
      fVar7 = *(float *)(*(long *)(lVar4 + 8) + 0x44);
    }
    fVar7 = (float)MathUtil::abs(fVar7);
    fVar6 = (float)MathUtil::sign(fVar11);
    uVar9 = CONCAT44(fVar7 * fVar6,local_90 * fVar5);
    fVar10 = (fVar10 - local_90 * fVar5) * param_5;
    fVar11 = (fVar11 - fVar7 * fVar6) * param_5;
    goto LAB_00cf0a24;
  }
  if (param_7 - 1U < 2) {
    fVar6 = *(float *)(lVar4 + 0x4c);
    fVar5 = *(float *)(lVar4 + 0x50);
    fVar10 = (float)MathUtil::abs(fVar10);
    fVar7 = (float)MathUtil::sign(fVar6);
    *(float *)(lVar4 + 0x4c) = fVar6 + (fVar10 * fVar7 - fVar6) * param_5;
    fVar10 = (float)MathUtil::abs(fVar11);
LAB_00cf09b4:
    fVar11 = (float)MathUtil::sign(fVar5);
    fVar10 = fVar10 * fVar11 - fVar5;
  }
  else {
    if (param_7 != 3) {
      if (param_7 != 0) {
        return;
      }
      fVar10 = (float)MathUtil::abs(fVar10);
      fVar6 = (float)MathUtil::sign(fVar7);
      *(float *)(lVar4 + 0x4c) = fVar7 + (fVar10 * fVar6 - fVar7) * param_5;
      fVar10 = (float)MathUtil::abs(fVar11);
      goto LAB_00cf09b4;
    }
    fVar6 = *(float *)(lVar4 + 0x4c);
    fVar5 = *(float *)(lVar4 + 0x50);
    fVar10 = (float)MathUtil::abs(fVar10);
    fVar7 = (float)MathUtil::sign(fVar6);
    *(float *)(lVar4 + 0x4c) =
         fVar6 + (fVar10 * fVar7 - *(float *)(*(long *)(lVar4 + 8) + 0x40)) * param_5;
    fVar10 = (float)MathUtil::abs(fVar11);
    fVar11 = (float)MathUtil::sign(fVar5);
    fVar10 = fVar10 * fVar11 - *(float *)(*(long *)(lVar4 + 8) + 0x44);
  }
  fVar5 = fVar5 + fVar10 * param_5;
LAB_00cf0b30:
  *(float *)(lVar4 + 0x50) = fVar5;
  return;
}

