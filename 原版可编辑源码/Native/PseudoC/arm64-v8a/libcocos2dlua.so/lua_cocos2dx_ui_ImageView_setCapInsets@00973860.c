
/* lua_cocos2dx_ui_ImageView_setCapInsets(lua_State*) */

undefined4 lua_cocos2dx_ui_ImageView_setCapInsets(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Rect *pRVar3;
  ulong uVar4;
  undefined4 uVar5;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pRVar3 = (Rect *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00973890 to 00a738bb has its CatchHandler @ 00973720 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Rect::Rect(aRStack_48);
                    /* try { // try from 009738bc to 00a738cf has its CatchHandler @ 00973964 */
    uVar4 = luaval_to_rect(param_1,2,aRStack_48,"ccui.ImageView:setCapInsets");
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 009738d4 to 00a738e7 has its CatchHandler @ 00973960 */
      cocos2d::ui::ImageView::setCapInsets(pRVar3);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00973924;
    }
    tolua_error(param_1,&DAT_012d94ac,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ImageView:setCapInsets",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00973924:
                    /* try { // try from 00973924 to 00a7392b has its CatchHandler @ 0097395c */
                    /* try { // try from 00973930 to 00a73937 has its CatchHandler @ 00973958 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00973938 to 00a73987 has its CatchHandler @ 00973720 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009737ec with catch @ 0097394c */
  __stack_chk_fail();
}

