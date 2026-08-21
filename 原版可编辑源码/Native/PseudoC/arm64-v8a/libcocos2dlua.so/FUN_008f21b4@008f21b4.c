
undefined8 FUN_008f21b4(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GLoader *this;
  ulong uVar3;
  int local_3c;
  long local_38;
  
                    /* try { // try from 008f21c0 to 009f21f3 has its CatchHandler @ 008f2244 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GLoader *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 008f21f4 to 009f228f has its CatchHandler @ 008f1d2c */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GLoader:setFrame");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GLoader_setFrame\'",0);
    }
    else {
      fairygui::GLoader::setFrame(this,local_3c);
    }
  }
  else {
                    /* catch() { ... } // from try @ 008f21a8 with catch @ 008f2240 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GLoader:setFrame",iVar2 + -1,1);
                    /* catch() { ... } // from try @ 008f21c0 with catch @ 008f2244 */
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 008f2174 with catch @ 008f2274 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

