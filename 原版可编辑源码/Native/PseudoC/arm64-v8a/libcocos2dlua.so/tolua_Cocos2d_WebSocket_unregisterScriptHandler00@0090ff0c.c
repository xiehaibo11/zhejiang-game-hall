
/* tolua_Cocos2d_WebSocket_unregisterScriptHandler00(lua_State*) */

undefined8 tolua_Cocos2d_WebSocket_unregisterScriptHandler00(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ScriptHandlerMgr *pSVar4;
  double dVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertype(param_1,1,"cc.WebSocket",0,auStack_48);
  if (((iVar2 == 0) || (iVar2 = tolua_isnumber(param_1,2,0,auStack_48), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,3,auStack_48), iVar2 == 0)) {
                    /* try { // try from 0090ffc0 to 00a101af has its CatchHandler @ 0090ffc0
                       catch() { ... } // from try @ 0090ffc0 with catch @ 0090ffc0
                       catch() { ... } // from try @ 00910230 with catch @ 0090ffc0 */
    tolua_error(param_1,"#ferror in function \'unregisterScriptHandler\'.",auStack_48);
  }
  else {
    lVar3 = tolua_tousertype(param_1,1,0);
    if (lVar3 != 0) {
      dVar5 = (double)tolua_tonumber(0,param_1,2);
      pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
      cocos2d::ScriptHandlerMgr::removeObjectHandler(pSVar4,lVar3,(int)dVar5 + 0x10);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

