
/* lua_cocos2dx_ComponentLua_getScriptObject(lua_State*) */

bool lua_cocos2dx_ComponentLua_getScriptObject(lua_State *param_1)

{
  int iVar1;
  ComponentLua *this;
  
  this = (ComponentLua *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::ComponentLua::getScriptObject(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ComponentLua:getScriptObject",iVar1,0);
  }
  return iVar1 == 0;
}

