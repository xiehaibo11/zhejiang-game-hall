
/* lua_cocos2dx_ui_Button_getTitleColor(lua_State*) */

void lua_cocos2dx_ui_Button_getTitleColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Button *this;
  undefined8 uVar3;
  undefined2 local_40;
  undefined1 local_3e;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Button *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0096e1bc to 00a6e213 has its CatchHandler @ 0096e1bc
                       catch() { ... } // from try @ 0096e1bc with catch @ 0096e1bc
                       catch() { ... } // from try @ 0096e250 with catch @ 0096e1bc
                       catch() { ... } // from try @ 0096e314 with catch @ 0096e1bc */
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    uVar3 = cocos2d::ui::Button::getTitleColor(this);
    local_40 = (undefined2)uVar3;
    local_3e = (undefined1)((ulong)uVar3 >> 0x10);
    color3b_to_luaval(param_1,(Color3B *)&local_40);
                    /* try { // try from 0096e214 to 00a6e24f has its CatchHandler @ 0096e328 */
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Button:getTitleColor",iVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

