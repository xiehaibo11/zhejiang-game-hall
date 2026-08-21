
/* lua_cocos2dx_ui_LoadingBar_getCapInsets(lua_State*) */

bool lua_cocos2dx_ui_LoadingBar_getCapInsets(lua_State *param_1)

{
  int iVar1;
  LoadingBar *this;
  Rect *pRVar2;
  
                    /* try { // try from 00977674 to 00a77863 has its CatchHandler @ 00977674
                       catch() { ... } // from try @ 00977674 with catch @ 00977674
                       catch() { ... } // from try @ 009778e4 with catch @ 00977674 */
  this = (LoadingBar *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pRVar2 = (Rect *)cocos2d::ui::LoadingBar::getCapInsets(this);
    rect_to_luaval(param_1,pRVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.LoadingBar:getCapInsets",iVar1,0);
  }
  return iVar1 == 0;
}

