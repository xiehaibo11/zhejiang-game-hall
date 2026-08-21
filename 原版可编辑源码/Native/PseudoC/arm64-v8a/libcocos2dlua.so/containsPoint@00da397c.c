
/* dragonBones::PolygonBoundingBoxData::containsPoint(float, float) */

uint __thiscall
dragonBones::PolygonBoundingBoxData::containsPoint
          (PolygonBoundingBoxData *this,float param_1,float param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_1 < *(float *)(this + 0x20)) {
    return 0;
  }
  if (*(float *)(this + 0x18) < param_1) {
    return 0;
  }
  if (param_2 < *(float *)(this + 0x24)) {
    return 0;
  }
  if (param_2 <= *(float *)(this + 0x1c)) {
    lVar2 = *(long *)(this + 0x28);
    if (*(long *)(this + 0x30) - lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar5 = *(long *)(this + 0x30) - lVar2 >> 2;
      uVar4 = 0;
      uVar6 = uVar5 - 2;
      uVar7 = 0;
      do {
        fVar8 = *(float *)(lVar2 + uVar6 * 4 + 4);
        fVar9 = *(float *)(lVar2 + uVar7 * 4 + 4);
        uVar3 = uVar4;
        if ((((param_2 <= fVar8) && (fVar9 < param_2)) || ((fVar8 < param_2 && (param_2 <= fVar9))))
           && (fVar10 = *(float *)(lVar2 + uVar7 * 4), uVar3 = ~uVar4 & 1,
              param_1 <=
              fVar10 + ((param_2 - fVar9) * (*(float *)(lVar2 + uVar6 * 4) - fVar10)) /
                       (fVar8 - fVar9))) {
          uVar3 = uVar4;
        }
        uVar4 = uVar3;
        uVar1 = uVar7 + 2;
        uVar6 = uVar7;
        uVar7 = uVar1;
      } while (uVar1 < uVar5);
    }
    return uVar4;
  }
  return 0;
}

