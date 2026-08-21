
/* non-virtual thunk to
   LuaAssetsManagerDelegateProtocol::onError(cocos2d::extension::AssetsManager::ErrorCode) */

void __thiscall
LuaAssetsManagerDelegateProtocol::onError(LuaAssetsManagerDelegateProtocol *this,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  ScriptHandlerMgr *pSVar4;
  long *plVar3;
  LuaAssetsManagerDelegateProtocol *local_50;
  undefined4 *puStack_48;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pSVar4._0_4_ = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  iVar2 = cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar4._0_4_,this + -0x28,0x21);
  if (iVar2 != 0) {
    puStack_48 = local_40;
    local_50 = this + -0x28;
    local_40[0] = param_2;
    plVar3 = (long *)cocos2d::LuaEngine::getInstance();
    (**(code **)(*plVar3 + 0x128))((int)plVar3,0x21,&local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

