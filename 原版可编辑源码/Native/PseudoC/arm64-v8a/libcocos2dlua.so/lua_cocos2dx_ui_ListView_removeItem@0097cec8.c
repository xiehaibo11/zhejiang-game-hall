
/* lua_cocos2dx_ui_ListView_removeItem(lua_State*) */

undefined4 lua_cocos2dx_ui_ListView_removeItem(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ListView *this;
  ulong uVar3;
  undefined4 uVar4;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0097cef4 to 00a7cf23 has its CatchHandler @ 0097ce48 */
  this = (ListView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 0097cf24 to 00a7cf37 has its CatchHandler @ 0097cf78 */
    uVar3 = luaval_to_ssize(param_1,2,&local_40,"ccui.ListView:removeItem");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::ListView::removeItem(this,local_40);
                    /* try { // try from 0097cf38 to 00a7cf93 has its CatchHandler @ 0097ce48 */
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0097cf84;
    }
                    /* catch() { ... } // from try @ 0097ce98 with catch @ 0097cf78
                       catch() { ... } // from try @ 0097cf24 with catch @ 0097cf78 */
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_ListView_removeItem\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ListView:removeItem",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0097cf84:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

