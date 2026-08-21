
void FUN_008b7a90(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 008b7a44 with catch @ 008b7aac */
  uStack_30 = *param_2;
  local_38 = *(undefined8 *)(param_1 + 8);
  plVar2 = (long *)cocos2d::LuaEngine::getInstance();
                    /* try { // try from 008b7ac8 to 009b7b1f has its CatchHandler @ 008b7ac8
                       catch() { ... } // from try @ 008b7ac8 with catch @ 008b7ac8
                       catch() { ... } // from try @ 008b7b38 with catch @ 008b7ac8 */
  (**(code **)(*plVar2 + 0x128))(plVar2,0x25,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

