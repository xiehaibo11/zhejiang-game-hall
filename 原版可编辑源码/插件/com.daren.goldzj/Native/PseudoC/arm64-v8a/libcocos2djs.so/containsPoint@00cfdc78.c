
/* spine::SkeletonBounds::containsPoint(float, float) */

undefined8 __thiscall
spine::SkeletonBounds::containsPoint(SkeletonBounds *this,float param_1,float param_2)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (*(ulong *)(this + 0x50) == 0) {
    return 0;
  }
  uVar4 = 0;
  do {
    lVar6 = *(long *)(*(long *)(this + 0x60) + uVar4 * 8);
    iVar2 = *(int *)(lVar6 + 0x28);
    if (0 < iVar2) {
      lVar7 = *(long *)(lVar6 + 0x20);
      bVar3 = false;
      iVar5 = iVar2 + -2;
      lVar6 = 0;
      do {
        fVar8 = *(float *)(lVar7 + lVar6 * 4 + 4);
        fVar9 = *(float *)(lVar7 + (long)iVar5 * 4 + 4);
        if ((((fVar8 < param_2) && (param_2 <= fVar9)) || ((param_2 <= fVar8 && (fVar9 < param_2))))
           && (fVar10 = *(float *)(lVar7 + lVar6 * 4),
              fVar10 + ((param_2 - fVar8) / (fVar9 - fVar8)) *
                       (*(float *)(lVar7 + (long)iVar5 * 4) - fVar10) < param_1)) {
          bVar3 = (bool)(bVar3 ^ 1);
        }
        lVar1 = lVar6 + 2;
        iVar5 = (int)lVar6;
        lVar6 = lVar1;
      } while (lVar1 < iVar2);
      if (bVar3) {
        return *(undefined8 *)(*(long *)(this + 0x40) + uVar4 * 8);
      }
    }
    uVar4 = uVar4 + 1;
    if (*(ulong *)(this + 0x50) <= uVar4) {
      return 0;
    }
  } while( true );
}

