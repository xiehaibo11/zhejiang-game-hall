
/* lua_cocos2dx_extension_ControlButton_initWithBackgroundSprite(lua_State*) */

undefined8 lua_cocos2dx_extension_ControlButton_initWithBackgroundSprite(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  
                    /* try { // try from 009a099c to 00aa09f7 has its CatchHandler @ 009a099c
                       catch() { ... } // from try @ 009a099c with catch @ 009a099c
                       catch() { ... } // from try @ 009a0a00 with catch @ 009a099c */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* try { // try from 009a09f8 to 00aa09ff has its CatchHandler @ 009a0a44 */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"ccui.Scale9Sprite",0), (uVar4 & 1) != 0)) {
                    /* try { // try from 009a0a00 to 00aa0a5f has its CatchHandler @ 009a099c */
      uVar5 = tolua_tousertype(param_1,2,0);
      uVar2 = (**(code **)(*plVar3 + 0x740))(plVar3,uVar5);
      tolua_pushboolean(param_1,uVar2 & 1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ControlButton_initWithBackgroundSprite\'"
                ,0);
  }
  else {
                    /* catch() { ... } // from try @ 009a09f8 with catch @ 009a0a44 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e3b6e,
               iVar1 + -1,1);
  }
  return 0;
}

