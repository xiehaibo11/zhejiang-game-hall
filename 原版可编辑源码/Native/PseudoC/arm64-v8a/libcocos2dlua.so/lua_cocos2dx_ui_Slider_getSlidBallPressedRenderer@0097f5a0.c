
/* lua_cocos2dx_ui_Slider_getSlidBallPressedRenderer(lua_State*) */

undefined8 lua_cocos2dx_ui_Slider_getSlidBallPressedRenderer(lua_State *param_1)

{
  int iVar1;
  Slider *this;
  undefined8 uVar2;
  void *pvVar3;
  
  this = (Slider *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocos2d::ui::Slider::getSlidBallPressedRenderer(this);
    if (pvVar3 == (void *)0x0) {
                    /* try { // try from 0097f624 to 00a7f657 has its CatchHandler @ 0097f724 */
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "cc.Sprite");
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012dc448,
               iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

