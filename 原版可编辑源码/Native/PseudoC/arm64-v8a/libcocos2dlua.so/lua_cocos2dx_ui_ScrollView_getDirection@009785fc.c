
/* lua_cocos2dx_ui_ScrollView_getDirection(lua_State*) */

bool lua_cocos2dx_ui_ScrollView_getDirection(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  ScrollView *this;
  
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = cocos2d::ui::ScrollView::getDirection(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:getDirection",iVar1,0);
  }
                    /* try { // try from 00978668 to 00a786bf has its CatchHandler @ 00978668
                       catch() { ... } // from try @ 00978668 with catch @ 00978668
                       catch() { ... } // from try @ 00978710 with catch @ 00978668
                       catch() { ... } // from try @ 00978754 with catch @ 00978668 */
  return iVar1 == 0;
}

