
/* lua_cocos2dx_extension_ScrollView_hasVisibleParents(lua_State*) */

bool lua_cocos2dx_extension_ScrollView_hasVisibleParents(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  ScrollView *this;
  
                    /* try { // try from 009aad04 to 00aaad1b has its CatchHandler @ 009aada8 */
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 009aad20 to 00aaad4b has its CatchHandler @ 009aadb4 */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 009aad4c to 00aaade3 has its CatchHandler @ 009aac74 */
    uVar2 = cocos2d::extension::ScrollView::hasVisibleParents(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ScrollView:hasVisibleParents",iVar1,0);
  }
  return iVar1 == 0;
}

