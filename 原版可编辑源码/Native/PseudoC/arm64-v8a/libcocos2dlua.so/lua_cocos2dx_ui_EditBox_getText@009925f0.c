
/* lua_cocos2dx_ui_EditBox_getText(lua_State*) */

bool lua_cocos2dx_ui_EditBox_getText(lua_State *param_1)

{
  int iVar1;
  EditBox *this;
  undefined8 uVar2;
  
  this = (EditBox *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::EditBox::getText(this);
    tolua_pushstring(param_1,uVar2);
  }
  else {
                    /* catch() { ... } // from try @ 0099259c with catch @ 00992634 */
                    /* catch() { ... } // from try @ 009925b4 with catch @ 00992638 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.EditBox:getText",iVar1,0);
  }
  return iVar1 == 0;
}

