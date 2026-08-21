
/* lua_cocos2dx_ui_ScrollView_isScrollBarAutoHideEnabled(lua_State*) */

bool lua_cocos2dx_ui_ScrollView_isScrollBarAutoHideEnabled(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  ScrollView *this;
  
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
                    /* try { // try from 0097ab14 to 00a7ab47 has its CatchHandler @ 0097ac08 */
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::ScrollView::isScrollBarAutoHideEnabled(this);
    tolua_pushboolean(param_1,uVar2 & 1);
                    /* try { // try from 0097ab50 to 00a7ab6b has its CatchHandler @ 0097ac04 */
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012db29b,
               iVar1,0);
  }
  return iVar1 == 0;
}

