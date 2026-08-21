
/* lua_cocos2dx_ui_TextField_getStringLength(lua_State*) */

bool lua_cocos2dx_ui_TextField_getStringLength(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  TextField *this;
  
                    /* catch() { ... } // from try @ 00981510 with catch @ 00981608
                       catch() { ... } // from try @ 00981540 with catch @ 00981608
                       catch() { ... } // from try @ 00981598 with catch @ 00981608 */
  this = (TextField *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00981624 to 00a8170b has its CatchHandler @ 00981624
                       catch() { ... } // from try @ 00981624 with catch @ 00981624
                       catch() { ... } // from try @ 0098178c with catch @ 00981624 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = cocos2d::ui::TextField::getStringLength(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012dcbab,
               iVar1,0);
  }
  return iVar1 == 0;
}

