
/* lua_cocos2dx_3d_Animate3D_getSpeed(lua_State*) */

bool lua_cocos2dx_3d_Animate3D_getSpeed(lua_State *param_1)

{
  int iVar1;
  Animate3D *this;
  float fVar2;
  
  this = (Animate3D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::Animate3D::getSpeed(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Animate3D:getSpeed",iVar1,0);
  }
  return iVar1 == 0;
}

