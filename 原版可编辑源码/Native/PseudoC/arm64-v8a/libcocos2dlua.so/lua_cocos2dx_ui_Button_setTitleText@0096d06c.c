
/* lua_cocos2dx_ui_Button_setTitleText(lua_State*) */

bool lua_cocos2dx_ui_Button_setTitleText(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Button *this;
  ulong uVar3;
  bool bVar4;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Button *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.Button:setTitleText");
    bVar4 = (uVar3 & 1) == 0;
    if (bVar4) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Button_setTitleText\'",0)
      ;
    }
    else {
      cocos2d::ui::Button::setTitleText(this,(basic_string *)&local_50);
      lua_settop(param_1,1);
                    /* try { // try from 0096d0f4 to 00a6d143 has its CatchHandler @ 0096d0f4
                       catch() { ... } // from try @ 0096d0f4 with catch @ 0096d0f4
                       catch() { ... } // from try @ 0096d1a0 with catch @ 0096d0f4
                       catch() { ... } // from try @ 0096d1e4 with catch @ 0096d0f4 */
    }
    bVar4 = !bVar4;
    if ((local_50 & 1) != 0) {
                    /* try { // try from 0096d144 to 00a6d19f has its CatchHandler @ 0096d224 */
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Button:setTitleText",iVar2 + -1,1);
    bVar4 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

