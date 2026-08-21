
/* spine::SkeletonBounds::aabbCompute() */

void __thiscall spine::SkeletonBounds::aabbCompute(SkeletonBounds *this)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (*(long *)(this + 0x50) == 0) {
    fVar9 = 1.1754944e-38;
    fVar6 = 3.4028235e+38;
    fVar8 = fVar6;
    fVar7 = fVar9;
  }
  else {
    fVar6 = 3.4028235e+38;
    fVar9 = 1.1754944e-38;
    lVar3 = 0;
    fVar8 = fVar6;
    fVar7 = fVar9;
    do {
      lVar4 = *(long *)(*(long *)(this + 0x60) + lVar3 * 8);
      iVar2 = *(int *)(lVar4 + 0x28);
      if (0 < iVar2) {
        lVar5 = 0;
        do {
          pfVar1 = (float *)(*(long *)(lVar4 + 0x20) + lVar5 * 4);
          fVar10 = *pfVar1;
          fVar11 = pfVar1[1];
          lVar5 = lVar5 + 2;
          if (fVar10 <= fVar9) {
            fVar9 = fVar10;
          }
          if (fVar11 <= fVar7) {
            fVar7 = fVar11;
          }
          if (fVar6 <= fVar10) {
            fVar6 = fVar10;
          }
          if (fVar8 <= fVar11) {
            fVar8 = fVar11;
          }
        } while (lVar5 < iVar2);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != *(long *)(this + 0x50));
  }
  *(float *)(this + 0x68) = fVar9;
  *(float *)(this + 0x6c) = fVar7;
  *(float *)(this + 0x70) = fVar6;
  *(float *)(this + 0x74) = fVar8;
  return;
}

