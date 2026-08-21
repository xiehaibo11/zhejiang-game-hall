
/* lua_cocos2dx_extension_TableView__updateContentSize(lua_State*) */

bool lua_cocos2dx_extension_TableView__updateContentSize(lua_State *param_1)

{
  int iVar1;
  TableView *this;
  
                    /* try { // try from 009ad0e0 to 00aad0e7 has its CatchHandler @ 009ad198 */
                    /* try { // try from 009ad0e8 to 00aad11b has its CatchHandler @ 009acf8c */
  this = (TableView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 009ad12c to 00aad14b has its CatchHandler @ 009acf8c */
    cocos2d::extension::TableView::_updateContentSize(this);
    lua_settop(param_1,1);
  }
  else {
                    /* try { // try from 009ad11c to 00aad12b has its CatchHandler @ 009ad1b8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TableView:_updateContentSize",iVar1,0);
  }
                    /* try { // try from 009ad14c to 00aad157 has its CatchHandler @ 009ad1b4 */
  return iVar1 == 0;
}

