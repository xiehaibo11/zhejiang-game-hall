
/* LuaArmatureWrapper::addArmatureFileInfoAsyncCallback(float) */

void __thiscall
LuaArmatureWrapper::addArmatureFileInfoAsyncCallback(LuaArmatureWrapper *this,float param_1)

{
  long lVar1;
  int iVar2;
  ScriptHandlerMgr *pSVar4;
  long *plVar3;
  LuaArmatureWrapper *local_50;
  undefined4 *puStack_48;
  undefined4 local_40 [2];
  float *local_38;
  float local_2c;
  long local_28;
  
                    /* catch() { ... } // from try @ 00920a1c with catch @ 00920a74 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_1;
                    /* try { // try from 00920a88 to 00a20b3f has its CatchHandler @ 00920a88
                       catch() { ... } // from try @ 00920a88 with catch @ 00920a88
                       catch() { ... } // from try @ 00920bc0 with catch @ 00920a88 */
  pSVar4._0_4_ = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  iVar2 = cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar4._0_4_,this,0x23);
  if (iVar2 != 0) {
    local_38 = &local_2c;
    puStack_48 = local_40;
    local_40[0] = 2;
    local_50 = this;
    plVar3 = (long *)cocos2d::LuaEngine::getInstance();
    (**(code **)(*plVar3 + 0x128))((int)plVar3,0x23,&local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

