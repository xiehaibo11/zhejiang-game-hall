
/* cocostudio::ArmatureAnimation::resume() */

void __thiscall cocostudio::ArmatureAnimation::resume(ArmatureAnimation *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0xa0);
  for (puVar2 = *(undefined8 **)(this + 0x98); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x20))();
  }
  ProcessBase::resume((ProcessBase *)this);
  return;
}

