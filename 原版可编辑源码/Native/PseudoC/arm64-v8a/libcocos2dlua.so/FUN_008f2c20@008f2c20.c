
undefined8 FUN_008f2c20(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GLoader *this;
  ulong uVar3;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GLoader *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"fairygui.GLoader:setFillClockwise");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GLoader_setFillClockwise\'",
                  0);
    }
    else {
                    /* try { // try from 008f2c8c to 009f2cdb has its CatchHandler @ 008f2c8c
                       catch() { ... } // from try @ 008f2c8c with catch @ 008f2c8c
                       catch() { ... } // from try @ 008f2d38 with catch @ 008f2c8c
                       catch() { ... } // from try @ 008f2d74 with catch @ 008f2c8c */
      fairygui::GLoader::setFillClockwise(this,local_3c[0]);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GLoader:setFillClockwise",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008f2cdc to 009f2d37 has its CatchHandler @ 008f2dac */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

