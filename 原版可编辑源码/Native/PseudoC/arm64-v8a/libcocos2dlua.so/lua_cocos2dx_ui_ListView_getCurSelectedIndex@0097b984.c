
/* lua_cocos2dx_ui_ListView_getCurSelectedIndex(lua_State*) */

bool lua_cocos2dx_ui_ListView_getCurSelectedIndex(lua_State *param_1)

{
  int iVar1;
  ListView *this;
  long lVar2;
  
  this = (ListView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    lVar2 = cocos2d::ui::ListView::getCurSelectedIndex(this);
    tolua_pushnumber((double)lVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ListView:getCurSelectedIndex",iVar1,0);
  }
  return iVar1 == 0;
}

