
/* lua_cocos2dx_extension_ControlColourPicker_setHuePicker(lua_State*) */

undefined4 lua_cocos2dx_extension_ControlColourPicker_setHuePicker(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
                    /* catch() { ... } // from try @ 009a4d7c with catch @ 009a4e18 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009a4e2c to 00aa4e7b has its CatchHandler @ 009a4e2c
                       catch() { ... } // from try @ 009a4e2c with catch @ 009a4e2c
                       catch() { ... } // from try @ 009a4eb8 with catch @ 009a4e2c */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.ControlHuePicker",0), (uVar3 & 1) != 0)) {
      uVar4 = tolua_tousertype(param_1,2,0);
                    /* try { // try from 009a4e7c to 00aa4eb7 has its CatchHandler @ 009a4f1c */
      (**(code **)(*plVar2 + 0x6d0))(plVar2,uVar4);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,&DAT_012e516c,0);
  }
  else {
                    /* try { // try from 009a4eb8 to 00aa4f2f has its CatchHandler @ 009a4e2c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlColourPicker:setHuePicker",iVar1 + -1,1);
  }
  return 0;
}

