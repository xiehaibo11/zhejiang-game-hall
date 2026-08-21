
/* cocos2d::Layer::onTouchCancelled(cocos2d::Touch*, cocos2d::Event*) */

void __thiscall cocos2d::Layer::onTouchCancelled(Layer *this,Touch *param_1,Event *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 local_58 [2];
  undefined4 *local_50;
  undefined4 local_48 [2];
  Layer *local_40;
  Touch *pTStack_38;
  Event *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x208) == 1) {
    local_50 = local_48;
    local_48[0] = 3;
    local_58[0] = 4;
    local_40 = this;
    pTStack_38 = param_1;
    local_30 = param_2;
    puVar2 = (undefined8 *)ScriptEngineManager::getInstance();
                    /* try { // try from 00f1578c to 010157f7 has its CatchHandler @ 00f1578c
                       catch() { ... } // from try @ 00f1578c with catch @ 00f1578c
                       catch() { ... } // from try @ 00f15810 with catch @ 00f1578c */
    (**(code **)(*(long *)*puVar2 + 0x78))((long *)*puVar2,local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

