
/* lua_cocos2dx_ui_Text_getTextVerticalAlignment(lua_State*) */

bool lua_cocos2dx_ui_Text_getTextVerticalAlignment(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  Text *this;
  
  this = (Text *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00975a20 to 00a75a33 has its CatchHandler @ 00975a94 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = cocos2d::ui::Text::getTextVerticalAlignment(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
                    /* try { // try from 00975a38 to 00a75a4b has its CatchHandler @ 00975a98 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Text:getTextVerticalAlignment",iVar1,0);
                    /* try { // try from 00975a4c to 00a75ab3 has its CatchHandler @ 009758f8 */
  }
  return iVar1 == 0;
}

