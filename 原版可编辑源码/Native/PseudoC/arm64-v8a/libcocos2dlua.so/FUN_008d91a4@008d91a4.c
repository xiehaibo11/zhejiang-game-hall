
bool FUN_008d91a4(undefined8 param_1)

{
  int iVar1;
  GObject *this;
  float fVar2;
  
  this = (GObject *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 008d8e08 with catch @ 008d91c4 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)fairygui::GObject::getXMin(this);
    lua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:getXMin",iVar1,0);
  }
  return iVar1 == 0;
}

