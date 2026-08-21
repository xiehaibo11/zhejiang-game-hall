
/* lua_cocos2dx_ui_Button_setTitleFontName(lua_State*) */

bool lua_cocos2dx_ui_Button_setTitleFontName(lua_State *param_1)

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
                    /* try { // try from 0096d470 to 00a6d48b has its CatchHandler @ 0096d8d0 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.Button:setTitleFontName")
    ;
    bVar4 = (uVar3 & 1) == 0;
    if (bVar4) {
                    /* try { // try from 0096d504 to 00a6d51f has its CatchHandler @ 0096d8f4 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_Button_setTitleFontName\'",0);
    }
    else {
                    /* try { // try from 0096d4ac to 00a6d4c3 has its CatchHandler @ 0096d8a0 */
      cocos2d::ui::Button::setTitleFontName(this,(basic_string *)&local_50);
      lua_settop(param_1,1);
                    /* try { // try from 0096d4c8 to 00a6d4f7 has its CatchHandler @ 0096d898 */
    }
    bVar4 = !bVar4;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Button:setTitleFontName",iVar2 + -1,1);
    bVar4 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0096d540 to 00a6d55b has its CatchHandler @ 0096d8cc */
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

