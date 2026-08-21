
/* lua_cocos2dx_extension_TableView_scrollViewDidScroll(lua_State*) */

undefined4 lua_cocos2dx_extension_TableView_scrollViewDidScroll(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 009ad458 to 00aad467 has its CatchHandler @ 009ad51c */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009ad468 to 00aad487 has its CatchHandler @ 009ad2fc */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* try { // try from 009ad488 to 00aad493 has its CatchHandler @ 009ad518 */
                    /* try { // try from 009ad494 to 00aad543 has its CatchHandler @ 009ad2fc */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.ScrollView",0), (uVar3 & 1) != 0)) {
      uVar4 = tolua_tousertype(param_1,2,0);
      (**(code **)(*plVar2 + 0x660))(plVar2,uVar4);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_TableView_scrollViewDidScroll\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TableView:scrollViewDidScroll",iVar1 + -1,1);
                    /* catch() { ... } // from try @ 009ad41c with catch @ 009ad4fc */
  }
                    /* catch() { ... } // from try @ 009ad488 with catch @ 009ad518 */
                    /* catch() { ... } // from try @ 009ad458 with catch @ 009ad51c */
                    /* catch() { ... } // from try @ 009ad3a4 with catch @ 009ad520 */
  return 0;
}

