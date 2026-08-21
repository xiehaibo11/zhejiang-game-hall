
/* lua_cocos2dx_extension_TableView_reloadData(lua_State*) */

bool lua_cocos2dx_extension_TableView_reloadData(lua_State *param_1)

{
  int iVar1;
  TableView *this;
  
  this = (TableView *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009ad544 to 00aad5d7 has its CatchHandler @ 009ad544
                       catch() { ... } // from try @ 009ad544 with catch @ 009ad544
                       catch() { ... } // from try @ 009ad5e4 with catch @ 009ad544 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::extension::TableView::reloadData(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TableView:reloadData",iVar1,0);
  }
  return iVar1 == 0;
}

