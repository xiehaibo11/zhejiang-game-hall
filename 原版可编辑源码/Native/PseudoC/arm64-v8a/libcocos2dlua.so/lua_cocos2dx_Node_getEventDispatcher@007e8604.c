
/* lua_cocos2dx_Node_getEventDispatcher(lua_State*) */

undefined8 lua_cocos2dx_Node_getEventDispatcher(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  if (plVar2 == (long *)0x0) {
    tolua_error(param_1,"invalid \'cobj\' in function \'lua_cocos2dx_Node_getEventDispatcher\'",0);
  }
  else {
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 0) {
      pvVar3 = (void *)(**(code **)(*plVar2 + 0x388))(plVar2);
      if (pvVar3 != (void *)0x0) {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                   "cc.EventDispatcher");
        return 1;
      }
      lua_pushnil(param_1);
      return 1;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:getEventDispatcher",iVar1 + -1,0);
  }
  return 0;
}

