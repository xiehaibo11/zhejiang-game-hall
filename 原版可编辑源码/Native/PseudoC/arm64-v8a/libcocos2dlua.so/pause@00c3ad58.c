
/* cocostudio::ArmatureAnimation::pause() */

void __thiscall cocostudio::ArmatureAnimation::pause(ArmatureAnimation *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xa0);
  for (puVar2 = *(undefined8 **)(this + 0x98); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x18))();
  }
  ProcessBase::pause((ProcessBase *)this);
  return;
}

