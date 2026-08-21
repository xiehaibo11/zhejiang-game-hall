
undefined8 FUN_008e89a8(undefined8 param_1)

{
  int iVar1;
  GRoot *this;
  
  this = (GRoot *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 008e8964 with catch @ 008e89c8 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::GRoot::closeModalWait(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GRoot:closeModalWait",iVar1 + -1,0);
  }
  return 0;
}

