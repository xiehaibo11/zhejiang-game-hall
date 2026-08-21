
undefined8 FUN_00a01914(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  uint local_74;
  undefined **local_70;
  lua_State *plStack_68;
  ulong local_60;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a01934 to 00b0197f has its CatchHandler @ 00a01934
                       catch() { ... } // from try @ 00a01934 with catch @ 00a01934
                       catch() { ... } // from try @ 00a01984 with catch @ 00a01934 */
  iVar2 = lua_gettop();
  if (iVar2 != 1) {
    luaL_argerror(param_1,1,&DAT_012f5f16);
  }
  uVar3 = universe::create_function
                    (param_1,1,(int *)&local_74,DAT_01782358,"lua_universe_NetStat_setCallback");
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 00a01980 to 00b01983 has its CatchHandler @ 00a019b8 */
    local_60 = (ulong)local_74;
                    /* try { // try from 00a01984 to 00b019cb has its CatchHandler @ 00a01934 */
    local_70 = &PTR_FUN_016a17d0;
    plStack_68 = param_1;
    local_50 = &local_70;
    universe::HeBaiChuan::setCallback((HeBaiChuan *)DAT_01782358,(function *)&local_70);
    if (&local_70 == local_50) {
      pcVar4 = (code *)(*local_50)[4];
    }
    else {
      if (local_50 == (undefined ***)0x0) goto LAB_00a019cc;
                    /* catch() { ... } // from try @ 00a01980 with catch @ 00a019b8 */
      pcVar4 = (code *)(*local_50)[5];
    }
    (*pcVar4)();
  }
LAB_00a019cc:
                    /* try { // try from 00a019cc to 00b01beb has its CatchHandler @ 00a019cc
                       catch() { ... } // from try @ 00a019cc with catch @ 00a019cc
                       catch() { ... } // from try @ 00a01c6c with catch @ 00a019cc */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

