
undefined8 FUN_008e0fc0(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ScriptHandlerMgr *pSVar3;
  
  uVar2 = tolua_tousertype(param_1,1,0);
  pSVar3 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  iVar1 = cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar3,uVar2,1);
  if (iVar1 < 0) {
    lua_pushnil(param_1);
  }
  else {
    toluafix_get_function_by_refid(param_1,iVar1);
  }
  return 1;
}

