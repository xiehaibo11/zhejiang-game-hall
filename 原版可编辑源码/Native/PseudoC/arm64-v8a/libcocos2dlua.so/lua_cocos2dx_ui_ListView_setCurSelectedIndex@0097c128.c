
/* lua_cocos2dx_ui_ListView_setCurSelectedIndex(lua_State*) */

undefined4 lua_cocos2dx_ui_ListView_setCurSelectedIndex(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ListView *this;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
                    /* try { // try from 0097c128 to 00a7c153 has its CatchHandler @ 0097c1f8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0097c154 to 00a7c17b has its CatchHandler @ 0097c0ac */
  this = (ListView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 0097c17c to 00a7c18f has its CatchHandler @ 0097c1fc */
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccui.ListView:setCurSelectedIndex");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::ListView::setCurSelectedIndex(this,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0097c1e4;
    }
                    /* try { // try from 0097c1dc to 00a7c1e3 has its CatchHandler @ 0097c1f8 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ListView_setCurSelectedIndex\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ListView:setCurSelectedIndex",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0097c1e4:
                    /* try { // try from 0097c1e4 to 00a7c237 has its CatchHandler @ 0097c0ac */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0097c128 with catch @ 0097c1f8
                       catch() { ... } // from try @ 0097c1dc with catch @ 0097c1f8 */
                    /* catch() { ... } // from try @ 0097c0ec with catch @ 0097c1fc
                       catch() { ... } // from try @ 0097c17c with catch @ 0097c1fc */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

