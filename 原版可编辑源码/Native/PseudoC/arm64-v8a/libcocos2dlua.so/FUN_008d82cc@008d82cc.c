
undefined8 FUN_008d82cc(undefined8 param_1)

{
  int iVar1;
  UIEventDispatcher *this;
  
  this = (UIEventDispatcher *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008d82ec to 009d830f has its CatchHandler @ 008d8404 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    fairygui::UIEventDispatcher::removeEventListeners(this);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.UIEventDispatcher:removeEventListeners",iVar1 + -1,0);
  }
                    /* try { // try from 008d8328 to 009d832f has its CatchHandler @ 008d83c0 */
  return 0;
}

