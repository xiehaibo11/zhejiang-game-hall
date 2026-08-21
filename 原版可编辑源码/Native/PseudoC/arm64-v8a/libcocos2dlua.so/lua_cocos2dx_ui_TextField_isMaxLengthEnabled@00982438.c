
/* lua_cocos2dx_ui_TextField_isMaxLengthEnabled(lua_State*) */

bool lua_cocos2dx_ui_TextField_isMaxLengthEnabled(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  TextField *this;
  
  this = (TextField *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
                    /* try { // try from 00982464 to 00a82523 has its CatchHandler @ 00982464
                       catch(type#1 @ 00000000) { ... } // from try @ 00982464 with catch @ 00982464
                        */
  if (iVar1 == 0) {
    uVar2 = cocos2d::ui::TextField::isMaxLengthEnabled(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:isMaxLengthEnabled",iVar1,0);
  }
  return iVar1 == 0;
}

