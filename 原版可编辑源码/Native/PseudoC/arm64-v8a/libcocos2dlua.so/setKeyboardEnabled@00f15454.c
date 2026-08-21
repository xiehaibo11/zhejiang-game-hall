
/* cocos2d::Layer::setKeyboardEnabled(bool) */

void __thiscall cocos2d::Layer::setKeyboardEnabled(Layer *this,bool param_1)

{
  long lVar1;
  EventListener *pEVar2;
  code *pcVar3;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  Layer *local_68;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((Layer)param_1 == this[0x2fa]) goto LAB_00f1556c;
  this[0x2fa] = (Layer)param_1;
  EventDispatcher::removeEventListener
            (*(EventDispatcher **)(this + 0x1f0),*(EventListener **)(this + 0x308));
  *(undefined8 *)(this + 0x308) = 0;
  if (!param_1) goto LAB_00f1556c;
  pEVar2 = (EventListener *)EventListenerKeyboard::create();
  local_80 = &PTR_FUN_017020c0;
  uStack_70 = 1;
  local_78 = 0x620;
  local_68 = this;
  local_60 = (long *)&local_80;
  FUN_008af1b8(&local_80,pEVar2 + 0xa0);
  if (&local_80 == (undefined ***)local_60) {
    pcVar3 = *(code **)(*local_60 + 0x20);
LAB_00f15504:
    (*pcVar3)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar3 = *(code **)(*local_60 + 0x28);
    goto LAB_00f15504;
  }
  local_80 = &PTR_FUN_017020c0;
  uStack_70 = 1;
  local_78 = 0x628;
  local_68 = this;
  local_60 = (long *)&local_80;
  FUN_008af1b8(&local_80,pEVar2 + 0xd0);
  if (&local_80 == (undefined ***)local_60) {
    pcVar3 = *(code **)(*local_60 + 0x20);
LAB_00f15554:
    (*pcVar3)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar3 = *(code **)(*local_60 + 0x28);
    goto LAB_00f15554;
  }
  EventDispatcher::addEventListenerWithSceneGraphPriority
            (*(EventDispatcher **)(this + 0x1f0),pEVar2,(Node *)this);
  *(EventListener **)(this + 0x308) = pEVar2;
LAB_00f1556c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

