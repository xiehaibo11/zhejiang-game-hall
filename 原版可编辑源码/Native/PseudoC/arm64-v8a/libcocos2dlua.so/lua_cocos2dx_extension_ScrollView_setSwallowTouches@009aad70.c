
/* lua_cocos2dx_extension_ScrollView_setSwallowTouches(lua_State*) */

undefined4 lua_cocos2dx_extension_ScrollView_setSwallowTouches(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ScrollView *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 009aad04 with catch @ 009aada8 */
  iVar2 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 009aacb0 with catch @ 009aadac */
                    /* catch() { ... } // from try @ 009aad20 with catch @ 009aadb4 */
  if (iVar2 + -1 == 1) {
                    /* catch() { ... } // from try @ 009aacb8 with catch @ 009aadc8 */
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"cc.ScrollView:setSwallowTouches");
    if ((uVar3 & 1) != 0) {
      cocos2d::extension::ScrollView::setSwallowTouches(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009aae2c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ScrollView_setSwallowTouches\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ScrollView:setSwallowTouches",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009aae2c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

