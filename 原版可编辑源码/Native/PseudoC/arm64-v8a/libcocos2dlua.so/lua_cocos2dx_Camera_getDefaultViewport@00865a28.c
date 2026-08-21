
/* lua_cocos2dx_Camera_getDefaultViewport(lua_State*) */

bool lua_cocos2dx_Camera_getDefaultViewport(lua_State *param_1)

{
  int iVar1;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::Camera::getDefaultViewport();
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Camera:getDefaultViewport",iVar1,0);
  }
  return iVar1 == 0;
}

