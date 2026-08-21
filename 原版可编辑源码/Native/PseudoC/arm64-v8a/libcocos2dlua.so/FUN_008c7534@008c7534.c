
undefined8 FUN_008c7534(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ScriptHandlerMgr *pSVar5;
  tolua_Error atStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertype(param_1,1,"cc.GLNode",0,atStack_48);
  if ((((iVar2 == 0) || (iVar2 = tolua_isvaluenil(param_1,2,atStack_48), iVar2 != 0)) ||
      (iVar2 = toluafix_isfunction(param_1,2,"LUA_FUNCTION",0,atStack_48), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,3,atStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'registerScriptDrawHandler\'.",atStack_48);
  }
  else {
    uVar4 = tolua_tousertype(param_1,1,0);
    uVar3 = toluafix_ref_function(param_1,2,0);
    pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar5,uVar4,uVar3,0x14);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

