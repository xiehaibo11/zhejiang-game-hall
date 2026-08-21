
undefined8 FUN_008e685c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GMovieClip *pGVar3;
  ulong uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 008e67fc with catch @ 008e6888 */
  pGVar3 = (GMovieClip *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 008e67d8 with catch @ 008e688c */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GMovieClip:setFlip");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GMovieClip_setFlip\'",0);
    }
    else {
      fairygui::GMovieClip::setFlip(pGVar3,local_3c);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GMovieClip:setFlip",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

