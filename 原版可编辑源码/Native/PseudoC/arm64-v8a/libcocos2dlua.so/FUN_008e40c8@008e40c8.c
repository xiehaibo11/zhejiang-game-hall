
undefined8 FUN_008e40c8(undefined8 param_1)

{
  int iVar1;
  GComboBox *this;
  
                    /* try { // try from 008e40dc to 009e410f has its CatchHandler @ 008e41dc */
  this = (GComboBox *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::GComboBox::refresh(this);
  }
  else {
                    /* try { // try from 008e4110 to 009e4123 has its CatchHandler @ 008e41a8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComboBox:refresh",iVar1 + -1,0);
  }
                    /* try { // try from 008e4128 to 009e415b has its CatchHandler @ 008e41ac */
  return 0;
}

