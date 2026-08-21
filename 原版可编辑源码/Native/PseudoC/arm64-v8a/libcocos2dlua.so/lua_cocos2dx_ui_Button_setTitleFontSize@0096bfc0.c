
/* lua_cocos2dx_ui_Button_setTitleFontSize(lua_State*) */

undefined4 lua_cocos2dx_ui_Button_setTitleFontSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Button *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
                    /* try { // try from 0096bfc0 to 00a6c00b has its CatchHandler @ 0096bfc0
                       catch() { ... } // from try @ 0096bfc0 with catch @ 0096bfc0
                       catch() { ... } // from try @ 0096c010 with catch @ 0096bfc0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Button *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 0096c00c to 00a6c00f has its CatchHandler @ 0096c044 */
                    /* try { // try from 0096c010 to 00a6c057 has its CatchHandler @ 0096bfc0 */
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.Button:setTitleFontSize");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::Button::setTitleFontSize(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
                    /* catch() { ... } // from try @ 0096c00c with catch @ 0096c044 */
      goto LAB_0096c080;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Button_setTitleFontSize\'",
                0);
  }
  else {
                    /* try { // try from 0096c058 to 00a6c10f has its CatchHandler @ 0096c058
                       catch() { ... } // from try @ 0096c058 with catch @ 0096c058
                       catch() { ... } // from try @ 0096c190 with catch @ 0096c058 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Button:setTitleFontSize",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0096c080:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

