
/* btPolyhedralConvexShape::localGetSupportingVertexWithoutMargin(btVector3 const&) const */

float __thiscall
btPolyhedralConvexShape::localGetSupportingVertexWithoutMargin
          (btPolyhedralConvexShape *this,btVector3 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_894;
  float local_890 [512];
  
  fVar11 = *(float *)param_1;
  fVar12 = *(float *)(param_1 + 4);
  fVar13 = *(float *)(param_1 + 8);
  fVar9 = fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13;
  local_894 = 0.0;
  if (0.0001 <= fVar9) {
    fVar8 = SQRT(fVar9);
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar9);
    }
    fVar8 = 1.0 / fVar8;
    fVar11 = fVar11 * fVar8;
    fVar12 = fVar12 * fVar8;
    fVar13 = fVar13 * fVar8;
  }
  else {
    fVar11 = 1.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
  }
  iVar2 = (**(code **)(*(long *)this + 0xc0))(this);
  if (0 < iVar2) {
    fVar9 = -1e+18;
    iVar2 = 0;
    local_894 = 0.0;
    do {
      iVar3 = (**(code **)(*(long *)this + 0xc0))(this);
      if (iVar3 - iVar2 < 0x80) {
        iVar3 = (**(code **)(*(long *)this + 0xc0))(this);
        uVar4 = iVar3 - iVar2;
        if (0 < (int)uVar4) goto LAB_0122db2c;
        lVar5 = -1;
        fVar10 = -3.4028235e+38;
        if (fVar9 < -3.4028235e+38) goto LAB_0122dbb4;
      }
      else {
        uVar4 = 0x80;
LAB_0122db2c:
        uVar7 = 0;
        pfVar6 = local_890;
        do {
          (**(code **)(*(long *)this + 0xd8))(this,uVar7 & 0xffffffff,pfVar6);
          uVar7 = uVar7 + 1;
          pfVar6 = pfVar6 + 4;
        } while (uVar4 != uVar7);
        lVar5 = 0;
        iVar3 = -1;
        pfVar6 = local_890 + 2;
        fVar8 = -3.4028235e+38;
        do {
          fVar10 = fVar11 * pfVar6[-2] + fVar12 * pfVar6[-1] + fVar13 * *pfVar6;
          iVar1 = (int)lVar5;
          if (fVar10 <= fVar8) {
            fVar10 = fVar8;
            iVar1 = iVar3;
          }
          iVar3 = iVar1;
          lVar5 = lVar5 + 1;
          pfVar6 = pfVar6 + 4;
          fVar8 = fVar10;
        } while ((int)uVar4 != lVar5);
        lVar5 = (long)iVar3;
        if (fVar9 < fVar10) {
LAB_0122dbb4:
          fVar9 = fVar10;
          local_894 = local_890[lVar5 * 4];
        }
      }
      iVar2 = iVar2 + 0x80;
      iVar3 = (**(code **)(*(long *)this + 0xc0))(this);
    } while (iVar2 < iVar3);
  }
  return local_894;
}

