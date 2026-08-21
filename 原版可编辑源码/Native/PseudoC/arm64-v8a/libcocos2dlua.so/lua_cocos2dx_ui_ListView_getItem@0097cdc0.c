
/* lua_cocos2dx_ui_ListView_getItem(lua_State*) */

void lua_cocos2dx_ui_ListView_getItem(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ListView *this;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ListView *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 0097cce0 with catch @ 0097cdf0
                       catch() { ... } // from try @ 0097cd60 with catch @ 0097cdf0 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_ssize(param_1,2,&local_40,"ccui.ListView:getItem");
    if ((uVar3 & 1) != 0) {
      pvVar4 = (void *)cocos2d::ui::ListView::getItem(this,local_40);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
      }
      else {
                    /* try { // try from 0097ce48 to 00a7ce97 has its CatchHandler @ 0097ce48
                       catch() { ... } // from try @ 0097ce48 with catch @ 0097ce48
                       catch() { ... } // from try @ 0097cef4 with catch @ 0097ce48
                       catch() { ... } // from try @ 0097cf38 with catch @ 0097ce48 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "ccui.Widget");
        uVar5 = 1;
      }
      goto LAB_0097ce90;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_ListView_getItem\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ListView:getItem",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0097ce90:
                    /* try { // try from 0097ce98 to 00a7cef3 has its CatchHandler @ 0097cf78 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

