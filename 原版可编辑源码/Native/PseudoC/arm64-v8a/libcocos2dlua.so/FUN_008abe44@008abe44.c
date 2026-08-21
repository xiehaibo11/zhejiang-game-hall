
undefined8 FUN_008abe44(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ScriptHandlerMgr *pSVar3;
  
  if (param_1 != 0) {
    uVar2 = tolua_tousertype(param_1,1,0);
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 0) {
      pSVar3 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
      cocos2d::ScriptHandlerMgr::removeObjectHandler(pSVar3,uVar2,0);
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.Node:unregisterScriptHandler",iVar1 + -1,0);
    }
  }
  return 0;
}

