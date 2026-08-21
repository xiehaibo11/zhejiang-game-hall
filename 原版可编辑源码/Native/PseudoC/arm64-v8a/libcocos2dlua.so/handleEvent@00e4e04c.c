
/* cocos2d::PUObserver::handleEvent(cocos2d::PUParticle3D*, float) */

void __thiscall
cocos2d::PUObserver::handleEvent(PUObserver *this,PUParticle3D *param_1,float param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 in_register_00005004;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(this + 0x80);
  puVar1 = *(undefined8 **)(this + 0x88);
  if (puVar2 != puVar1) {
    do {
      puVar3 = puVar2 + 1;
      (**(code **)(*(long *)*puVar2 + 0x18))
                (CONCAT44(in_register_00005004,param_2),(long *)*puVar2,*(undefined8 *)(this + 0x28)
                 ,param_1);
      puVar2 = puVar3;
    } while (puVar1 != puVar3);
    this[0x65] = (PUObserver)0x1;
  }
  return;
}

