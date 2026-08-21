
/* lua_cocos2dx_ui_Layout_getBackGroundImageOpacity(lua_State*) */

bool lua_cocos2dx_ui_Layout_getBackGroundImageOpacity(lua_State *param_1)

{
  byte bVar1;
  int iVar2;
  Layout *this;
  
                    /* try { // try from 0096aff4 to 00a6aff7 has its CatchHandler @ 0096b02c */
                    /* try { // try from 0096aff8 to 00a6b03f has its CatchHandler @ 0096afa8 */
  this = (Layout *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    bVar1 = cocos2d::ui::Layout::getBackGroundImageOpacity(this);
    tolua_pushnumber((double)bVar1,param_1);
  }
  else {
                    /* catch() { ... } // from try @ 0096aff4 with catch @ 0096b02c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d7a7e,
               iVar2,0);
                    /* try { // try from 0096b040 to 00a6b127 has its CatchHandler @ 0096b040
                       catch() { ... } // from try @ 0096b040 with catch @ 0096b040
                       catch() { ... } // from try @ 0096b1a8 with catch @ 0096b040 */
  }
  return iVar2 == 0;
}

