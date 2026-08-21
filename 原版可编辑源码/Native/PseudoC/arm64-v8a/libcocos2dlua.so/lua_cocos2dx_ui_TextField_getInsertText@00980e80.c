
/* lua_cocos2dx_ui_TextField_getInsertText(lua_State*) */

bool lua_cocos2dx_ui_TextField_getInsertText(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  TextField *this;
  
                    /* catch() { ... } // from try @ 00980d98 with catch @ 00980e84
                       catch() { ... } // from try @ 00980e4c with catch @ 00980e84 */
                    /* catch() { ... } // from try @ 00980d68 with catch @ 00980e88 */
  this = (TextField *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00980ea4 to 00a80eef has its CatchHandler @ 00980ea4
                       catch() { ... } // from try @ 00980ea4 with catch @ 00980ea4
                       catch() { ... } // from try @ 00980ef4 with catch @ 00980ea4 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::TextField::getInsertText(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:getInsertText",iVar1,0);
  }
                    /* try { // try from 00980ef0 to 00a80ef3 has its CatchHandler @ 00980f28 */
                    /* try { // try from 00980ef4 to 00a80f3b has its CatchHandler @ 00980ea4 */
  return iVar1 == 0;
}

