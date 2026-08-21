
/* cocos2d::PUParticleSystem3D::update(float) */

void __thiscall cocos2d::PUParticleSystem3D::update(PUParticleSystem3D *this,float param_1)

{
  int iVar1;
  
  if (((this[0x379] != (PUParticleSystem3D)0x0) && (this[0x490] == (PUParticleSystem3D)0x0)) &&
     (*(int *)(this + 0x300) != 2)) {
    if ((*(int *)(this + 0x300) == 0) &&
       (iVar1 = (**(code **)(*(long *)this + 0x560))(this), iVar1 < 1)) {
      forceStopParticleSystem(this);
      return;
    }
    forceUpdate(param_1);
    return;
  }
  return;
}

