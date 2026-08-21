
/* lua_cocos2dx_extension_TableView_removeCellAtIndex(lua_State*) */

undefined4 lua_cocos2dx_extension_TableView_removeCellAtIndex(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TableView *this;
  ulong uVar3;
  undefined4 uVar4;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 009ad1e0 to 00aad273 has its CatchHandler @ 009ad1e0
                       catch() { ... } // from try @ 009ad1e0 with catch @ 009ad1e0
                       catch() { ... } // from try @ 009ad280 with catch @ 009ad1e0 */
  local_38 = *(long *)(lVar1 + 0x28);
  this = (TableView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_ssize(param_1,2,&local_40,"cc.TableView:removeCellAtIndex");
    if ((uVar3 & 1) != 0) {
      cocos2d::extension::TableView::removeCellAtIndex(this,local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009ad284;
    }
                    /* try { // try from 009ad274 to 00aad27f has its CatchHandler @ 009ad2e0 */
    tolua_error(param_1,&DAT_012e75b4,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e7595,
               iVar2 + -1,1);
  }
                    /* try { // try from 009ad280 to 00aad2fb has its CatchHandler @ 009ad1e0 */
  uVar4 = 0;
LAB_009ad284:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

