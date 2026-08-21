
/* lua_cocos2dx_extension_ControlHuePicker_setSlider(lua_State*) */

undefined4 lua_cocos2dx_extension_ControlHuePicker_setSlider(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* try { // try from 009a3918 to 00aa398f has its CatchHandler @ 009a39b8 */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar3 & 1) != 0)) {
      uVar4 = tolua_tousertype(param_1,2,0);
      (**(code **)(*plVar2 + 0x6f8))(plVar2,uVar4);
      lua_settop(param_1,1);
      return 1;
    }
                    /* try { // try from 009a39a4 to 00aa39b3 has its CatchHandler @ 009a39b4 */
    tolua_error(param_1,&DAT_012e4aee,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlHuePicker:setSlider",iVar1 + -1,1);
                    /* try { // try from 009a3990 to 00aa39a3 has its CatchHandler @ 009a3454 */
  }
                    /* catch() { ... } // from try @ 009a38b0 with catch @ 009a39b4
                       catch() { ... } // from try @ 009a39a4 with catch @ 009a39b4
                       try { // try from 009a39b4 to 00aa3a0b has its CatchHandler @ 009a3454 */
                    /* catch() { ... } // from try @ 009a3918 with catch @ 009a39b8 */
  return 0;
}

