
/* lua_cocos2dx_ui_EditBox_getCapInsetsDisabledRenderer(lua_State*) */

bool lua_cocos2dx_ui_EditBox_getCapInsetsDisabledRenderer(lua_State *param_1)

{
  int iVar1;
  EditBox *this;
  Rect *pRVar2;
  
  this = (EditBox *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pRVar2 = (Rect *)cocos2d::ui::EditBox::getCapInsetsDisabledRenderer(this);
                    /* try { // try from 00992de0 to 00a92f27 has its CatchHandler @ 00992de0
                       catch() { ... } // from try @ 00992de0 with catch @ 00992de0
                       catch() { ... } // from try @ 00992fa8 with catch @ 00992de0 */
    rect_to_luaval(param_1,pRVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.EditBox:getCapInsetsDisabledRenderer",iVar1,0);
  }
  return iVar1 == 0;
}

