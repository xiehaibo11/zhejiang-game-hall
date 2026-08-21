
/* lua_cocos2dx_studio_Timeline_setActionTimeline(lua_State*) */

undefined4 lua_cocos2dx_studio_Timeline_setActionTimeline(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"ccs.ActionTimeline",0), (uVar3 & 1) != 0)) {
      uVar4 = tolua_tousertype(param_1,2,0);
      (**(code **)(*plVar2 + 0x60))(plVar2,uVar4);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,0x12cf70a,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012cf6eb,
               iVar1 + -1,1);
  }
  return 0;
}

