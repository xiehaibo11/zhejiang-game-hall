
undefined8 FUN_009d8910(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  int local_a4;
  char *local_a0;
  ulong uStack_98;
  ulong uStack_90;
  char *local_88;
  char *pcStack_80;
  uint local_74;
  undefined **local_70;
  lua_State *plStack_68;
  ulong local_60;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (2 < iVar2 - 3U) {
    luaL_error(param_1,"lua_universe_Device_showMessageBox: expected 3 or 4 or 5 argument");
    goto LAB_009d8a24;
  }
  uVar3 = universe::create_once_function
                    (param_1,1,(int *)&local_74,"lua_universe_Device_showMessageBox");
  if ((uVar3 & 1) == 0) goto LAB_009d8a24;
                    /* try { // try from 009d8974 to 00ad897b has its CatchHandler @ 009d8a60 */
                    /* try { // try from 009d897c to 00ad8993 has its CatchHandler @ 009d8a50 */
  uVar3 = universe::get_cstr(param_1,2,&pcStack_80,&uStack_90,"lua_universe_Device_showMessageBox");
                    /* try { // try from 009d8994 to 00ad8acf has its CatchHandler @ 009d8834 */
  if (((uVar3 & 1) == 0) ||
     (uVar3 = universe::get_cstr(param_1,3,&local_88,&uStack_98,"lua_universe_Device_showMessageBox"
                                ), (uVar3 & 1) == 0)) {
LAB_009d8a18:
    universe::remove_once_function(param_1,local_74);
  }
  else {
    local_a0 = (char *)0x0;
    local_a4 = 0;
    iVar4 = 0;
    if (3 < iVar2) {
      uVar3 = universe::get_cstr(param_1,4,&local_a0,(ulong *)&local_70,
                                 "lua_universe_Device_showMessageBox");
      if ((uVar3 & 1) == 0) goto LAB_009d8a18;
      if (iVar2 < 5) {
        iVar4 = 0;
      }
      else {
        uVar3 = universe::get_int(param_1,5,&local_a4,"lua_universe_Device_showMessageBox");
        iVar4 = local_a4;
        if ((uVar3 & 1) == 0) goto LAB_009d8a18;
      }
    }
                    /* catch() { ... } // from try @ 009d897c with catch @ 009d8a50 */
    local_60 = (ulong)local_74;
                    /* catch() { ... } // from try @ 009d8974 with catch @ 009d8a60 */
    local_70 = &PTR_FUN_0169fcd0;
    plStack_68 = param_1;
    local_50 = &local_70;
    universe::Device::showMessageBox((function *)&local_70,pcStack_80,local_88,local_a0,iVar4);
    if (&local_70 == local_50) {
      (*(code *)(*local_50)[4])();
    }
    else if (local_50 != (undefined ***)0x0) {
      (*(code *)(*local_50)[5])();
                    /* catch() { ... } // from try @ 009d88d4 with catch @ 009d8a98 */
    }
  }
LAB_009d8a24:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

