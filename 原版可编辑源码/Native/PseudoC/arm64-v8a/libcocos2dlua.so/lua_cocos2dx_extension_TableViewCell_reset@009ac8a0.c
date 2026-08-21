
/* lua_cocos2dx_extension_TableViewCell_reset(lua_State*) */

bool lua_cocos2dx_extension_TableViewCell_reset(lua_State *param_1)

{
  int iVar1;
  TableViewCell *this;
  
                    /* catch() { ... } // from try @ 009ac688 with catch @ 009ac8a4 */
                    /* catch() { ... } // from try @ 009ac5a8 with catch @ 009ac8b8 */
  this = (TableViewCell *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 009ac4e8 with catch @ 009ac8f4 */
    cocos2d::extension::TableViewCell::reset(this);
    lua_settop(param_1,1);
  }
  else {
                    /* catch() { ... } // from try @ 009ac7c8 with catch @ 009ac8d4 */
                    /* catch() { ... } // from try @ 009ac798 with catch @ 009ac8d8 */
                    /* catch() { ... } // from try @ 009ac6ec with catch @ 009ac8dc */
                    /* catch() { ... } // from try @ 009ac6bc with catch @ 009ac8e0 */
                    /* catch() { ... } // from try @ 009ac60c with catch @ 009ac8e4 */
                    /* catch() { ... } // from try @ 009ac5dc with catch @ 009ac8e8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TableViewCell:reset",iVar1,0);
                    /* catch() { ... } // from try @ 009ac54c with catch @ 009ac8ec */
                    /* catch() { ... } // from try @ 009ac518 with catch @ 009ac8f0 */
  }
                    /* try { // try from 009ac918 to 00aac9ab has its CatchHandler @ 009ac918
                       catch() { ... } // from try @ 009ac918 with catch @ 009ac918
                       catch() { ... } // from try @ 009ac9b8 with catch @ 009ac918
                       catch() { ... } // from try @ 009ac9e8 with catch @ 009ac918 */
  return iVar1 == 0;
}

