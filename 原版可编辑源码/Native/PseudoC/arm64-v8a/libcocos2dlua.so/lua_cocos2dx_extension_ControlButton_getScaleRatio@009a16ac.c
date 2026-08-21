
/* lua_cocos2dx_extension_ControlButton_getScaleRatio(lua_State*) */

bool lua_cocos2dx_extension_ControlButton_getScaleRatio(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar3 = (float)(**(code **)(*plVar2 + 0x798))(plVar2);
    tolua_pushnumber((double)fVar3,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:getScaleRatio",iVar1,0);
                    /* try { // try from 009a16fc to 00aa171f has its CatchHandler @ 009a1980 */
  }
  return iVar1 == 0;
}

