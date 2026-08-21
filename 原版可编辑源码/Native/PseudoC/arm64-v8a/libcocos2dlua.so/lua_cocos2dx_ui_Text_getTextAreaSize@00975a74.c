
/* lua_cocos2dx_ui_Text_getTextAreaSize(lua_State*) */

bool lua_cocos2dx_ui_Text_getTextAreaSize(lua_State *param_1)

{
  int iVar1;
  Text *this;
  Size *pSVar2;
  
                    /* catch() { ... } // from try @ 009759d0 with catch @ 00975a8c */
  this = (Text *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 00975968 with catch @ 00975a90 */
                    /* catch() { ... } // from try @ 0097594c with catch @ 00975a94
                       catch() { ... } // from try @ 00975a20 with catch @ 00975a94 */
                    /* catch() { ... } // from try @ 00975990 with catch @ 00975a98
                       catch() { ... } // from try @ 00975a38 with catch @ 00975a98 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pSVar2 = (Size *)cocos2d::ui::Text::getTextAreaSize(this);
    size_to_luaval(param_1,pSVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Text:getTextAreaSize",iVar1,0);
  }
  return iVar1 == 0;
}

