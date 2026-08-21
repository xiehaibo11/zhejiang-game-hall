
/* lua_cocos2dx_MotionStreak3D_reset(lua_State*) */

bool lua_cocos2dx_MotionStreak3D_reset(lua_State *param_1)

{
  int iVar1;
  MotionStreak3D *this;
  
  this = (MotionStreak3D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::MotionStreak3D::reset(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.MotionStreak3D:reset",iVar1,0);
  }
  return iVar1 == 0;
}

