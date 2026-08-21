
/* lua_cocos2dx_ui_ListView_getIndex(lua_State*) */

undefined8 lua_cocos2dx_ui_ListView_getIndex(lua_State *param_1)

{
  int iVar1;
  ListView *this;
  ulong uVar2;
  Widget *pWVar3;
  long lVar4;
  
                    /* try { // try from 0097bf80 to 00a7bfb7 has its CatchHandler @ 0097bf80
                       catch() { ... } // from try @ 0097bf80 with catch @ 0097bf80
                       catch() { ... } // from try @ 0097bffc with catch @ 0097bf80
                       catch() { ... } // from try @ 0097c078 with catch @ 0097bf80 */
  this = (ListView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* try { // try from 0097bfb8 to 00a7bfcf has its CatchHandler @ 0097c090 */
                    /* try { // try from 0097bfd4 to 00a7bffb has its CatchHandler @ 0097c08c */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"ccui.Widget",0), (uVar2 & 1) != 0)) {
      pWVar3 = (Widget *)tolua_tousertype(param_1,2,0);
      lVar4 = cocos2d::ui::ListView::getIndex(this,pWVar3);
                    /* try { // try from 0097bffc to 00a7c023 has its CatchHandler @ 0097bf80 */
      tolua_pushnumber((double)lVar4,param_1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_ListView_getIndex\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012db61d,
               iVar1 + -1,1);
                    /* try { // try from 0097c024 to 00a7c037 has its CatchHandler @ 0097c090 */
  }
  return 0;
}

