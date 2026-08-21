
/* lua_cocos2dx_ui_TabHeader_getTitleColor(lua_State*) */

bool lua_cocos2dx_ui_TabHeader_getTitleColor(lua_State *param_1)

{
  int iVar1;
  TabHeader *this;
  Color4B *pCVar2;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0099955c with catch @ 0099958c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009994e8 with catch @ 00999590
                        */
  this = (TabHeader *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009995a4 to 00a995f3 has its CatchHandler @ 009995a4
                       catch() { ... } // from try @ 009995a4 with catch @ 009995a4
                       catch() { ... } // from try @ 0099962c with catch @ 009995a4
                       catch() { ... } // from try @ 0099967c with catch @ 009995a4 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pCVar2 = (Color4B *)cocos2d::ui::TabHeader::getTitleColor(this);
    color4b_to_luaval(param_1,pCVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TabHeader:getTitleColor",iVar1,0);
  }
                    /* try { // try from 009995f4 to 00a9960b has its CatchHandler @ 009996d8 */
  return iVar1 == 0;
}

