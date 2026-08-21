
undefined8 FUN_008d9744(lua_State *param_1)

{
  int iVar1;
  GObject *this;
  ulong uVar2;
  GGroup *pGVar3;
  
  this = (GObject *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 008d9370 with catch @ 008d9768 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 == (lua_State *)0x0) || (iVar1 = lua_gettop(param_1), iVar1 < 2)) ||
       (uVar2 = luaval_is_usertype(param_1,2,"fairygui.GGroup",0), (uVar2 & 1) == 0)) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GObject_setGroup\'",0);
    }
    else {
                    /* try { // try from 008d97b0 to 009d983f has its CatchHandler @ 008d97b0
                       catch() { ... } // from try @ 008d97b0 with catch @ 008d97b0
                       catch() { ... } // from try @ 008d986c with catch @ 008d97b0
                       catch() { ... } // from try @ 008d990c with catch @ 008d97b0
                       catch() { ... } // from try @ 008d99d4 with catch @ 008d97b0
                       catch() { ... } // from try @ 008d9a78 with catch @ 008d97b0 */
      pGVar3 = (GGroup *)tolua_tousertype(param_1,2,0);
      fairygui::GObject::setGroup(this,pGVar3);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:setGroup",iVar1 + -1,1);
  }
  return 0;
}

