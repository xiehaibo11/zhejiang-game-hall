
/* lua_cocos2dx_extension_TableView_insertCellAtIndex(lua_State*) */

undefined4 lua_cocos2dx_extension_TableView_insertCellAtIndex(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TableView *this;
  ulong uVar3;
  undefined4 uVar4;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (TableView *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009ad5d8 to 00aad5e3 has its CatchHandler @ 009ad63c */
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 009ad5e4 to 00aad657 has its CatchHandler @ 009ad544 */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_ssize(param_1,2,&local_40,"cc.TableView:insertCellAtIndex");
    if ((uVar3 & 1) != 0) {
      cocos2d::extension::TableView::insertCellAtIndex(this,local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009ad660;
    }
                    /* try { // try from 009ad658 to 00aad707 has its CatchHandler @ 009ad658
                       catch() { ... } // from try @ 009ad658 with catch @ 009ad658
                       catch() { ... } // from try @ 009ad710 with catch @ 009ad658
                       catch() { ... } // from try @ 009ad75c with catch @ 009ad658
                       catch() { ... } // from try @ 009ad788 with catch @ 009ad658
                       catch() { ... } // from try @ 009ad8a4 with catch @ 009ad658 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_TableView_insertCellAtIndex\'"
                ,0);
  }
  else {
                    /* catch() { ... } // from try @ 009ad5d8 with catch @ 009ad63c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TableView:insertCellAtIndex",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009ad660:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

