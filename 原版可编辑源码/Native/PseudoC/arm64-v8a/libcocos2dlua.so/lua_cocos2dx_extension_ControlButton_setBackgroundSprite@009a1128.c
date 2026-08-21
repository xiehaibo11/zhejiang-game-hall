
/* lua_cocos2dx_extension_ControlButton_setBackgroundSprite(lua_State*) */

undefined4 lua_cocos2dx_extension_ControlButton_setBackgroundSprite(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 009a1134 to 00aa115b has its CatchHandler @ 009a11b8 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* try { // try from 009a115c to 00aa11d3 has its CatchHandler @ 009a10e4 */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"ccui.Scale9Sprite",0), (uVar3 & 1) != 0)) {
      uVar4 = tolua_tousertype(param_1,2,0);
      (**(code **)(*plVar2 + 0x770))(plVar2,uVar4);
                    /* catch() { ... } // from try @ 009a1134 with catch @ 009a11b8 */
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ControlButton_setBackgroundSprite\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:setBackgroundSprite",iVar1 + -1,1);
  }
  return 0;
}

