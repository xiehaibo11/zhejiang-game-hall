
/* cocos2d::PUParticle3D::initForExpiration(float) */

void __thiscall cocos2d::PUParticle3D::initForExpiration(PUParticle3D *this,float param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 in_register_00005004;
  
  puVar1 = *(undefined8 **)(this + 0x110);
  for (puVar2 = *(undefined8 **)(this + 0x108); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x38))
              (CONCAT44(in_register_00005004,param_1),(long *)*puVar2,this);
  }
  return;
}

