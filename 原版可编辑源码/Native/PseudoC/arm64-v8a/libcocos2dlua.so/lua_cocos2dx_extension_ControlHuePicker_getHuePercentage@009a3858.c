
/* lua_cocos2dx_extension_ControlHuePicker_getHuePercentage(lua_State*) */

bool lua_cocos2dx_extension_ControlHuePicker_getHuePercentage(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 009a38b0 to 00aa38b7 has its CatchHandler @ 009a39b4 */
                    /* try { // try from 009a38b8 to 00aa3917 has its CatchHandler @ 009a3454 */
    fVar3 = (float)(**(code **)(*plVar2 + 0x6d0))(plVar2);
    tolua_pushnumber((double)fVar3,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e4aab,
               iVar1,0);
  }
  return iVar1 == 0;
}

