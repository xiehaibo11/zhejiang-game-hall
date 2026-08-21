
/* lua_cocos2dx_ui_RichText_isAnchorTextBoldEnabled(lua_State*) */

bool lua_cocos2dx_ui_RichText_isAnchorTextBoldEnabled(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  RichText *this;
  
  this = (RichText *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::RichText::isAnchorTextBoldEnabled(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
                    /* try { // try from 0098da48 to 00a8da5b has its CatchHandler @ 0098dae0 */
                    /* try { // try from 0098da60 to 00a8da93 has its CatchHandler @ 0098dae4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012df3dd,
               iVar1,0);
  }
  return iVar1 == 0;
}

