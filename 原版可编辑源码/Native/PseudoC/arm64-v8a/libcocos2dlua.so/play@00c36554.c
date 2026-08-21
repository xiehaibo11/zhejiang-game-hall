
/* cocostudio::ActionObject::play() */

void __thiscall cocostudio::ActionObject::play(ActionObject *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(this + 0x30);
  for (puVar1 = *(undefined8 **)(this + 0x28); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(long *)*puVar1 + 0x20))();
  }
  this[0x5a] = (ActionObject)0x0;
  cocos2d::Scheduler::unschedule(*(_func_void_float **)(this + 0x68),(Ref *)simulationActionUpdate);
  puVar1 = *(undefined8 **)(this + 0x30);
  this[0x59] = (ActionObject)0x0;
  *(undefined4 *)(this + 0x60) = 0;
  puVar2 = *(undefined8 **)(this + 0x28);
  if (*(undefined8 **)(this + 0x28) != puVar1) {
    do {
      puVar3 = puVar2 + 1;
      (**(code **)(*(long *)*puVar2 + 0x10))(0);
      puVar2 = puVar3;
    } while (puVar1 != puVar3);
    puVar2 = *(undefined8 **)(this + 0x30);
    for (puVar1 = *(undefined8 **)(this + 0x28); puVar1 != puVar2; puVar1 = puVar1 + 1) {
      (**(code **)(*(long *)*puVar1 + 0x18))();
    }
  }
  if (this[0x58] == (ActionObject)0x0) {
    cocos2d::Scheduler::schedule
              (*(Scheduler **)(this + 0x68),simulationActionUpdate,(Ref *)0x0,0.0,SUB81(this,0));
    return;
  }
  cocos2d::Scheduler::schedule
            ((_func_void_float *)*(Scheduler **)(this + 0x68),(Ref *)simulationActionUpdate,0.0,0,
             0.0,SUB81(this,0));
  return;
}

