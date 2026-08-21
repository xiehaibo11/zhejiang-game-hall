
/* cocos2d::Quaternion::inverse() */

undefined8 __thiscall cocos2d::Quaternion::inverse(Quaternion *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *(float *)(this + 8);
  fVar4 = *(float *)(this + 0xc);
  fVar1 = (float)*(undefined8 *)this;
  fVar2 = (float)((ulong)*(undefined8 *)this >> 0x20);
  fVar5 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
  if (fVar5 == 1.0) {
    *(ulong *)this = CONCAT44(-fVar2,-fVar1);
    *(float *)(this + 8) = -fVar3;
    return 1;
  }
  if (fVar5 < 1e-06) {
    return 0;
  }
  fVar5 = 1.0 / fVar5;
  *(float *)(this + 8) = -(fVar3 * fVar5);
  *(float *)(this + 0xc) = fVar4 * fVar5;
  *(ulong *)this = CONCAT44(-(fVar2 * fVar5),-(fVar1 * fVar5));
  return 1;
}

