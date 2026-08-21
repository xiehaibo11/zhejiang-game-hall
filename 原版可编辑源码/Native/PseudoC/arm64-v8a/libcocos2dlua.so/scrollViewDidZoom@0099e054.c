
/* non-virtual thunk to LuaScrollViewDelegate::scrollViewDidZoom(cocos2d::extension::ScrollView*) */

void __thiscall
LuaScrollViewDelegate::scrollViewDidZoom(LuaScrollViewDelegate *this,ScrollView *param_1)

{
  long lVar1;
  ScriptHandlerMgr *pSVar2;
  long *plVar3;
  undefined4 local_c8 [2];
  int *local_c0;
  int local_b8 [18];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 != (ScrollView *)0x0) {
    pSVar2 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    this = (LuaScrollViewDelegate *)cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar2,param_1,0x16)
    ;
    if ((int)this != 0) {
      local_70 = 0;
      local_b8[0] = (int)this;
      __strncpy_chk2((ulong)local_b8 | 4,&DAT_013c996e,0x40,0x40,1);
      uStack_50 = 0;
      local_58 = 0;
      uStack_60 = 0;
      local_68 = 0;
      uStack_30 = 0;
      local_38 = 0;
      uStack_40 = 0;
      local_48 = 0;
      local_c8[0] = 9;
      local_c0 = local_b8;
      plVar3 = (long *)cocos2d::LuaEngine::getInstance();
      this = (LuaScrollViewDelegate *)(**(code **)(*plVar3 + 0x78))(plVar3,local_c8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

