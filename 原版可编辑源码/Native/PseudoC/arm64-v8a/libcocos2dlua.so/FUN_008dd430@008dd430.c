
bool FUN_008dd430(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  GImage *this;
  
  this = (GImage *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = fairygui::GImage::getFlip(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
                    /* try { // try from 008dd468 to 009dd46f has its CatchHandler @ 008dd734 */
                    /* try { // try from 008dd470 to 009dd47b has its CatchHandler @ 008dd72c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GImage:getFlip",iVar1,0);
  }
  return iVar1 == 0;
}

