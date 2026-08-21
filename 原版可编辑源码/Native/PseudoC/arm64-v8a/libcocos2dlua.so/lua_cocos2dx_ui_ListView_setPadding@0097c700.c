
/* lua_cocos2dx_ui_ListView_setPadding(lua_State*) */

undefined4 lua_cocos2dx_ui_ListView_setPadding(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ListView *this;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (ListView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 0097c748 to 00a7c77b has its CatchHandler @ 0097c848 */
  if (iVar2 + -1 == 4) {
    uVar3 = luaval_to_number(param_1,2,&dStack_60,"ccui.ListView:setPadding");
                    /* try { // try from 0097c77c to 00a7c78f has its CatchHandler @ 0097c814 */
    uVar4 = luaval_to_number(param_1,3,&local_68,"ccui.ListView:setPadding");
                    /* try { // try from 0097c794 to 00a7c7c7 has its CatchHandler @ 0097c818 */
    uVar5 = luaval_to_number(param_1,4,&dStack_70,"ccui.ListView:setPadding");
    uVar6 = luaval_to_number(param_1,5,&local_78,"ccui.ListView:setPadding");
    if (((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) {
                    /* try { // try from 0097c7c8 to 00a7c863 has its CatchHandler @ 0097c2d0 */
      cocos2d::ui::ListView::setPadding
                (this,(float)dStack_60,(float)local_68,(float)dStack_70,(float)local_78);
      uVar7 = 1;
      lua_settop(param_1,1);
      goto LAB_0097c830;
    }
                    /* catch() { ... } // from try @ 0097c794 with catch @ 0097c818 */
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_ListView_setPadding\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ListView:setPadding",iVar2 + -1,4);
                    /* catch() { ... } // from try @ 0097c77c with catch @ 0097c814 */
  }
  uVar7 = 0;
LAB_0097c830:
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 0097c748 with catch @ 0097c848 */
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

