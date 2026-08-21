
/* cocos2d::PUParticle3D::calculateVelocity() const */

float __thiscall cocos2d::PUParticle3D::calculateVelocity(PUParticle3D *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = SQRT(*(float *)(this + 0xac) * *(float *)(this + 0xac) +
               *(float *)(this + 0xb0) * *(float *)(this + 0xb0) +
               *(float *)(this + 0xb4) * *(float *)(this + 0xb4));
  fVar2 = fVar1 / *(float *)(this + 0xcc);
  if (*(float *)(this + 0xcc) == 0.0) {
    fVar2 = fVar1;
  }
  return *(float *)(this + 200) * fVar2;
}

