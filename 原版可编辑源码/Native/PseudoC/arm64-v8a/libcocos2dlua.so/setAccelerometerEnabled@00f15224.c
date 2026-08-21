
/* cocos2d::Layer::setAccelerometerEnabled(bool) */

void __thiscall cocos2d::Layer::setAccelerometerEnabled(Layer *this,bool param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  Layer *local_58;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((Layer)param_1 == this[0x2f9]) goto LAB_00f152e0;
  this[0x2f9] = (Layer)param_1;
  Device::setAccelerometerEnabled(param_1);
  EventDispatcher::removeEventListener
            (*(EventDispatcher **)(this + 0x1f0),*(EventListener **)(this + 0x310));
  *(undefined8 *)(this + 0x310) = 0;
  if (!param_1) goto LAB_00f152e0;
  local_70 = &PTR_FUN_01702028;
  uStack_60 = 1;
  local_68 = 0x5b8;
  local_58 = this;
  local_50 = (long *)&local_70;
  uVar2 = EventListenerAcceleration::create((function *)&local_70);
  *(undefined8 *)(this + 0x310) = uVar2;
  if (&local_70 == (undefined ***)local_50) {
                    /* try { // try from 00f152c8 to 0101539f has its CatchHandler @ 00f15208 */
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_00f152cc:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
                    /* try { // try from 00f152c0 to 010152c7 has its CatchHandler @ 00f15368 */
    goto LAB_00f152cc;
  }
  EventDispatcher::addEventListenerWithSceneGraphPriority
            (*(EventDispatcher **)(this + 0x1f0),*(EventListener **)(this + 0x310),(Node *)this);
LAB_00f152e0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

