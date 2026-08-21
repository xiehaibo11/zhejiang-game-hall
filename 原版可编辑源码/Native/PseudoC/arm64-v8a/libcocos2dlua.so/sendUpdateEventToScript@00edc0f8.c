
/* cocos2d::ActionInterval::sendUpdateEventToScript(float, cocos2d::Action*) */

void __thiscall
cocos2d::ActionInterval::sendUpdateEventToScript(ActionInterval *this,float param_1,Action *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_1;
                    /* catch() { ... } // from try @ 00edc25c with catch @ 00edc134
                       catch() { ... } // from try @ 00edc390 with catch @ 00edc134 */
  if ((*(int *)(this + 0x48) == 2) &&
     (uVar2 = ScriptEngineManager::sendActionEventToJS(param_2,0,&local_2c), (uVar2 & 1) != 0)) {
    uVar3 = 1;
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

