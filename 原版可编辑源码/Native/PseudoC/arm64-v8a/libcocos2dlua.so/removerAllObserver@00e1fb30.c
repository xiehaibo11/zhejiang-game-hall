
/* cocos2d::PUParticleSystem3D::removerAllObserver() */

void __thiscall cocos2d::PUParticleSystem3D::removerAllObserver(PUParticleSystem3D *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(this + 0x398);
  puVar3 = *(undefined8 **)(this + 0x3a0);
  if (puVar1 != puVar3) {
    do {
      puVar2 = puVar1 + 1;
      Ref::release((Ref *)*puVar1);
      puVar1 = puVar2;
    } while (puVar3 != puVar2);
    puVar1 = *(undefined8 **)(this + 0x398);
  }
                    /* try { // try from 00e1fb68 to 00f1fb73 has its CatchHandler @ 00e1fd40 */
  *(undefined8 **)(this + 0x3a0) = puVar1;
  return;
}

