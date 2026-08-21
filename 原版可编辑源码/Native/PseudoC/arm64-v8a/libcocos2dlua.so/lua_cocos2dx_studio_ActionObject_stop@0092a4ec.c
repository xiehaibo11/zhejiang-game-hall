
/* lua_cocos2dx_studio_ActionObject_stop(lua_State*) */

bool lua_cocos2dx_studio_ActionObject_stop(lua_State *param_1)

{
  int iVar1;
  ActionObject *this;
  
  this = (ActionObject *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocostudio::ActionObject::stop(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionObject:stop",iVar1,0);
  }
  return iVar1 == 0;
}

