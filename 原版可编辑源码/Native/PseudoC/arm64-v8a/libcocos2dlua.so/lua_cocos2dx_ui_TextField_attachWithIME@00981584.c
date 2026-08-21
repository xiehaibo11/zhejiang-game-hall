
/* lua_cocos2dx_ui_TextField_attachWithIME(lua_State*) */

bool lua_cocos2dx_ui_TextField_attachWithIME(lua_State *param_1)

{
  int iVar1;
  TextField *this;
  
                    /* try { // try from 00981598 to 00a815ab has its CatchHandler @ 00981608 */
  this = (TextField *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 009815ac to 00a81623 has its CatchHandler @ 009814d4 */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::ui::TextField::attachWithIME(this);
                    /* catch() { ... } // from try @ 00981550 with catch @ 009815ec */
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:attachWithIME",iVar1,0);
  }
                    /* catch() { ... } // from try @ 00981538 with catch @ 009815f0 */
  return iVar1 == 0;
}

