
bool FUN_008e67e4(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  GMovieClip *this;
  
                    /* try { // try from 008e67fc to 009e6813 has its CatchHandler @ 008e6888 */
  this = (GMovieClip *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = fairygui::GMovieClip::getFlip(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
                    /* try { // try from 008e6814 to 009e68a7 has its CatchHandler @ 008e6720 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GMovieClip:getFlip",iVar1,0);
  }
  return iVar1 == 0;
}

