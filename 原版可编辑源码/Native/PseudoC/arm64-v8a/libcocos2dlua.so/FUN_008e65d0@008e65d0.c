
bool FUN_008e65d0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  GMovieClip *this;
  
  this = (GMovieClip *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = fairygui::GMovieClip::getFrame(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GMovieClip:getFrame",iVar1,0);
  }
                    /* try { // try from 008e6640 to 009e6687 has its CatchHandler @ 008e6704 */
  return iVar1 == 0;
}

