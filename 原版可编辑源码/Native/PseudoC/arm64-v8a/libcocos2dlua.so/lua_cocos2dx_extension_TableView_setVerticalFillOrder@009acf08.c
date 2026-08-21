
/* lua_cocos2dx_extension_TableView_setVerticalFillOrder(lua_State*) */

undefined4 lua_cocos2dx_extension_TableView_setVerticalFillOrder(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TableView *pTVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
                    /* try { // try from 009acf0c to 00aacf17 has its CatchHandler @ 009acf70 */
                    /* try { // try from 009acf18 to 00aacf8b has its CatchHandler @ 009ace78 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pTVar3 = (TableView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"cc.TableView:setVerticalFillOrder");
    if ((uVar4 & 1) != 0) {
                    /* catch() { ... } // from try @ 009acf0c with catch @ 009acf70 */
      cocos2d::extension::TableView::setVerticalFillOrder(pTVar3,local_3c);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009acfc4;
    }
    tolua_error(param_1,0x12e748b,0);
  }
  else {
                    /* try { // try from 009acf8c to 00aad037 has its CatchHandler @ 009acf8c
                       catch() { ... } // from try @ 009acf8c with catch @ 009acf8c
                       catch() { ... } // from try @ 009ad044 with catch @ 009acf8c
                       catch() { ... } // from try @ 009ad0e8 with catch @ 009acf8c
                       catch() { ... } // from try @ 009ad12c with catch @ 009acf8c
                       catch() { ... } // from try @ 009ad158 with catch @ 009acf8c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e7469,
               iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009acfc4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

