
/* tolua_Cocos2d_WebSocket_registerScriptHandler00(lua_State*) */

undefined8 tolua_Cocos2d_WebSocket_registerScriptHandler00(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ScriptHandlerMgr *pSVar5;
  double dVar6;
  tolua_Error atStack_48 [16];
  long local_38;
  
                    /* try { // try from 0090fde4 to 00a0fe13 has its CatchHandler @ 0090fd14 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0090fe14 to 00a0fe27 has its CatchHandler @ 0090fe6c */
  iVar2 = tolua_isusertype(param_1,1,"cc.WebSocket",0,atStack_48);
                    /* try { // try from 0090fe28 to 00a0fe87 has its CatchHandler @ 0090fd14 */
                    /* catch() { ... } // from try @ 0090fd68 with catch @ 0090fe6c
                       catch() { ... } // from try @ 0090fe14 with catch @ 0090fe6c */
  if ((((iVar2 == 0) ||
       (iVar2 = toluafix_isfunction(param_1,2,"LUA_FUNCTION",0,atStack_48), iVar2 == 0)) ||
      (iVar2 = tolua_isnumber(param_1,3,0,atStack_48), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,4,atStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'registerScriptHandler\'.",atStack_48);
  }
  else {
    lVar4 = tolua_tousertype(param_1,1,0);
    if (lVar4 != 0) {
      uVar3 = toluafix_ref_function(param_1,2,0);
      dVar6 = (double)tolua_tonumber(0,param_1,3);
      pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
      cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar5,lVar4,uVar3,(int)dVar6 + 0x10);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

