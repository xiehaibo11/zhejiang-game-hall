
/* lua_cocos2dx_TransitionFadeTR_easeActionWithAction(lua_State*) */

undefined8 lua_cocos2dx_TransitionFadeTR_easeActionWithAction(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *pvVar5;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.ActionInterval",0), (uVar3 & 1) != 0)) {
      uVar4 = tolua_tousertype(param_1,2,0);
      pvVar5 = (void *)(**(code **)(*plVar2 + 0x550))(plVar2,uVar4);
      if (pvVar5 != (void *)0x0) {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "cc.ActionInterval");
        return 1;
      }
      lua_pushnil(param_1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_TransitionFadeTR_easeActionWithAction\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TransitionFadeTR:easeActionWithAction",iVar1 + -1,1);
  }
  return 0;
}

