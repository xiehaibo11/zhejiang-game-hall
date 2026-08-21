
/* lua_cocos2dx_ui_Widget_findNextFocusedWidget(lua_State*) */

void lua_cocos2dx_ui_Widget_findNextFocusedWidget(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  int local_3c;
  long local_38;
  
                    /* try { // try from 00967344 to 00a6738f has its CatchHandler @ 00967344
                       catch() { ... } // from try @ 00967344 with catch @ 00967344
                       catch() { ... } // from try @ 00967394 with catch @ 00967344 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
                    /* try { // try from 00967390 to 00a67393 has its CatchHandler @ 009673c8 */
                    /* try { // try from 00967394 to 00a673db has its CatchHandler @ 00967344 */
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccui.Widget:findNextFocusedWidget");
                    /* catch() { ... } // from try @ 00967390 with catch @ 009673c8 */
                    /* try { // try from 009673dc to 00a674ab has its CatchHandler @ 009673dc
                       catch() { ... } // from try @ 009673dc with catch @ 009673dc
                       catch() { ... } // from try @ 0096752c with catch @ 009673dc */
    if ((((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 2 < iVar2)) &&
        (uVar5 = luaval_is_usertype(param_1,3,"ccui.Widget",0), (uVar5 & 1) != 0)) &&
       (uVar6 = tolua_tousertype(param_1,3,0), (uVar4 & 1) != 0)) {
      pvVar7 = (void *)(**(code **)(*plVar3 + 0x618))(plVar3,local_3c,uVar6);
      if (pvVar7 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar6 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                   "ccui.Widget");
        uVar6 = 1;
      }
      goto LAB_0096745c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Widget_findNextFocusedWidget\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Widget:findNextFocusedWidget",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_0096745c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

