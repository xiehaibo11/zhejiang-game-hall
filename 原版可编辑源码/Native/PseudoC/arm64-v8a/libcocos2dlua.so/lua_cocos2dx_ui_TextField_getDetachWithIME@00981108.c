
/* lua_cocos2dx_ui_TextField_getDetachWithIME(lua_State*) */

bool lua_cocos2dx_ui_TextField_getDetachWithIME(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  TextField *this;
  
  this = (TextField *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0098112c to 00a8115f has its CatchHandler @ 0098122c */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 00981160 to 00a81173 has its CatchHandler @ 009811f8 */
    uVar2 = cocos2d::ui::TextField::getDetachWithIME(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012dca2f,
               iVar1,0);
  }
                    /* try { // try from 00981178 to 00a811ab has its CatchHandler @ 009811fc */
  return iVar1 == 0;
}

