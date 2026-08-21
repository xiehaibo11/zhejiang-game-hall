
/* cocos2d::Plane::initPlane(cocos2d::Vec3 const&, float) */

void __thiscall cocos2d::Plane::initPlane(Plane *this,Vec3 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  fVar4 = 1.0 / SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  *(float *)this = fVar1 * fVar4;
  *(float *)(this + 4) = fVar2 * fVar4;
  *(float *)(this + 8) = fVar3 * fVar4;
  *(float *)(this + 0xc) = fVar4 * param_2;
  return;
}

