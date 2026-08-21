
/* lua_cocos2dx_ui_Slider_getSlidBallDisabledRenderer(lua_State*) */

undefined8 lua_cocos2dx_ui_Slider_getSlidBallDisabledRenderer(lua_State *param_1)

{
  int iVar1;
  Slider *this;
  undefined8 uVar2;
  void *pvVar3;
  
                    /* try { // try from 0097e714 to 00a7e763 has its CatchHandler @ 0097e714
                       catch() { ... } // from try @ 0097e714 with catch @ 0097e714
                       catch() { ... } // from try @ 0097e798 with catch @ 0097e714
                       catch() { ... } // from try @ 0097e7e0 with catch @ 0097e714 */
  this = (Slider *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocos2d::ui::Slider::getSlidBallDisabledRenderer(this);
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 0097e764 to 00a7e77b has its CatchHandler @ 0097e824 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "cc.Sprite");
                    /* try { // try from 0097e780 to 00a7e797 has its CatchHandler @ 0097e820 */
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Slider:getSlidBallDisabledRenderer",iVar1 + -1,0);
    uVar2 = 0;
  }
                    /* try { // try from 0097e798 to 00a7e7cb has its CatchHandler @ 0097e714 */
  return uVar2;
}

