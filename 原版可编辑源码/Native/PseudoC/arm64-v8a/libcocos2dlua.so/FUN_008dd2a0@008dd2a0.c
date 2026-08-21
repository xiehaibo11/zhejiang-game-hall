
undefined8 FUN_008dd2a0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Color3B *pCVar3;
  ulong uVar4;
  Color3B aCStack_40 [8];
  long local_38;
  
                    /* catch() { ... } // from try @ 008dd24c with catch @ 008dd2a4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pCVar3 = (Color3B *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 008dd230 with catch @ 008dd2d4 */
                    /* catch() { ... } // from try @ 008dd0b4 with catch @ 008dd2d8
                       catch() { ... } // from try @ 008dd264 with catch @ 008dd2d8 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Color3B::Color3B(aCStack_40);
                    /* try { // try from 008dd2f4 to 009dd3ff has its CatchHandler @ 008dd2f4
                       catch() { ... } // from try @ 008dd2f4 with catch @ 008dd2f4
                       catch() { ... } // from try @ 008dd6cc with catch @ 008dd2f4 */
    uVar4 = luaval_to_color3b(param_1,2,aCStack_40,"fairygui.GImage:setColor");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GImage_setColor\'",0);
    }
    else {
      fairygui::GImage::setColor(pCVar3);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GImage:setColor",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

