
/* lua_cocos2dx_ui_Layout_setBackGroundColor(lua_State*) */

undefined4 lua_cocos2dx_ui_Layout_setBackGroundColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Layout *this;
  ulong uVar3;
  undefined4 uVar4;
  Color3B aCStack_48 [8];
  Color3B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Layout *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    cocos2d::Color3B::Color3B(aCStack_40);
                    /* try { // try from 0096aa48 to 00a6aa93 has its CatchHandler @ 0096aa48
                       catch() { ... } // from try @ 0096aa48 with catch @ 0096aa48
                       catch() { ... } // from try @ 0096aa98 with catch @ 0096aa48 */
    uVar3 = luaval_to_color3b(param_1,2,aCStack_40,"ccui.Layout:setBackGroundColor");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::Layout::setBackGroundColor(this,aCStack_40);
LAB_0096aa60:
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0096aa98;
    }
  }
  else if (iVar2 == 3) {
    cocos2d::Color3B::Color3B(aCStack_40);
    uVar3 = luaval_to_color3b(param_1,2,aCStack_40,"ccui.Layout:setBackGroundColor");
    if ((uVar3 & 1) != 0) {
      cocos2d::Color3B::Color3B(aCStack_48);
      uVar3 = luaval_to_color3b(param_1,3,aCStack_48,"ccui.Layout:setBackGroundColor");
      if ((uVar3 & 1) != 0) {
        cocos2d::ui::Layout::setBackGroundColor(this,aCStack_40,aCStack_48);
        goto LAB_0096aa60;
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "ccui.Layout:setBackGroundColor",iVar2 + -1,1);
                    /* try { // try from 0096aa94 to 00a6aa97 has its CatchHandler @ 0096aacc */
  uVar4 = 0;
LAB_0096aa98:
                    /* try { // try from 0096aa98 to 00a6aadf has its CatchHandler @ 0096aa48 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

