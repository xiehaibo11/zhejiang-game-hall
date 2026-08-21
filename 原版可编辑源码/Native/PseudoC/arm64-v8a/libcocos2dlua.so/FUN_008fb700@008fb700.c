
undefined8 FUN_008fb700(lua_State *param_1)

{
  int iVar1;
  TextFormat *this;
  TextFormat *pTVar2;
  TextFormat *extraout_x1;
  TextFormat *extraout_x1_00;
  undefined1 auVar3 [16];
  
  this = (TextFormat *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008fb724 to 009fb737 has its CatchHandler @ 008fb74c */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    pTVar2 = extraout_x1;
                    /* try { // try from 008fb738 to 009fb787 has its CatchHandler @ 008fb608 */
                    /* catch() { ... } // from try @ 008fb65c with catch @ 008fb74c
                       catch() { ... } // from try @ 008fb724 with catch @ 008fb74c */
    if (((param_1 != (lua_State *)0x0) &&
        (iVar1 = lua_gettop(param_1), pTVar2 = extraout_x1_00, 1 < iVar1)) &&
       (auVar3 = luaval_is_usertype(param_1,2,"fairygui.TextFormat",0), pTVar2 = auVar3._8_8_,
       (auVar3._0_8_ & 1) != 0)) {
      pTVar2 = (TextFormat *)tolua_tousertype(param_1,2,0);
    }
    fairygui::TextFormat::setFormat(this,pTVar2);
  }
  else {
                    /* try { // try from 008fb788 to 009fb87b has its CatchHandler @ 008fb788
                       catch() { ... } // from try @ 008fb788 with catch @ 008fb788
                       catch() { ... } // from try @ 008fb920 with catch @ 008fb788 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.TextFormat:setFormat",iVar1 + -1,1);
  }
  return 0;
}

