
bool FUN_008f2cf4(undefined8 param_1)

{
  int iVar1;
  GLoader *this;
  float fVar2;
  
  this = (GLoader *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)fairygui::GLoader::getFillAmount(this);
    lua_pushnumber((double)fVar2,param_1);
  }
  else {
                    /* try { // try from 008f2d38 to 009f2d5f has its CatchHandler @ 008f2c8c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GLoader:getFillAmount",iVar1,0);
  }
                    /* try { // try from 008f2d60 to 009f2d73 has its CatchHandler @ 008f2dac */
  return iVar1 == 0;
}

