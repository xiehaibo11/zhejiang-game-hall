
undefined8 FUN_008e6648(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Color3B *pCVar3;
  ulong uVar4;
  Color3B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pCVar3 = (Color3B *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 008e6688 to 009e671f has its CatchHandler @ 008e63e4 */
  if (iVar2 + -1 == 1) {
    cocos2d::Color3B::Color3B(aCStack_40);
    uVar4 = luaval_to_color3b(param_1,2,aCStack_40,"fairygui.GMovieClip:setColor");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GMovieClip_setColor\'",0);
    }
    else {
      fairygui::GMovieClip::setColor(pCVar3);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GMovieClip:setColor",iVar2 + -1,1);
  }
                    /* catch() { ... } // from try @ 008e6640 with catch @ 008e6704 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 008e6720 to 009e67d7 has its CatchHandler @ 008e6720
                       catch() { ... } // from try @ 008e6720 with catch @ 008e6720
                       catch() { ... } // from try @ 008e6814 with catch @ 008e6720 */
  __stack_chk_fail();
}

