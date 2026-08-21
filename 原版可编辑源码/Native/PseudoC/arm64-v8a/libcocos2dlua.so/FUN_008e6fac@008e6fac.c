
undefined8 FUN_008e6fac(undefined8 param_1)

{
  int iVar1;
  GMovieClip *this;
  
  this = (GMovieClip *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::GMovieClip::reverse(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GMovieClip:reverse",iVar1 + -1,0);
  }
  return 0;
}

