
undefined8 FUN_008f2d6c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GLoader *this;
  ulong uVar3;
  double local_40;
  long local_38;
  
                    /* try { // try from 008f2d74 to 009f2dbf has its CatchHandler @ 008f2c8c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GLoader *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 008f2cdc with catch @ 008f2dac
                       catch() { ... } // from try @ 008f2d60 with catch @ 008f2dac */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"fairygui.GLoader:setFillAmount");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GLoader_setFillAmount\'",0);
    }
    else {
      fairygui::GLoader::setFillAmount(this,(float)local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GLoader:setFillAmount",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

