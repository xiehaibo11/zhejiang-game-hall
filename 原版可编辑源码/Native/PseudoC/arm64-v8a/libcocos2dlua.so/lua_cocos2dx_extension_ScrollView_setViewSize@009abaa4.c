
/* lua_cocos2dx_extension_ScrollView_setViewSize(lua_State*) */

undefined4 lua_cocos2dx_extension_ScrollView_setViewSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ScrollView *pSVar3;
  ulong uVar4;
  undefined4 uVar5;
  Size aSStack_48 [8];
  Size aSStack_40 [8];
  long local_38;
  
                    /* catch() { ... } // from try @ 009aba34 with catch @ 009abaa4 */
                    /* catch() { ... } // from try @ 009aba28 with catch @ 009abab4 */
                    /* catch() { ... } // from try @ 009aba0c with catch @ 009abab8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009aba04 with catch @ 009abac8 */
                    /* catch() { ... } // from try @ 009ab9e8 with catch @ 009abacc */
  pSVar3 = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Size::Size(aSStack_40);
    uVar4 = luaval_to_size(param_1,2,aSStack_40,"cc.ScrollView:setViewSize");
    if ((uVar4 & 1) != 0) {
      cocos2d::Size::Size(aSStack_48,aSStack_40);
      cocos2d::extension::ScrollView::setViewSize(pSVar3,aSStack_48);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009abb74;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ScrollView_setViewSize\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ScrollView:setViewSize",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009abb74:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

