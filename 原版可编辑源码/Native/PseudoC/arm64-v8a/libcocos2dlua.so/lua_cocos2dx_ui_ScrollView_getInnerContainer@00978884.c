
/* lua_cocos2dx_ui_ScrollView_getInnerContainer(lua_State*) */

undefined8 lua_cocos2dx_ui_ScrollView_getInnerContainer(lua_State *param_1)

{
  int iVar1;
  ScrollView *this;
  undefined8 uVar2;
  void *pvVar3;
  
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocos2d::ui::ScrollView::getInnerContainer(this);
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 009788ec to 00a788ff has its CatchHandler @ 0097896c */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "ccui.Layout");
                    /* try { // try from 00978900 to 00a789b3 has its CatchHandler @ 00978828 */
    }
    uVar2 = 1;
  }
  else {
                    /* try { // try from 009788bc to 00a788eb has its CatchHandler @ 00978828 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:getInnerContainer",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

