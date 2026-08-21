
/* lua_cocos2dx_extension_ControlSlider_getMinimumValue(lua_State*) */

bool lua_cocos2dx_extension_ControlSlider_getMinimumValue(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar3 = (float)(**(code **)(*plVar2 + 0x6e8))(plVar2);
    tolua_pushnumber((double)fVar3,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",0x12e5d0d,iVar1,0
              );
                    /* try { // try from 009a7114 to 00aa715b has its CatchHandler @ 009a7114
                       catch() { ... } // from try @ 009a7114 with catch @ 009a7114
                       catch() { ... } // from try @ 009a7228 with catch @ 009a7114
                       catch() { ... } // from try @ 009a7338 with catch @ 009a7114 */
  }
  return iVar1 == 0;
}

