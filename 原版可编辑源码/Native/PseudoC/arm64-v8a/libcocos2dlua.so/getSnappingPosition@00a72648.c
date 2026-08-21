
/* fairygui::GComponent::getSnappingPosition(cocos2d::Vec2 const&) */

float __thiscall fairygui::GComponent::getSnappingPosition(GComponent *this,Vec2 *param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  
  uVar8 = *(long *)(this + 0x1e8) - *(long *)(this + 0x1e0);
  iVar7 = (int)(uVar8 >> 3);
  if (iVar7 == 0) {
    return *(float *)param_1;
  }
  if (this[600] != (GComponent)0x0) {
    (**(code **)(*(long *)this + 0xe8))(this);
  }
  fVar9 = *(float *)param_1;
  if (*(float *)(param_1 + 4) == 0.0) {
    lVar3 = 0;
    iVar4 = 0;
    goto joined_r0x00a726ec;
  }
  if (iVar7 < 1) {
    uVar5 = 0;
    lVar3 = 0;
    if (iVar7 == 0) goto LAB_00a72704;
  }
  else {
    uVar5 = 0;
    do {
      lVar3 = *(long *)(*(long *)(this + 0x1e0) + uVar5 * 8);
      if (*(float *)(param_1 + 4) < *(float *)(lVar3 + 0xc4)) {
        if ((int)uVar5 == 0) {
          if (iVar7 != 0) goto LAB_00a7270c;
        }
        else if ((int)uVar5 != iVar7) goto LAB_00a7270c;
        break;
      }
      uVar5 = uVar5 + 1;
    } while ((uVar8 >> 3 & 0xffffffff) != uVar5);
LAB_00a72704:
    uVar5 = uVar8 >> 3 & 0xffffffff;
  }
LAB_00a7270c:
  iVar4 = (int)uVar5;
joined_r0x00a726ec:
  if (fVar9 != 0.0) {
    uVar1 = 0;
    if (iVar4 != 0) {
      uVar1 = iVar4 - 1;
    }
    uVar5 = (ulong)uVar1;
    if ((int)uVar1 < iVar7) {
      lVar6 = (uVar5 << 0x20) + -0x100000000;
      do {
        lVar3 = *(long *)(*(long *)(this + 0x1e0) + uVar5 * 8);
        if (fVar9 < *(float *)(lVar3 + 0xc0)) {
          iVar4 = (int)uVar5;
          if (iVar4 == 0) {
            if (iVar7 != 0) {
              return 0.0;
            }
            goto LAB_00a7276c;
          }
          lVar6 = *(long *)(*(long *)(this + 0x1e0) + (lVar6 >> 0x1d));
          fVar10 = *(float *)(lVar6 + 0xc0);
          bVar2 = fVar10 + *(float *)(lVar6 + 200) * 0.5 <= fVar9;
          fVar9 = fVar10;
          fVar10 = *(float *)(lVar3 + 0xc0);
          if (bVar2) goto joined_r0x00a727d4;
          break;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x100000000;
      } while ((long)uVar5 < (long)(uVar8 * 0x20000000) >> 0x20);
    }
    iVar4 = (int)uVar5;
    fVar10 = fVar9;
joined_r0x00a727d4:
    fVar9 = fVar10;
    if (iVar4 == iVar7) {
LAB_00a7276c:
      fVar9 = *(float *)(lVar3 + 0xc0);
    }
  }
  return fVar9;
}

