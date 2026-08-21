
/* lua_cocos2dx_ui_ScrollView_setScrollBarOpacity(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_setScrollBarOpacity(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ScrollView *this;
  ulong uVar3;
  undefined4 uVar4;
  uchar local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00978220 to 00a78237 has its CatchHandler @ 0097839c */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 0097823c to 00a7824b has its CatchHandler @ 00978398 */
    uVar3 = luaval_to_uint16(param_1,2,(ushort *)local_3c,"ccui.ScrollView:setScrollBarOpacity");
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 0097824c to 00a78257 has its CatchHandler @ 0097832c */
      cocos2d::ui::ScrollView::setScrollBarOpacity(this,local_3c[0]);
                    /* try { // try from 00978258 to 00a782b7 has its CatchHandler @ 009781d0 */
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009782a4;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ScrollView_setScrollBarOpacity\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:setScrollBarOpacity",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009782a4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009782b8 to 00a782cb has its CatchHandler @ 0097839c */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009782cc to 00a783b7 has its CatchHandler @ 009781d0 */
  __stack_chk_fail();
}

