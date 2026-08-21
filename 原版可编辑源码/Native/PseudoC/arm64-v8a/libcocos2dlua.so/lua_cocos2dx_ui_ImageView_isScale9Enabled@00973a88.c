
/* lua_cocos2dx_ui_ImageView_isScale9Enabled(lua_State*) */

bool lua_cocos2dx_ui_ImageView_isScale9Enabled(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  ImageView *this;
  
                    /* catch() { ... } // from try @ 009739dc with catch @ 00973a94
                       catch() { ... } // from try @ 00973a78 with catch @ 00973a94 */
                    /* catch() { ... } // from try @ 009739c0 with catch @ 00973a98
                       catch() { ... } // from try @ 00973a2c with catch @ 00973a98 */
  this = (ImageView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
                    /* try { // try from 00973ab4 to 00a73aeb has its CatchHandler @ 00973ab4
                       catch() { ... } // from try @ 00973ab4 with catch @ 00973ab4
                       catch() { ... } // from try @ 00973b30 with catch @ 00973ab4
                       catch() { ... } // from try @ 00973bac with catch @ 00973ab4 */
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::ImageView::isScale9Enabled(this);
                    /* try { // try from 00973aec to 00a73b03 has its CatchHandler @ 00973bc4 */
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ImageView:isScale9Enabled",iVar1,0);
  }
  return iVar1 == 0;
}

