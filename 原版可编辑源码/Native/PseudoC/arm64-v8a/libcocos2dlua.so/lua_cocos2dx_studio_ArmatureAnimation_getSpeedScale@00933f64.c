
/* lua_cocos2dx_studio_ArmatureAnimation_getSpeedScale(lua_State*) */

bool lua_cocos2dx_studio_ArmatureAnimation_getSpeedScale(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00933f88 to 00a33ff3 has its CatchHandler @ 009340b4 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar3 = (float)(**(code **)(*plVar2 + 0xc0))(plVar2);
    tolua_pushnumber((double)fVar3,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ArmatureAnimation:getSpeedScale",iVar1,0);
  }
  return iVar1 == 0;
}

