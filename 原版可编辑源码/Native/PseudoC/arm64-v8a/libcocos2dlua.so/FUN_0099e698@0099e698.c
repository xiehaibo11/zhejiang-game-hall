
undefined8 FUN_0099e698(lua_State *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ScriptHandlerMgr *pSVar4;
  double dVar5;
  
  if (param_1 != (lua_State *)0x0) {
    uVar3 = tolua_tousertype(param_1,1,0);
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 2) {
      uVar2 = toluafix_ref_function(param_1,2,0);
      dVar5 = (double)tolua_tonumber(0,param_1,3);
      pSVar4 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
      cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar4,uVar3,uVar2,(int)dVar5 + 0x15);
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.TableView:registerScriptHandler",iVar1 + -1,2);
    }
  }
  return 0;
}

