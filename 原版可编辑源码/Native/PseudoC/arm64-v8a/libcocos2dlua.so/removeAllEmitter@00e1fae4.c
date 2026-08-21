
/* cocos2d::PUParticleSystem3D::removeAllEmitter() */

void __thiscall cocos2d::PUParticleSystem3D::removeAllEmitter(PUParticleSystem3D *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(this + 0x380);
  puVar3 = *(undefined8 **)(this + 0x388);
                    /* try { // try from 00e1fb04 to 00f1fb4b has its CatchHandler @ 00e1fd58 */
  if (puVar1 != puVar3) {
    do {
      puVar2 = puVar1 + 1;
      Ref::release((Ref *)*puVar1);
      puVar1 = puVar2;
    } while (puVar3 != puVar2);
    puVar1 = *(undefined8 **)(this + 0x380);
  }
  *(undefined8 **)(this + 0x388) = puVar1;
  return;
}

