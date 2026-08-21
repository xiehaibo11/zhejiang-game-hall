
/* cocos2d::Vec4::normalize() */

void __thiscall cocos2d::Vec4::normalize(Vec4 *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (float)*(undefined8 *)this;
  fVar2 = (float)((ulong)*(undefined8 *)this >> 0x20);
  fVar3 = (float)*(undefined8 *)(this + 8);
  fVar4 = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
  fVar5 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
  if ((fVar5 != 1.0) && (fVar5 = SQRT(fVar5), 2e-37 <= fVar5)) {
    fVar5 = 1.0 / fVar5;
    *(ulong *)(this + 8) = CONCAT44(fVar4 * fVar5,fVar3 * fVar5);
    *(ulong *)this = CONCAT44(fVar2 * fVar5,fVar1 * fVar5);
  }
  return;
}

