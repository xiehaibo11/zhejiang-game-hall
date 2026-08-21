
/* lua_cocos2dx_ui_ListView_getClosestItemToPositionInCurrentView(lua_State*) */

void lua_cocos2dx_ui_ListView_getClosestItemToPositionInCurrentView(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ListView *this;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
                    /* try { // try from 0097d4bc to 00a7d4d3 has its CatchHandler @ 0097d5a0 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (ListView *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0097d4d8 to 00a7d4e7 has its CatchHandler @ 0097d59c */
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 0097d4e8 to 00a7d4f3 has its CatchHandler @ 0097d584 */
  if (iVar2 + -1 == 2) {
                    /* try { // try from 0097d4f4 to 00a7d52f has its CatchHandler @ 0097d46c */
    local_58 = 0;
    uStack_50 = 0;
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&uStack_50,
                           "ccui.ListView:getClosestItemToPositionInCurrentView");
    uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)&local_58,
                           "ccui.ListView:getClosestItemToPositionInCurrentView");
                    /* try { // try from 0097d530 to 00a7d543 has its CatchHandler @ 0097d5a0 */
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      pvVar5 = (void *)cocos2d::ui::ListView::getClosestItemToPositionInCurrentView
                                 (this,(Vec2 *)&uStack_50,(Vec2 *)&local_58);
                    /* try { // try from 0097d544 to 00a7d5bb has its CatchHandler @ 0097d46c */
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar6 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "ccui.Widget");
        uVar6 = 1;
      }
      goto LAB_0097d5a4;
    }
                    /* catch() { ... } // from try @ 0097d4d8 with catch @ 0097d59c */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ListView_getClosestItemToPositionInCurrentView\'"
                ,0);
  }
  else {
                    /* catch() { ... } // from try @ 0097d4e8 with catch @ 0097d584 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ListView:getClosestItemToPositionInCurrentView",iVar2 + -1,2);
  }
                    /* catch() { ... } // from try @ 0097d4bc with catch @ 0097d5a0
                       catch() { ... } // from try @ 0097d530 with catch @ 0097d5a0 */
  uVar6 = 0;
LAB_0097d5a4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

