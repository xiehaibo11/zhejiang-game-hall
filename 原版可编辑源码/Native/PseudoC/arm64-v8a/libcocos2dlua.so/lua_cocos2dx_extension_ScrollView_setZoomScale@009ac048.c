
/* lua_cocos2dx_extension_ScrollView_setZoomScale(lua_State*) */

undefined4 lua_cocos2dx_extension_ScrollView_setZoomScale(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ScrollView *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_44 [4];
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.ScrollView:setZoomScale");
    if ((uVar3 & 1) == 0) goto LAB_009ac128;
                    /* try { // try from 009ac108 to 00aac17b has its CatchHandler @ 009ac108
                       catch() { ... } // from try @ 009ac108 with catch @ 009ac108
                       catch() { ... } // from try @ 009ac1c4 with catch @ 009ac108
                       catch() { ... } // from try @ 009ac230 with catch @ 009ac108 */
    cocos2d::extension::ScrollView::setZoomScale(this,(float)local_40);
  }
  else {
    if (((iVar2 != 3) ||
        (uVar3 = luaval_to_number(param_1,2,&local_40,"cc.ScrollView:setZoomScale"),
        (uVar3 & 1) == 0)) ||
       (uVar3 = luaval_to_boolean(param_1,3,local_44,"cc.ScrollView:setZoomScale"), (uVar3 & 1) == 0
       )) {
LAB_009ac128:
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.ScrollView:setZoomScale",iVar2 + -1,1);
      uVar4 = 0;
      goto LAB_009ac14c;
    }
    cocos2d::extension::ScrollView::setZoomScale(this,(float)local_40,local_44[0]);
  }
  uVar4 = 1;
  lua_settop(param_1,1);
LAB_009ac14c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

