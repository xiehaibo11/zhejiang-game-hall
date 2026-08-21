
undefined8 FUN_008e7b88(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GTextField *this;
  ulong uVar3;
  Color3B aCStack_40 [8];
  long local_38;
  
                    /* try { // try from 008e7b9c to 009e7c47 has its CatchHandler @ 008e7b9c
                       catch() { ... } // from try @ 008e7b9c with catch @ 008e7b9c
                       catch() { ... } // from try @ 008e7c54 with catch @ 008e7b9c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GTextField *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Color3B::Color3B(aCStack_40);
    uVar3 = luaval_to_color3b(param_1,2,aCStack_40,"fairygui.GTextField:setOutlineColor");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_GTextField_setOutlineColor\'",0);
    }
    else {
      fairygui::GTextField::setOutlineColor(this,aCStack_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTextField:setOutlineColor",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008e7c48 to 009e7c53 has its CatchHandler @ 008e7cac */
                    /* try { // try from 008e7c54 to 009e7ce7 has its CatchHandler @ 008e7b9c */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

