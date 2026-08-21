
/* LuaAssetsManagerDelegateProtocol::onProgress(int) */

void __thiscall
LuaAssetsManagerDelegateProtocol::onProgress(LuaAssetsManagerDelegateProtocol *this,int param_1)

{
  long lVar1;
  int iVar2;
  ScriptHandlerMgr *pSVar4;
  long *plVar3;
  LuaAssetsManagerDelegateProtocol *local_50;
  int *piStack_48;
  int local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pSVar4._0_4_ = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  iVar2 = cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar4._0_4_,this,0x1f);
  if (iVar2 != 0) {
    piStack_48 = local_40;
    local_50 = this;
    local_40[0] = param_1;
    plVar3 = (long *)cocos2d::LuaEngine::getInstance();
    (**(code **)(*plVar3 + 0x128))((int)plVar3,0x1f,&local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

