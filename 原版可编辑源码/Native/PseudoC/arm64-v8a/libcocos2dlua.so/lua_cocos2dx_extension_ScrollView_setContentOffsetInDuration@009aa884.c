
/* lua_cocos2dx_extension_ScrollView_setContentOffsetInDuration(lua_State*) */

undefined4 lua_cocos2dx_extension_ScrollView_setContentOffsetInDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  double local_58;
  undefined8 local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 009aa850 with catch @ 009aa89c */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 009aa824 with catch @ 009aa8a0 */
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 009aa8bc to 00aaa8ef has its CatchHandler @ 009aa8bc
                       catch() { ... } // from try @ 009aa8bc with catch @ 009aa8bc
                       catch() { ... } // from try @ 009aa948 with catch @ 009aa8bc */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_50 = 0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_50,"cc.ScrollView:setContentOffsetInDuration");
                    /* try { // try from 009aa8f0 to 00aaa947 has its CatchHandler @ 009aa98c */
    uVar5 = luaval_to_number(param_1,3,&local_58,"cc.ScrollView:setContentOffsetInDuration");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      cocos2d::extension::ScrollView::setContentOffsetInDuration
                ((undefined4)local_50,local_50._4_4_,(float)local_58,uVar3);
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_009aa970;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ScrollView_setContentOffsetInDuration\'"
                ,0);
  }
  else {
                    /* try { // try from 009aa948 to 00aaa99f has its CatchHandler @ 009aa8bc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ScrollView:setContentOffsetInDuration",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_009aa970:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 009aa8f0 with catch @ 009aa98c */
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

