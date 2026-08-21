
/* lua_cocos2dx_extension_ControlSlider_getMaximumValue(lua_State*) */

bool lua_cocos2dx_extension_ControlSlider_getMaximumValue(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 009a6d8c with catch @ 009a6e28
                       catch() { ... } // from try @ 009a6e0c with catch @ 009a6e28 */
                    /* catch() { ... } // from try @ 009a6d70 with catch @ 009a6e2c */
    fVar3 = (float)(**(code **)(*plVar2 + 0x6f0))(plVar2);
    tolua_pushnumber((double)fVar3,param_1);
  }
  else {
                    /* try { // try from 009a6e0c to 00aa6e13 has its CatchHandler @ 009a6e28 */
                    /* try { // try from 009a6e14 to 00aa6e47 has its CatchHandler @ 009a6d20 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlSlider:getMaximumValue",iVar1,0);
  }
  return iVar1 == 0;
}

