
undefined8 FUN_00963530(lua_State *param_1)

{
  int iVar1;
  EditBox *this;
  
                    /* try { // try from 00963538 to 00a6353b has its CatchHandler @ 00963580 */
                    /* try { // try from 0096353c to 00a63593 has its CatchHandler @ 009634ec */
  if (param_1 != (lua_State *)0x0) {
    this = (EditBox *)tolua_tousertype(param_1,1,0);
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 1) {
      iVar1 = toluafix_ref_function(param_1,2,0);
                    /* catch() { ... } // from try @ 00963538 with catch @ 00963580 */
      cocos2d::ui::EditBox::registerScriptEditBoxHandler(this,iVar1);
    }
    else {
                    /* try { // try from 00963594 to 00a6364b has its CatchHandler @ 00963594
                       catch() { ... } // from try @ 00963594 with catch @ 00963594
                       catch() { ... } // from try @ 009636cc with catch @ 00963594 */
      luaL_error(param_1,
                 "%s function of EditBox  has wrong number of arguments: %d, was expecting %d\n",
                 "ccui.EditBox:registerScriptEditBoxHandler",iVar1 + -1,1);
    }
  }
  return 0;
}

