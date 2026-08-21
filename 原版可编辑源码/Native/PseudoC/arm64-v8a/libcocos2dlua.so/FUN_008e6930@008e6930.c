
undefined8 FUN_008e6930(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GMovieClip *this;
  ulong uVar3;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GMovieClip *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"fairygui.GMovieClip:setPlaying");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GMovieClip_setPlaying\'",0);
    }
    else {
      fairygui::GMovieClip::setPlaying(this,local_3c[0]);
    }
  }
  else {
                    /* try { // try from 008e69b0 to 009e6a4b has its CatchHandler @ 008e69b0
                       catch() { ... } // from try @ 008e69b0 with catch @ 008e69b0
                       catch() { ... } // from try @ 008e6a54 with catch @ 008e69b0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GMovieClip:setPlaying",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

