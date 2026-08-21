
/* cocos2d::Component::onEnter() */

void __thiscall cocos2d::Component::onEnter(Component *this)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 local_60 [2];
  Component **local_58;
  Component *local_50;
  undefined4 *puStack_48;
  undefined4 local_3c;
  long local_38;
  
                    /* catch() { ... } // from try @ 00ef3118 with catch @ 00ef30c4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x4c) == 2) {
    local_3c = 0;
    puVar2 = (undefined8 *)ScriptEngineManager::getInstance();
    plVar4 = (long *)*puVar2;
    uVar3 = (**(code **)(*plVar4 + 0x90))(plVar4);
    if ((uVar3 & 1) == 0) {
      puStack_48 = &local_3c;
      local_58 = &local_50;
      local_60[0] = 10;
      local_50 = this;
      (**(code **)(*plVar4 + 0x78))(plVar4,local_60);
    }
    else {
                    /* try { // try from 00ef3110 to 00ff3117 has its CatchHandler @ 00ef31e0 */
      (**(code **)(*plVar4 + 0x88))(plVar4,0);
                    /* try { // try from 00ef3118 to 00ff31fb has its CatchHandler @ 00ef30c4 */
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

