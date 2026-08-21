
undefined8 FUN_008e9528(undefined8 param_1)

{
  int iVar1;
  GRoot *this;
  
                    /* catch() { ... } // from try @ 008e94a0 with catch @ 008e9528 */
  this = (GRoot *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::GRoot::showModalWait(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GRoot:showModalWait",iVar1 + -1,0);
  }
  return 0;
}

