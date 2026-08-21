
/* cocostudio::ActionObject::simulationActionUpdate(float) */

void cocostudio::ActionObject::simulationActionUpdate(float param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ActionObject *in_x0;
  uint uVar3;
  undefined8 *puVar4;
  float extraout_s0;
  
  puVar1 = *(undefined8 **)(in_x0 + 0x30);
  if (*(undefined8 **)(in_x0 + 0x28) != puVar1) {
    uVar3 = 1;
    puVar4 = *(undefined8 **)(in_x0 + 0x28);
    do {
      uVar2 = (**(code **)(*(long *)*puVar4 + 0x38))(param_1);
      uVar3 = uVar3 & uVar2;
      if (puVar1 + -1 == puVar4) break;
      puVar4 = puVar4 + 1;
      param_1 = extraout_s0;
    } while ((uVar2 & 1) != 0);
    if (uVar3 == 0) {
      return;
    }
  }
  if (*(long **)(in_x0 + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x70) + 0x50))();
  }
  if (in_x0[0x58] != (ActionObject)0x0) {
    play(in_x0);
    return;
  }
  in_x0[0x5a] = (ActionObject)0x0;
  cocos2d::Scheduler::unschedule(*(_func_void_float **)(in_x0 + 0x68),(Ref *)simulationActionUpdate)
  ;
  return;
}

