
/* lua_cocos2dx_Camera_getViewMatrix(lua_State*) */

bool lua_cocos2dx_Camera_getViewMatrix(lua_State *param_1)

{
  int iVar1;
  Camera *this;
  Mat4 *pMVar2;
  
  this = (Camera *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pMVar2 = (Mat4 *)cocos2d::Camera::getViewMatrix(this);
    mat4_to_luaval(param_1,pMVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Camera:getViewMatrix",iVar1,0);
  }
  return iVar1 == 0;
}

