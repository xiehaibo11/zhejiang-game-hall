
undefined8 FUN_008f80d8(lua_State *param_1)

{
  int iVar1;
  GLabel *this;
  undefined8 uVar2;
  void *pvVar3;
  
  this = (GLabel *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 008f8100 to 009f8113 has its CatchHandler @ 008f8198 */
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)fairygui::GLabel::getTextField(this);
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 008f814c to 009f81e7 has its CatchHandler @ 008f7edc */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "fairygui.GTextField");
    }
    uVar2 = 1;
  }
  else {
                    /* try { // try from 008f8118 to 009f814b has its CatchHandler @ 008f819c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GLabel:getTextField",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

