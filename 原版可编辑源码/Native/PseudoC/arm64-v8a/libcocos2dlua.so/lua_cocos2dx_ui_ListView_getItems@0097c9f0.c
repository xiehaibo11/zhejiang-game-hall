
/* lua_cocos2dx_ui_ListView_getItems(lua_State*) */

bool lua_cocos2dx_ui_ListView_getItems(lua_State *param_1)

{
  int iVar1;
  ListView *this;
  Vector *pVVar2;
  
  this = (ListView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pVVar2 = (Vector *)cocos2d::ui::ListView::getItems(this);
    ccvector_to_luaval<cocos2d::ui::Widget*>(param_1,pVVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ListView:getItems",iVar1,0);
  }
  return iVar1 == 0;
}

