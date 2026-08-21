
/* dragonBones::EllipseBoundingBoxData::containsPoint(float, float) */

bool __thiscall
dragonBones::EllipseBoundingBoxData::containsPoint
          (EllipseBoundingBoxData *this,float param_1,float param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  bVar1 = false;
  if ((*(float *)(this + 0x18) * -0.5 <= param_1) &&
     (fVar2 = *(float *)(this + 0x18) * 0.5, param_1 <= fVar2)) {
    bVar1 = false;
    if ((*(float *)(this + 0x1c) * -0.5 <= param_2) &&
       (fVar3 = *(float *)(this + 0x1c) * 0.5, param_2 <= fVar3)) {
      fVar3 = (fVar2 / fVar3) * param_2;
      bVar1 = SQRT(param_1 * param_1 + fVar3 * fVar3) <= fVar2;
    }
  }
  return bVar1;
}

