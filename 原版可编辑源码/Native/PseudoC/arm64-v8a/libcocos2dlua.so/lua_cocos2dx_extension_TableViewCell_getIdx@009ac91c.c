
/* lua_cocos2dx_extension_TableViewCell_getIdx(lua_State*) */

bool lua_cocos2dx_extension_TableViewCell_getIdx(lua_State *param_1)

{
  int iVar1;
  TableViewCell *this;
  long lVar2;
  
  this = (TableViewCell *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    lVar2 = cocos2d::extension::TableViewCell::getIdx(this);
    tolua_pushnumber((double)lVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e7344,
               iVar1,0);
  }
  return iVar1 == 0;
}

