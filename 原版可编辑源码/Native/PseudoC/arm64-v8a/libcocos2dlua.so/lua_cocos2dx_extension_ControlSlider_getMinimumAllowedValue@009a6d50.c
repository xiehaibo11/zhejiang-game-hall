
/* lua_cocos2dx_extension_ControlSlider_getMinimumAllowedValue(lua_State*) */

bool lua_cocos2dx_extension_ControlSlider_getMinimumAllowedValue(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009a6d70 to 00aa6d87 has its CatchHandler @ 009a6e2c */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 009a6da8 to 00aa6e0b has its CatchHandler @ 009a6d20 */
    fVar3 = (float)(**(code **)(*plVar2 + 0x6f8))(plVar2);
    tolua_pushnumber((double)fVar3,param_1);
  }
  else {
                    /* try { // try from 009a6d8c to 00aa6da7 has its CatchHandler @ 009a6e28 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlSlider:getMinimumAllowedValue",iVar1,0);
  }
  return iVar1 == 0;
}

