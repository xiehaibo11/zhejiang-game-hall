
/* cocos2d::extension::Control::sendActionsForControlEvents(cocos2d::extension::Control::EventType)
    */

void __thiscall cocos2d::extension::Control::sendActionsForControlEvents(Control *this,uint param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 local_90 [2];
  Control **local_88;
  Control *local_80;
  uint *puStack_78;
  uint local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_6c = param_2;
  Ref::retain((Ref *)this);
  uVar5 = 0;
  do {
    if ((param_2 & 1 << (ulong)(uVar5 & 0x1f)) != 0) {
      plVar3 = (long *)dispatchListforControlEvent(this);
      puVar1 = (undefined8 *)plVar3[1];
      for (puVar4 = (undefined8 *)*plVar3; puVar4 != puVar1; puVar4 = puVar4 + 1) {
        Invocation::invoke((Invocation *)*puVar4,(Ref *)this);
      }
      if (*(int *)(this + 0x208) == 1) {
        local_90[0] = 8;
        local_88 = &local_80;
        local_80 = this;
        puStack_78 = &local_6c;
        puVar4 = (undefined8 *)ScriptEngineManager::getInstance();
        (**(code **)(*(long *)*puVar4 + 0x78))((long *)*puVar4,local_90);
      }
    }
    uVar5 = uVar5 + 1;
    param_2 = local_6c;
  } while (uVar5 != 9);
  Ref::release((Ref *)this);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

