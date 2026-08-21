
/* lua_cocos2dx_ui_ListView_pushBackCustomItem(lua_State*) */

undefined4 lua_cocos2dx_ui_ListView_pushBackCustomItem(lua_State *param_1)

{
  int iVar1;
  ListView *this;
  ulong uVar2;
  Widget *pWVar3;
  
  this = (ListView *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0097c070 to 00a7c077 has its CatchHandler @ 0097c08c */
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 0097c078 to 00a7c0ab has its CatchHandler @ 0097bf80 */
  if (iVar1 + -1 == 1) {
                    /* catch() { ... } // from try @ 0097bfd4 with catch @ 0097c08c
                       catch() { ... } // from try @ 0097c070 with catch @ 0097c08c */
                    /* catch() { ... } // from try @ 0097bfb8 with catch @ 0097c090
                       catch() { ... } // from try @ 0097c024 with catch @ 0097c090 */
                    /* try { // try from 0097c0ac to 00a7c0eb has its CatchHandler @ 0097c0ac
                       catch() { ... } // from try @ 0097c0ac with catch @ 0097c0ac
                       catch() { ... } // from try @ 0097c154 with catch @ 0097c0ac
                       catch() { ... } // from try @ 0097c1e4 with catch @ 0097c0ac */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"ccui.Widget",0), (uVar2 & 1) != 0)) {
      pWVar3 = (Widget *)tolua_tousertype(param_1,2,0);
      cocos2d::ui::ListView::pushBackCustomItem(this,pWVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ListView_pushBackCustomItem\'",0);
  }
  else {
                    /* try { // try from 0097c0ec to 00a7c11f has its CatchHandler @ 0097c1fc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ListView:pushBackCustomItem",iVar1 + -1,1);
  }
  return 0;
}

