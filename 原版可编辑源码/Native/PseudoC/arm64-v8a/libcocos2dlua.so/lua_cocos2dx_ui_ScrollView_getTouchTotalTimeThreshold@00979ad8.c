
/* lua_cocos2dx_ui_ScrollView_getTouchTotalTimeThreshold(lua_State*) */

bool lua_cocos2dx_ui_ScrollView_getTouchTotalTimeThreshold(lua_State *param_1)

{
  int iVar1;
  ScrollView *this;
  float fVar2;
  
                    /* try { // try from 00979ae0 to 00a79b07 has its CatchHandler @ 009799fc */
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 00979b30 to 00a79b33 has its CatchHandler @ 00979bd8 */
    fVar2 = (float)cocos2d::ui::ScrollView::getTouchTotalTimeThreshold(this);
                    /* try { // try from 00979b34 to 00a79ba3 has its CatchHandler @ 009799fc */
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
                    /* try { // try from 00979b08 to 00a79b1b has its CatchHandler @ 00979b88 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012dac3a,
               iVar1,0);
  }
  return iVar1 == 0;
}

