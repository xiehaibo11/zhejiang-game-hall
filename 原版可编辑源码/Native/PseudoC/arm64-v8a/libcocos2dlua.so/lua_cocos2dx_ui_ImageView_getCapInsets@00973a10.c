
/* lua_cocos2dx_ui_ImageView_getCapInsets(lua_State*) */

bool lua_cocos2dx_ui_ImageView_getCapInsets(lua_State *param_1)

{
  int iVar1;
  ImageView *this;
  Rect *pRVar2;
  
  this = (ImageView *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00973a2c to 00a73a3f has its CatchHandler @ 00973a98 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pRVar2 = (Rect *)cocos2d::ui::ImageView::getCapInsets(this);
    rect_to_luaval(param_1,pRVar2);
                    /* try { // try from 00973a78 to 00a73a7f has its CatchHandler @ 00973a94 */
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&LAB_012d9510,
               iVar1,0);
  }
                    /* try { // try from 00973a80 to 00a73ab3 has its CatchHandler @ 00973988 */
  return iVar1 == 0;
}

