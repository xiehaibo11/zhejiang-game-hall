
undefined8 FUN_008dd7e4(undefined8 param_1)

{
  int iVar1;
  GComponent *this;
  
  this = (GComponent *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 008dd80c to 009dd80f has its CatchHandler @ 008dd940 */
  if (iVar1 + -1 == 0) {
    fairygui::GComponent::applyAllControllers(this);
  }
  else {
                    /* try { // try from 008dd828 to 009dd82f has its CatchHandler @ 008dd95c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:applyAllControllers",iVar1 + -1,0);
                    /* try { // try from 008dd830 to 009dd83f has its CatchHandler @ 008dd94c */
  }
  return 0;
}

