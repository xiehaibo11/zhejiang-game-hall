
/* cocostudio::ArmatureAnimation::stop() */

void __thiscall cocostudio::ArmatureAnimation::stop(ArmatureAnimation *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x98);
  puVar1 = *(undefined8 **)(this + 0xa0);
  if (puVar3 != puVar1) {
    do {
      puVar2 = puVar3 + 1;
      (**(code **)(*(long *)*puVar3 + 0x28))();
      puVar3 = puVar2;
    } while (puVar1 != puVar2);
    puVar3 = *(undefined8 **)(this + 0x98);
  }
  *(undefined8 **)(this + 0xa0) = puVar3;
  ProcessBase::stop((ProcessBase *)this);
  return;
}

