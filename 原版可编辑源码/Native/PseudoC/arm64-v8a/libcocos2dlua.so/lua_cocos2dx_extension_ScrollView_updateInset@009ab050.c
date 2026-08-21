
/* lua_cocos2dx_extension_ScrollView_updateInset(lua_State*) */

bool lua_cocos2dx_extension_ScrollView_updateInset(lua_State *param_1)

{
  int iVar1;
  ScrollView *this;
  
                    /* try { // try from 009ab054 to 00aab05b has its CatchHandler @ 009ab1e8 */
                    /* try { // try from 009ab05c to 00aab063 has its CatchHandler @ 009ab1e0 */
                    /* try { // try from 009ab064 to 00aab0b7 has its CatchHandler @ 009ab1ec */
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::extension::ScrollView::updateInset(this);
                    /* try { // try from 009ab0b8 to 00aab0d3 has its CatchHandler @ 009ab010 */
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ScrollView:updateInset",iVar1,0);
  }
  return iVar1 == 0;
}

