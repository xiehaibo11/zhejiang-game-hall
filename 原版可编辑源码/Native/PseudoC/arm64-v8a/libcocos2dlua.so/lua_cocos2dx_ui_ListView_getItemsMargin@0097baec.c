
/* lua_cocos2dx_ui_ListView_getItemsMargin(lua_State*) */

bool lua_cocos2dx_ui_ListView_getItemsMargin(lua_State *param_1)

{
  int iVar1;
  ListView *this;
  float fVar2;
  
  this = (ListView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
                    /* try { // try from 0097bb18 to 00a7bb1b has its CatchHandler @ 0097bc1c */
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::ui::ListView::getItemsMargin(this);
                    /* try { // try from 0097bb4c to 00a7bb4f has its CatchHandler @ 0097bc18 */
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
                    /* try { // try from 0097bb34 to 00a7bb3b has its CatchHandler @ 0097bc14 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ListView:getItemsMargin",iVar1,0);
  }
                    /* try { // try from 0097bb60 to 00a7bb6b has its CatchHandler @ 0097bc14 */
  return iVar1 == 0;
}

