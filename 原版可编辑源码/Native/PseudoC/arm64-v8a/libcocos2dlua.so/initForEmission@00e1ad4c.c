
/* cocos2d::PUParticle3D::initForEmission() */

void __thiscall cocos2d::PUParticle3D::initForEmission(PUParticle3D *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x108);
  puVar1 = *(undefined8 **)(this + 0x110);
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x124) = 2;
  this[0x128] = (PUParticle3D)0x0;
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,this);
  }
  return;
}

