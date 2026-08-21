
/* lua_cocos2dx_MotionStreak3D_getSweepAxis(lua_State*) */

bool lua_cocos2dx_MotionStreak3D_getSweepAxis(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    vec3_to_luaval(param_1,(Vec3 *)(lVar2 + 0x32c));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.MotionStreak3D:getSweepAxis",iVar1,0);
  }
  return iVar1 == 0;
}

