
/* lua_cocos2dx_ui_Layout_getBackGroundImageTextureSize(lua_State*) */

bool lua_cocos2dx_ui_Layout_getBackGroundImageTextureSize(lua_State *param_1)

{
  int iVar1;
  Layout *this;
  Size *pSVar2;
  
  this = (Layout *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 0096b15c with catch @ 0096b1f4 */
                    /* catch() { ... } // from try @ 0096b174 with catch @ 0096b1f8 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 0096b128 with catch @ 0096b228 */
    pSVar2 = (Size *)cocos2d::ui::Layout::getBackGroundImageTextureSize(this);
    size_to_luaval(param_1,pSVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Layout:getBackGroundImageTextureSize",iVar1,0);
  }
  return iVar1 == 0;
}

