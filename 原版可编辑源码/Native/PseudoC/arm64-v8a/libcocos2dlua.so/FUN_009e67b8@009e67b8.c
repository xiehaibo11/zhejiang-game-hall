
undefined8 FUN_009e67b8(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Downloader2 *this;
  code *pcVar4;
  uint local_78;
  int iStack_74;
  undefined **local_70;
  lua_State *plStack_68;
  ulong local_60;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
    luaL_argerror(param_1,2,&DAT_012f39ef);
  }
  uVar3 = universe::get_int(param_1,1,&iStack_74,"lua_universe_Downloader2_addProgressListener");
  if (((uVar3 & 1) == 0) ||
     (uVar3 = universe::create_once_function
                        (param_1,2,(int *)&local_78,"lua_universe_Downloader2_addProgressListener"),
     (uVar3 & 1) == 0)) goto LAB_009e6894;
  this = (Downloader2 *)universe::Downloader2::getInstance();
  local_60 = (ulong)local_78;
  local_70 = &PTR_FUN_016a08c8;
  plStack_68 = param_1;
  local_50 = &local_70;
  universe::Downloader2::addProgressListener(this,iStack_74,(function *)&local_70);
  if (&local_70 == local_50) {
    pcVar4 = (code *)(*local_50)[4];
LAB_009e6884:
    (*pcVar4)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar4 = (code *)(*local_50)[5];
    goto LAB_009e6884;
  }
  universe::Downloader2::addProgressScriptListener(this,iStack_74,local_78);
LAB_009e6894:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

