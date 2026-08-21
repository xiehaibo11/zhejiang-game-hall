
undefined8 FUN_008e3598(lua_State *param_1)

{
  int iVar1;
  GList *this;
  ulong uVar2;
  GObject *pGVar3;
  
  this = (GList *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 == (lua_State *)0x0) || (iVar1 = lua_gettop(param_1), iVar1 < 2)) ||
       (uVar2 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar2 & 1) == 0)) {
                    /* catch() { ... } // from try @ 008e3600 with catch @ 008e3644 */
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GList_removeChildToPool\'",0
                 );
    }
    else {
                    /* try { // try from 008e3600 to 009e3607 has its CatchHandler @ 008e3644 */
                    /* try { // try from 008e3608 to 009e365f has its CatchHandler @ 008e3564 */
      pGVar3 = (GObject *)tolua_tousertype(param_1,2,0);
      fairygui::GList::removeChildToPool(this,pGVar3);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:removeChildToPool",iVar1 + -1,1);
  }
  return 0;
}

