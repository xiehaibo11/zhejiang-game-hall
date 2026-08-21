
/* non-virtual thunk to LuaAssetsManagerDelegateProtocol::onSuccess() */

void __thiscall LuaAssetsManagerDelegateProtocol::onSuccess(LuaAssetsManagerDelegateProtocol *this)

{
  long lVar1;
  int iVar2;
  ScriptHandlerMgr *pSVar4;
  long *plVar3;
  LuaAssetsManagerDelegateProtocol *local_40;
  undefined4 *puStack_38;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pSVar4._0_4_ = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  iVar2 = cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar4._0_4_,this + -0x28,0x20);
  if (iVar2 != 0) {
    puStack_38 = local_30;
    local_30[0] = 0;
    local_40 = this + -0x28;
    plVar3 = (long *)cocos2d::LuaEngine::getInstance();
    (**(code **)(*plVar3 + 0x128))((int)plVar3,0x20,&local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

