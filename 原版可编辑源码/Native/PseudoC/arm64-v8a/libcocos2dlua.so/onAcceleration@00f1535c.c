
/* cocos2d::Layer::onAcceleration(cocos2d::Acceleration*, cocos2d::Event*) */

void cocos2d::Layer::onAcceleration(Acceleration *param_1,Event *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 local_48 [2];
  Acceleration **local_40;
  Acceleration *local_38;
  Event *pEStack_30;
  long local_28;
  
                    /* catch() { ... } // from try @ 00f152c0 with catch @ 00f15368 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x208) != 0) {
    local_40 = &local_38;
    local_48[0] = 7;
    local_38 = param_1;
    pEStack_30 = param_2;
    puVar2 = (undefined8 *)ScriptEngineManager::getInstance();
    (**(code **)(*(long *)*puVar2 + 0x78))((long *)*puVar2,local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

