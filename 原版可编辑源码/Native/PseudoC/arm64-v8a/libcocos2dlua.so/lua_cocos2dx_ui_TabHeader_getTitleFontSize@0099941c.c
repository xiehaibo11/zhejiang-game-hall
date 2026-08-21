
/* lua_cocos2dx_ui_TabHeader_getTitleFontSize(lua_State*) */

bool lua_cocos2dx_ui_TabHeader_getTitleFontSize(lua_State *param_1)

{
  int iVar1;
  TabHeader *this;
  float fVar2;
  
  this = (TabHeader *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00999440 to 00a99443 has its CatchHandler @ 00999548 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::ui::TabHeader::getTitleFontSize(this);
                    /* try { // try from 00999478 to 00a9947b has its CatchHandler @ 00999544 */
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
                    /* try { // try from 0099945c to 00a99463 has its CatchHandler @ 00999540 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&LAB_012e1fcc,
               iVar1,0);
  }
                    /* try { // try from 0099948c to 00a99497 has its CatchHandler @ 00999540 */
  return iVar1 == 0;
}

