
/* lua_cocos2dx_ui_RichText_color3BWithString(lua_State*) */

bool lua_cocos2dx_ui_RichText_color3BWithString(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  RichText *this;
  ulong uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined2 local_58;
  undefined1 local_56;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (RichText *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccui.RichText:color3BWithString");
    bVar5 = (uVar3 & 1) == 0;
    if (bVar5) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_RichText_color3BWithString\'",0);
    }
    else {
      uVar4 = cocos2d::ui::RichText::color3BWithString(this,(basic_string *)&local_50);
      local_56 = (undefined1)((ulong)uVar4 >> 0x10);
      local_58 = (undefined2)uVar4;
      color3b_to_luaval(param_1,(Color3B *)&local_58);
    }
    bVar5 = !bVar5;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.RichText:color3BWithString",iVar2 + -1,1);
    bVar5 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0098e00c to 00a8e137 has its CatchHandler @ 0098e00c
                       catch() { ... } // from try @ 0098e00c with catch @ 0098e00c
                       catch() { ... } // from try @ 0098e1b8 with catch @ 0098e00c */
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

