
/* lua_cocos2dx_ui_ListView_insertDefaultItem(lua_State*) */

undefined4 lua_cocos2dx_ui_ListView_insertDefaultItem(lua_State *param_1)

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
                    /* try { // try from 0097c238 to 00a7c283 has its CatchHandler @ 0097c238
                       catch() { ... } // from try @ 0097c238 with catch @ 0097c238
                       catch() { ... } // from try @ 0097c288 with catch @ 0097c238 */
  this = (ListView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_ssize(param_1,2,&local_40,"ccui.ListView:insertDefaultItem");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::ListView::insertDefaultItem(this,local_40);
                    /* try { // try from 0097c284 to 00a7c287 has its CatchHandler @ 0097c2bc */
                    /* try { // try from 0097c288 to 00a7c2cf has its CatchHandler @ 0097c238 */
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0097c2cc;
    }
                    /* catch() { ... } // from try @ 0097c284 with catch @ 0097c2bc */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ListView_insertDefaultItem\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ListView:insertDefaultItem",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0097c2cc:
                    /* try { // try from 0097c2d0 to 00a7c747 has its CatchHandler @ 0097c2d0
                       catch() { ... } // from try @ 0097c2d0 with catch @ 0097c2d0
                       catch() { ... } // from try @ 0097c7c8 with catch @ 0097c2d0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

