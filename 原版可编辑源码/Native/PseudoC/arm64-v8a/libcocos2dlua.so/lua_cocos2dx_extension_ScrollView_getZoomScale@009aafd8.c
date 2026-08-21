
/* lua_cocos2dx_extension_ScrollView_getZoomScale(lua_State*) */

bool lua_cocos2dx_extension_ScrollView_getZoomScale(lua_State *param_1)

{
  int iVar1;
  ScrollView *this;
  float fVar2;
  
                    /* catch() { ... } // from try @ 009aaf98 with catch @ 009aafe8 */
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 009aaf8c with catch @ 009aaff8 */
                    /* catch() { ... } // from try @ 009aaf70 with catch @ 009aaffc */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::extension::ScrollView::getZoomScale(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
                    /* try { // try from 009ab010 to 00aab053 has its CatchHandler @ 009ab010
                       catch() { ... } // from try @ 009ab010 with catch @ 009ab010
                       catch() { ... } // from try @ 009ab0b8 with catch @ 009ab010
                       catch() { ... } // from try @ 009ab170 with catch @ 009ab010 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ScrollView:getZoomScale",iVar1,0);
  }
  return iVar1 == 0;
}

