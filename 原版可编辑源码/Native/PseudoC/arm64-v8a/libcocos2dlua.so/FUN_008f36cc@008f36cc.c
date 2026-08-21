
undefined8 FUN_008f36cc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GLoader3D *this;
  ulong uVar3;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GLoader3D *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"fairygui.GLoader3D:setShrinkOnly");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GLoader3D_setShrinkOnly\'",0
                 );
    }
    else {
      fairygui::GLoader3D::setShrinkOnly(this,local_3c[0]);
    }
  }
  else {
                    /* try { // try from 008f3754 to 009f37a3 has its CatchHandler @ 008f3754
                       catch() { ... } // from try @ 008f3754 with catch @ 008f3754
                       catch() { ... } // from try @ 008f3800 with catch @ 008f3754
                       catch() { ... } // from try @ 008f383c with catch @ 008f3754 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GLoader3D:setShrinkOnly",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

