
undefined8 FUN_008e7300(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GTextField *this;
  ulong uVar3;
  Color3B aCStack_40 [8];
  long local_38;
  
                    /* try { // try from 008e7314 to 009e7367 has its CatchHandler @ 008e7314
                       catch() { ... } // from try @ 008e7314 with catch @ 008e7314
                       catch() { ... } // from try @ 008e73b8 with catch @ 008e7314
                       catch() { ... } // from try @ 008e7448 with catch @ 008e7314 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GTextField *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Color3B::Color3B(aCStack_40);
    uVar3 = luaval_to_color3b(param_1,2,aCStack_40,"fairygui.GTextField:setColor");
                    /* try { // try from 008e7368 to 009e737f has its CatchHandler @ 008e7468 */
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GTextField_setColor\'",0);
    }
    else {
      fairygui::GTextField::setColor(this,aCStack_40);
    }
  }
  else {
                    /* try { // try from 008e738c to 009e73b7 has its CatchHandler @ 008e7464 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTextField:setColor",iVar2 + -1,1);
  }
                    /* try { // try from 008e73b8 to 009e741b has its CatchHandler @ 008e7314 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

