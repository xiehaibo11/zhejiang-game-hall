
/* lua_cocos2dx_extension_TableView_getVerticalFillOrder(lua_State*) */

bool lua_cocos2dx_extension_TableView_getVerticalFillOrder(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  TableView *this;
  
                    /* try { // try from 009ad158 to 00aad1df has its CatchHandler @ 009acf8c */
  this = (TableView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = cocos2d::extension::TableView::getVerticalFillOrder(this);
                    /* catch() { ... } // from try @ 009ad14c with catch @ 009ad1b4 */
    tolua_pushnumber((double)iVar2,param_1);
                    /* catch() { ... } // from try @ 009ad11c with catch @ 009ad1b8 */
  }
  else {
                    /* catch() { ... } // from try @ 009ad0e0 with catch @ 009ad198 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e7573,
               iVar1,0);
  }
                    /* catch() { ... } // from try @ 009ad038 with catch @ 009ad1bc */
  return iVar1 == 0;
}

