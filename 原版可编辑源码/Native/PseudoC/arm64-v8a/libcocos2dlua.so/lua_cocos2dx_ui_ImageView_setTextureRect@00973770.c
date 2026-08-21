
/* lua_cocos2dx_ui_ImageView_setTextureRect(lua_State*) */

undefined4 lua_cocos2dx_ui_ImageView_setTextureRect(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ImageView *this;
  ulong uVar3;
  undefined4 uVar4;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ImageView *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009737a4 to 00a737df has its CatchHandler @ 0097395c */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Rect::Rect(aRStack_48);
    uVar3 = luaval_to_rect(param_1,2,aRStack_48,"ccui.ImageView:setTextureRect");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::ImageView::setTextureRect(this,aRStack_48);
                    /* try { // try from 009737ec to 00a737f3 has its CatchHandler @ 0097394c */
      uVar4 = 1;
                    /* try { // try from 009737f4 to 00a73843 has its CatchHandler @ 00973960 */
      lua_settop(param_1,1);
      goto LAB_00973834;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_ImageView_setTextureRect\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ImageView:setTextureRect",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00973834:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00973850 to 00a7388f has its CatchHandler @ 00973958 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

