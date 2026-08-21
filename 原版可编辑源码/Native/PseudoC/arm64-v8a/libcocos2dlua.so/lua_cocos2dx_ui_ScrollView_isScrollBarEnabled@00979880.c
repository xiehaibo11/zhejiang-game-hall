
/* lua_cocos2dx_ui_ScrollView_isScrollBarEnabled(lua_State*) */

bool lua_cocos2dx_ui_ScrollView_isScrollBarEnabled(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  ScrollView *this;
  
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 009798a8 to 00a798bf has its CatchHandler @ 00979968 */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::ScrollView::isScrollBarEnabled(this);
                    /* try { // try from 009798dc to 00a7990f has its CatchHandler @ 00979858 */
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
                    /* try { // try from 009798c4 to 00a798db has its CatchHandler @ 00979964 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:isScrollBarEnabled",iVar1,0);
  }
  return iVar1 == 0;
}

