
undefined8 FUN_0099dd44(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ScriptHandlerMgr *pSVar3;
  double dVar4;
  
  if (param_1 != 0) {
    uVar2 = tolua_tousertype(param_1,1,0);
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 1) {
      dVar4 = (double)tolua_tonumber(0,param_1,2);
      pSVar3 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
      cocos2d::ScriptHandlerMgr::removeObjectHandler(pSVar3,uVar2,(int)dVar4 + 0x15);
    }
    else {
      luaL_error(param_1,
                 "%s function of ScrollView  has wrong number of arguments: %d, was expecting %d\n",
                 "cc.ScrollView:unregisterScriptHandler",iVar1 + -1,1);
    }
  }
  return 0;
}

