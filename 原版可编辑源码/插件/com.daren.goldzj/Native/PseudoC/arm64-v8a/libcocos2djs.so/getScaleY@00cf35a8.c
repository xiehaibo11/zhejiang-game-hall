
/* spine::Skeleton::getScaleY() */

float __thiscall spine::Skeleton::getScaleY(Skeleton *this)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 0x138);
  uVar1 = Bone::isYDown();
  fVar2 = -1.0;
  if ((uVar1 & 1) == 0) {
    fVar2 = 1.0;
  }
  return fVar3 * fVar2;
}

