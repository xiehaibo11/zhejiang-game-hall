
/* spine::SkeletonBounds::intersectsSegment(spine::Polygon*, float, float, float, float) */

undefined8 __thiscall
spine::SkeletonBounds::intersectsSegment
          (SkeletonBounds *this,Polygon *param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  long lVar1;
  float *pfVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 != 0) {
    uVar4 = 0;
    lVar1 = *(long *)(param_1 + 0x20) + (long)iVar3 * 4;
    fVar5 = param_2 * param_5 - param_3 * param_4;
    fVar6 = *(float *)(lVar1 + -8);
    fVar8 = *(float *)(lVar1 + -4);
    do {
      pfVar2 = (float *)(*(long *)(param_1 + 0x20) + uVar4 * 4);
      fVar7 = *pfVar2;
      fVar9 = pfVar2[1];
      fVar10 = fVar6 * fVar9 - fVar8 * fVar7;
      fVar11 = (param_2 - param_4) * (fVar8 - fVar9) - (param_3 - param_5) * (fVar6 - fVar7);
      fVar12 = (fVar5 * (fVar6 - fVar7) - (param_2 - param_4) * fVar10) / fVar11;
      if (((((fVar6 <= fVar12) && (fVar12 <= fVar7)) || ((fVar7 <= fVar12 && (fVar12 <= fVar6)))) &&
          (((param_2 <= fVar12 && (fVar12 <= param_4)) ||
           ((param_4 <= fVar12 && (fVar12 <= param_2)))))) &&
         (((fVar11 = (fVar5 * (fVar8 - fVar9) - (param_3 - param_5) * fVar10) / fVar11,
           fVar8 <= fVar11 && (fVar11 <= fVar9)) || ((fVar9 <= fVar11 && (fVar11 <= fVar8)))))) {
        if ((param_3 <= fVar11) && (fVar11 <= param_5)) {
          return 1;
        }
        if ((param_5 <= fVar11) && (fVar11 <= param_3)) {
          return 1;
        }
      }
      uVar4 = uVar4 + 2;
      fVar6 = fVar7;
      fVar8 = fVar9;
    } while (uVar4 < (ulong)(long)iVar3);
  }
  return 0;
}

