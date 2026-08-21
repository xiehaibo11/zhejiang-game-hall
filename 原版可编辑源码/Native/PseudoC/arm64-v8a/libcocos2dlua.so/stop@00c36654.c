
/* cocostudio::ActionObject::stop() */

void __thiscall cocostudio::ActionObject::stop(ActionObject *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x30);
  for (puVar2 = *(undefined8 **)(this + 0x28); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x20))();
  }
  this[0x5a] = (ActionObject)0x0;
  cocos2d::Scheduler::unschedule(*(_func_void_float **)(this + 0x68),(Ref *)simulationActionUpdate);
  this[0x59] = (ActionObject)0x0;
  return;
}

