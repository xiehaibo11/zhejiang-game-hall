
/* lua_cocos2dx_ui_Scale9Sprite_getPreferredSize(lua_State*) */

void lua_cocos2dx_ui_Scale9Sprite_getPreferredSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Size aSStack_40 [8];
  long local_38;
  
                    /* try { // try from 009912f8 to 00a9130b has its CatchHandler @ 00991390 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00991310 to 00a91343 has its CatchHandler @ 00991394 */
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    cocos2d::ui::Scale9Sprite::getPreferredSize();
    size_to_luaval(param_1,aSStack_40);
  }
  else {
                    /* try { // try from 00991344 to 00a913df has its CatchHandler @ 0099120c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Scale9Sprite:getPreferredSize",iVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 009912f8 with catch @ 00991390 */
                    /* catch() { ... } // from try @ 00991310 with catch @ 00991394 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

