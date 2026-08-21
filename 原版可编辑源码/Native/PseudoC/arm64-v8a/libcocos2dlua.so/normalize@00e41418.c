
/* cocos2d::PUPlane::normalize() */

void __thiscall cocos2d::PUPlane::normalize(PUPlane *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)this;
  fVar3 = *(float *)(this + 4);
  fVar4 = *(float *)(this + 8);
  fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
  if (0.0 < fVar1) {
    fVar1 = 1.0 / fVar1;
    *(float *)this = fVar2 * fVar1;
    *(float *)(this + 4) = fVar3 * fVar1;
    *(float *)(this + 8) = fVar4 * fVar1;
    *(float *)(this + 0xc) = fVar1 * *(float *)(this + 0xc);
  }
  return;
}

