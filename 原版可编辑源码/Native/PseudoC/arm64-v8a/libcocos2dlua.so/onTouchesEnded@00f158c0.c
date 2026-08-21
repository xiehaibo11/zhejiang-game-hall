
/* cocos2d::Layer::onTouchesEnded(std::__ndk1::vector<cocos2d::Touch*,
   std::__ndk1::allocator<cocos2d::Touch*> > const&, cocos2d::Event*) */

void __thiscall cocos2d::Layer::onTouchesEnded(Layer *this,vector *param_1,Event *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 local_58 [2];
  undefined4 *local_50;
  undefined4 local_48 [2];
  Layer *local_40;
  vector *pvStack_38;
  Event *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x208) == 1) {
    local_50 = local_48;
    local_48[0] = 2;
    local_58[0] = 5;
    local_40 = this;
    pvStack_38 = param_1;
    local_30 = param_2;
    puVar2 = (undefined8 *)ScriptEngineManager::getInstance();
    (**(code **)(*(long *)*puVar2 + 0x78))((long *)*puVar2,local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

