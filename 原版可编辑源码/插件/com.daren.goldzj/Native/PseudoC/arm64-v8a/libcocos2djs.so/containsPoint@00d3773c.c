
/* dragonBones::RectangleBoundingBoxData::containsPoint(float, float) */

bool __thiscall
dragonBones::RectangleBoundingBoxData::containsPoint
          (RectangleBoundingBoxData *this,float param_1,float param_2)

{
  if ((*(float *)(this + 0x18) * -0.5 <= param_1) && (param_1 <= *(float *)(this + 0x18) * 0.5)) {
    return param_2 <= *(float *)(this + 0x1c) * 0.5 && *(float *)(this + 0x1c) * -0.5 <= param_2;
  }
  return false;
}

