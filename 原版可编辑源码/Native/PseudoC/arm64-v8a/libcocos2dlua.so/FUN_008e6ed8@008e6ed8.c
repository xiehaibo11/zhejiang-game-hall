
undefined8 FUN_008e6ed8(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GMovieClip *this;
  ulong uVar3;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008e6efc to 009e6f0f has its CatchHandler @ 008e6f58 */
  this = (GMovieClip *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008e6f10 to 009e6f77 has its CatchHandler @ 008e6e1c */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GMovieClip:setFrame");
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 008e6f78 to 009e7023 has its CatchHandler @ 008e6f78
                       catch() { ... } // from try @ 008e6f78 with catch @ 008e6f78
                       catch() { ... } // from try @ 008e7030 with catch @ 008e6f78 */
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GMovieClip_setFrame\'",0);
    }
    else {
      fairygui::GMovieClip::setFrame(this,local_3c);
    }
  }
  else {
                    /* catch() { ... } // from try @ 008e6efc with catch @ 008e6f58 */
                    /* catch() { ... } // from try @ 008e6ea4 with catch @ 008e6f5c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GMovieClip:setFrame",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

