
/* lua_cocos2dx_studio_DisplayManager_getCurrentDisplayIndex(lua_State*) */

bool lua_cocos2dx_studio_DisplayManager_getCurrentDisplayIndex(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  DisplayManager *this;
  
  this = (DisplayManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = cocostudio::DisplayManager::getCurrentDisplayIndex(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.DisplayManager:getCurrentDisplayIndex",iVar1,0);
  }
  return iVar1 == 0;
}

