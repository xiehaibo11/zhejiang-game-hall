
undefined8 FUN_008d9310(undefined8 param_1)

{
  double dVar1;
  int iVar2;
  GObject *this;
  
  this = (GObject *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    dVar1 = (double)lua_tonumber(param_1,2);
    fairygui::GObject::setYMin(this,(float)dVar1);
  }
  else {
                    /* try { // try from 008d9370 to 009d9387 has its CatchHandler @ 008d9768 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:setYMin",iVar2 + -1,1);
  }
  return 0;
}

