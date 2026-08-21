
/* lua_cocos2dx_ui_EditBox_getFontName(lua_State*) */

bool lua_cocos2dx_ui_EditBox_getFontName(lua_State *param_1)

{
  int iVar1;
  EditBox *this;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 00993850 with catch @ 009938e8 */
                    /* catch() { ... } // from try @ 00993868 with catch @ 009938ec */
  this = (EditBox *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::EditBox::getFontName(this);
    tolua_pushstring(param_1,uVar2);
  }
  else {
                    /* catch() { ... } // from try @ 0099381c with catch @ 0099391c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.EditBox:getFontName",iVar1,0);
  }
  return iVar1 == 0;
}

