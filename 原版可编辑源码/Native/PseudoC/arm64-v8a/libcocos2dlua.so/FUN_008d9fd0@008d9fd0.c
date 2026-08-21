
undefined8 FUN_008d9fd0(undefined8 param_1)

{
  int iVar1;
  GObject *this;
  
  this = (GObject *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::GObject::stopDrag(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:stopDrag",iVar1 + -1,0);
  }
                    /* catch() { ... } // from try @ 008d9e70 with catch @ 008da02c */
                    /* catch() { ... } // from try @ 008d9edc with catch @ 008da030 */
                    /* catch() { ... } // from try @ 008d9c60 with catch @ 008da034 */
  return 0;
}

