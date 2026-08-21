
/* cocos2d::Layer::executeScriptTouchesHandler(cocos2d::EventTouch::EventCode,
   std::__ndk1::vector<cocos2d::Touch*, std::__ndk1::allocator<cocos2d::Touch*> > const&,
   cocos2d::Event*) */

void __thiscall
cocos2d::Layer::executeScriptTouchesHandler
          (Layer *this,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_58 [2];
  undefined4 *local_50;
  undefined4 local_48 [2];
  Layer *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x208) == 1) {
    local_50 = local_48;
    local_58[0] = 5;
    local_48[0] = param_2;
    local_40 = this;
    uStack_38 = param_3;
    local_30 = param_4;
    puVar2 = (undefined8 *)ScriptEngineManager::getInstance();
    uVar3 = (**(code **)(*(long *)*puVar2 + 0x78))((long *)*puVar2,local_58);
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

