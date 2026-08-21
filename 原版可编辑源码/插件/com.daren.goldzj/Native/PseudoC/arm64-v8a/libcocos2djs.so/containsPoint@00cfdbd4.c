
/* spine::SkeletonBounds::containsPoint(spine::Polygon*, float, float) */

uint __thiscall
spine::SkeletonBounds::containsPoint
          (SkeletonBounds *this,Polygon *param_1,float param_2,float param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (0 < iVar2) {
    lVar6 = *(long *)(param_1 + 0x20);
    uVar3 = 0;
    iVar4 = iVar2 + -2;
    lVar5 = 0;
    do {
      fVar7 = *(float *)(lVar6 + lVar5 * 4 + 4);
      fVar8 = *(float *)(lVar6 + (long)iVar4 * 4 + 4);
      if ((((fVar7 < param_3) && (param_3 <= fVar8)) || ((param_3 <= fVar7 && (fVar8 < param_3))))
         && (fVar9 = *(float *)(lVar6 + lVar5 * 4),
            fVar9 + ((param_3 - fVar7) / (fVar8 - fVar7)) *
                    (*(float *)(lVar6 + (long)iVar4 * 4) - fVar9) < param_2)) {
        uVar3 = uVar3 ^ 1;
      }
      lVar1 = lVar5 + 2;
      iVar4 = (int)lVar5;
      lVar5 = lVar1;
    } while (lVar1 < iVar2);
    return uVar3;
  }
  return 0;
}

