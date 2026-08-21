
/* lua_cocos2dx_ui_TextField_getDeleteBackward(lua_State*) */

bool lua_cocos2dx_ui_TextField_getDeleteBackward(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  TextField *this;
  
  this = (TextField *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::TextField::getDeleteBackward(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
                    /* try { // try from 00980ba4 to 00a80d67 has its CatchHandler @ 00980ba4
                       catch() { ... } // from try @ 00980ba4 with catch @ 00980ba4
                       catch() { ... } // from try @ 00980dc4 with catch @ 00980ba4
                       catch() { ... } // from try @ 00980e54 with catch @ 00980ba4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:getDeleteBackward",iVar1,0);
  }
  return iVar1 == 0;
}

