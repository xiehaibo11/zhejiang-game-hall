
undefined8 FUN_008da120(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GObject *this;
  ulong uVar3;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GObject *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 008d9c8c with catch @ 008da15c
                       catch() { ... } // from try @ 008d9dbc with catch @ 008da15c
                       catch() { ... } // from try @ 008d9e2c with catch @ 008da15c
                       catch() { ... } // from try @ 008d9ea4 with catch @ 008da15c
                       catch() { ... } // from try @ 008d9f68 with catch @ 008da15c */
  if (iVar2 + -1 == 1) {
                    /* try { // try from 008da178 to 009da21b has its CatchHandler @ 008da178
                       catch() { ... } // from try @ 008da178 with catch @ 008da178
                       catch() { ... } // from try @ 008da2ec with catch @ 008da178
                       catch() { ... } // from try @ 008da37c with catch @ 008da178 */
    uVar3 = luaval_to_number(param_1,2,&local_40,"fairygui.GObject:setWidth");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GObject_setWidth\'",0);
    }
    else {
      fairygui::GObject::setSize(this,(float)local_40,*(float *)(this + 0xd4),false);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:setWidth",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

