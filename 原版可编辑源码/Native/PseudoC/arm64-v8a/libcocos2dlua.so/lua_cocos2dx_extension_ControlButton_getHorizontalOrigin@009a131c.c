
/* lua_cocos2dx_extension_ControlButton_getHorizontalOrigin(lua_State*) */

bool lua_cocos2dx_extension_ControlButton_getHorizontalOrigin(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
                    /* try { // try from 009a132c to 00aa135f has its CatchHandler @ 009a1410 */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = (**(code **)(*plVar3 + 0x7c0))(plVar3);
                    /* try { // try from 009a1384 to 00aa143f has its CatchHandler @ 009a124c */
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:getHorizontalOrigin",iVar1,0);
                    /* try { // try from 009a1368 to 00aa1383 has its CatchHandler @ 009a140c */
  }
  return iVar1 == 0;
}

