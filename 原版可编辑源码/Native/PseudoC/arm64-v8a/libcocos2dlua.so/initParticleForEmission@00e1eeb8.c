
/* cocos2d::PUParticleSystem3D::initParticleForEmission(cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PUParticleSystem3D::initParticleForEmission(PUParticleSystem3D *this,PUParticle3D *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x428);
  for (puVar1 = *(undefined8 **)(this + 0x420); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,this,param_1);
  }
  return;
}

