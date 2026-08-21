
/* lua_cocos2dx_ui_Button_setScale9Enabled(lua_State*) */

undefined4 lua_cocos2dx_ui_Button_setScale9Enabled(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0096c144 to 00a6c157 has its CatchHandler @ 0096c1dc */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0096c15c to 00a6c18f has its CatchHandler @ 0096c1e0 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"ccui.Button:setScale9Enabled");
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 0096c190 to 00a6c22b has its CatchHandler @ 0096c058 */
      (**(code **)(*plVar3 + 0x680))(plVar3,local_3c[0]);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0096c1ec;
    }
                    /* catch() { ... } // from try @ 0096c144 with catch @ 0096c1dc */
                    /* catch() { ... } // from try @ 0096c15c with catch @ 0096c1e0 */
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Button_setScale9Enabled\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Button:setScale9Enabled",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0096c1ec:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0096c110 with catch @ 0096c210 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

