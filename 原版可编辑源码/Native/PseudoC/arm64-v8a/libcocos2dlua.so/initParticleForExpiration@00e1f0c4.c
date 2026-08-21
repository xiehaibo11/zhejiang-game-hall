
/* cocos2d::PUParticleSystem3D::initParticleForExpiration(cocos2d::PUParticle3D*, float) */

void __thiscall
cocos2d::PUParticleSystem3D::initParticleForExpiration
          (PUParticleSystem3D *this,PUParticle3D *param_1,float param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 in_register_00005004;
  
  if (*(int *)(param_1 + 0x90) == 1) {
    unPrepared(*(PUParticleSystem3D **)(param_1 + 0x78));
  }
  else if (*(int *)(param_1 + 0x90) == 2) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x50))();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x110);
  for (puVar1 = *(undefined8 **)(param_1 + 0x108); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(long *)*puVar1 + 0x38))
              (CONCAT44(in_register_00005004,param_2),(long *)*puVar1,param_1);
  }
  puVar2 = *(undefined8 **)(this + 0x428);
  for (puVar1 = *(undefined8 **)(this + 0x420); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(long *)*puVar1 + 0x18))((long *)*puVar1,this,param_1);
  }
  return;
}

