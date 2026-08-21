
void FUN_009e6670(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Downloader2 *this;
  undefined8 uVar4;
  code *pcVar5;
  uint local_84;
  undefined **local_80;
  lua_State *plStack_78;
  ulong local_70;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 1) {
    luaL_argerror(param_1,1,"lua_universe_Downloader2_addListener: expected 1 argument");
  }
  uVar3 = universe::create_once_function
                    (param_1,1,(int *)&local_84,"lua_universe_Downloader2_addListener");
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    goto LAB_009e6754;
  }
  this = (Downloader2 *)universe::Downloader2::getInstance();
  local_70 = (ulong)local_84;
  local_80 = &PTR_FUN_016a0838;
  plStack_78 = param_1;
  local_60 = &local_80;
  iVar2 = universe::Downloader2::addListener(this,(function *)&local_80);
  if (&local_80 == local_60) {
    pcVar5 = (code *)(*local_60)[4];
LAB_009e6730:
    (*pcVar5)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar5 = (code *)(*local_60)[5];
    goto LAB_009e6730;
  }
  universe::Downloader2::addScriptListener(this,iVar2,local_84);
  lua_pushinteger(param_1,(long)iVar2);
  uVar4 = 1;
LAB_009e6754:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

