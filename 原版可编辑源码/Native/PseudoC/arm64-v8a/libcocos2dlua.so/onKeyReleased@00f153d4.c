
/* cocos2d::Layer::onKeyReleased(cocos2d::EventKeyboard::KeyCode, cocos2d::Event*) */

void cocos2d::Layer::onKeyReleased(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 local_48 [2];
  undefined4 *local_40;
  undefined4 local_38 [2];
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x208) != 0) {
    local_40 = local_38;
    local_48[0] = 6;
    local_38[0] = param_2;
    local_30 = param_1;
    puVar2 = (undefined8 *)ScriptEngineManager::getInstance();
    (**(code **)(*(long *)*puVar2 + 0x78))((long *)*puVar2,local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

