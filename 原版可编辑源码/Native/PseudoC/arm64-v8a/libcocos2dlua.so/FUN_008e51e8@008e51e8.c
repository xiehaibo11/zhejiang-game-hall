
bool FUN_008e51e8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  GButton *this;
  
  this = (GButton *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 008e5210 to 009e5223 has its CatchHandler @ 008e52a8 */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = fairygui::GButton::getTitleFontSize(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
                    /* try { // try from 008e5228 to 009e525b has its CatchHandler @ 008e52ac */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GButton:getTitleFontSize",iVar1,0);
  }
                    /* try { // try from 008e525c to 009e52f7 has its CatchHandler @ 008e50dc */
  return iVar1 == 0;
}

