
/* lua_cocos2dx_ui_Button_getTitleRenderer(lua_State*) */

undefined8 lua_cocos2dx_ui_Button_getTitleRenderer(lua_State *param_1)

{
  int iVar1;
  Button *this;
  undefined8 uVar2;
  void *pvVar3;
  
  this = (Button *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 0096c2c0 to 00a6c2c7 has its CatchHandler @ 0096c304 */
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocos2d::ui::Button::getTitleRenderer(this);
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* catch() { ... } // from try @ 0096c2c0 with catch @ 0096c304 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,"cc.Label"
                );
    }
    uVar2 = 1;
  }
  else {
                    /* try { // try from 0096c2c8 to 00a6c31f has its CatchHandler @ 0096c22c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d7efc,
               iVar1 + -1,0);
    uVar2 = 0;
  }
                    /* try { // try from 0096c320 to 00a6c383 has its CatchHandler @ 0096c320
                       catch() { ... } // from try @ 0096c320 with catch @ 0096c320
                       catch() { ... } // from try @ 0096c5cc with catch @ 0096c320 */
  return uVar2;
}

