
/* cocos2d::PUParticle3D::setOwnDimensions(float, float, float) */

void __thiscall
cocos2d::PUParticle3D::setOwnDimensions
          (PUParticle3D *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  
  this[0x120] = (PUParticle3D)0x1;
  if (param_1 != 0.0) {
    *(float *)(this + 0x44) = param_1;
  }
  if (param_2 != 0.0) {
    *(float *)(this + 0x48) = param_2;
  }
  if (param_3 == 0.0) {
    param_3 = *(float *)(this + 0x4c);
  }
  else {
    *(float *)(this + 0x4c) = param_3;
  }
  fVar1 = *(float *)(this + 0x48);
  if (*(float *)(this + 0x48) <= *(float *)(this + 0x44)) {
    fVar1 = *(float *)(this + 0x44);
  }
  if (fVar1 <= param_3) {
    fVar1 = param_3;
  }
  *(float *)(this + 0x104) = fVar1 * 0.5;
  return;
}

