
undefined8 FUN_009e68f8(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Downloader2 *this;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 1) {
    luaL_argerror(param_1,1,"lua_universe_Downloader2_removeListener: expected 1 argument");
  }
  uVar3 = universe::get_int(param_1,1,&local_3c,"lua_universe_Downloader2_removeListener");
  if ((uVar3 & 1) != 0) {
    this = (Downloader2 *)universe::Downloader2::getInstance();
    universe::Downloader2::removeListener(this,local_3c);
    iVar2 = universe::Downloader2::removeScriptListener(this,local_3c);
    if (-1 < iVar2) {
      universe::remove_once_function(param_1,iVar2);
    }
    iVar2 = universe::Downloader2::removeProgressScriptListener(this,local_3c);
    if (-1 < iVar2) {
      universe::remove_once_function(param_1,iVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

