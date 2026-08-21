
/* lua_cocos2dx_extension_ControlButton_getCurrentTitleColor(lua_State*) */

bool lua_cocos2dx_extension_ControlButton_getCurrentTitleColor(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  Color3B *pCVar3;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009a0fd4 to 00aa1007 has its CatchHandler @ 009a10c8 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pCVar3 = (Color3B *)(**(code **)(*plVar2 + 0x750))(plVar2);
    color3b_to_luaval(param_1,pCVar3);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:getCurrentTitleColor",iVar1,0);
  }
  return iVar1 == 0;
}

