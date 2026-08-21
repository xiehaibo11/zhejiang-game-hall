
/* lua_cocos2dx_ui_ScrollView_setScrollBarColor(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_setScrollBarColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ScrollView *this;
  ulong uVar3;
  undefined4 uVar4;
  Color3B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 009786c0 to 00a7870f has its CatchHandler @ 009787d0 */
    cocos2d::Color3B::Color3B(aCStack_40);
    uVar3 = luaval_to_color3b(param_1,2,aCStack_40,"ccui.ScrollView:setScrollBarColor");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::ScrollView::setScrollBarColor(this,aCStack_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00978738;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ScrollView_setScrollBarColor\'",0);
  }
  else {
                    /* try { // try from 00978710 to 00a7873f has its CatchHandler @ 00978668 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:setScrollBarColor",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00978738:
                    /* try { // try from 00978740 to 00a78753 has its CatchHandler @ 009787d0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00978754 to 00a78827 has its CatchHandler @ 00978668 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

