
/* lua_cocos2dx_Node_runAction(lua_State*) */

undefined8 lua_cocos2dx_Node_runAction(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *pvVar5;
  char *pcVar6;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  if (plVar2 == (long *)0x0) {
    pcVar6 = "invalid \'cobj\' in function \'lua_cocos2dx_Node_runAction\'";
  }
  else {
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 != 1) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.Node:runAction",iVar1 + -1,1);
      return 0;
    }
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Action",0), (uVar3 & 1) != 0)) {
      uVar4 = tolua_tousertype(param_1,2,0);
      pvVar5 = (void *)(**(code **)(*plVar2 + 0x3a8))(plVar2,uVar4);
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
        return 1;
      }
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                 "cc.Action");
      return 1;
    }
    pcVar6 = "invalid arguments in function \'lua_cocos2dx_Node_runAction\'";
  }
  tolua_error(param_1,pcVar6,0);
  return 0;
}

