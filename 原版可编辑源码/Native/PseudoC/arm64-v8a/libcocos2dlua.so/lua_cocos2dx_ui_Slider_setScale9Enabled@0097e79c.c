
/* lua_cocos2dx_ui_Slider_setScale9Enabled(lua_State*) */

undefined4 lua_cocos2dx_ui_Slider_setScale9Enabled(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  bVar2 = (bool)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0097e7cc to 00a7e7df has its CatchHandler @ 0097e824 */
  iVar3 = lua_gettop(param_1);
                    /* try { // try from 0097e7e0 to 00a7e83f has its CatchHandler @ 0097e714 */
  if (iVar3 + -1 == 1) {
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"ccui.Slider:setScale9Enabled");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::Slider::setScale9Enabled(bVar2);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0097e858;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Slider_setScale9Enabled\'",
                0);
  }
  else {
                    /* catch() { ... } // from try @ 0097e780 with catch @ 0097e820 */
                    /* catch() { ... } // from try @ 0097e764 with catch @ 0097e824
                       catch() { ... } // from try @ 0097e7cc with catch @ 0097e824 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Slider:setScale9Enabled",iVar3 + -1,1);
  }
  uVar5 = 0;
LAB_0097e858:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

