
/* cocos2d::TimerScriptHandler::trigger(float) */

void __thiscall cocos2d::TimerScriptHandler::trigger(TimerScriptHandler *this,float param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 local_48 [2];
  int *local_40;
  int local_38;
  float local_34;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x4c) != 0) {
    local_40 = &local_38;
    local_30 = 0;
    local_48[0] = 3;
    local_38 = *(int *)(this + 0x4c);
    local_34 = param_1;
    puVar2 = (undefined8 *)ScriptEngineManager::getInstance();
    (**(code **)(*(long *)*puVar2 + 0x78))((long *)*puVar2,local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

