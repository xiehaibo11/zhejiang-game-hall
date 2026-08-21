
undefined8 FUN_0090d4b4(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined **local_a0;
  long local_98;
  undefined8 uStack_90;
  long *local_80;
  undefined **local_70;
  long local_68;
  undefined8 uStack_60;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  lVar3 = luaL_checkudata(param_1,1,"cc.Downloader");
  if (lVar3 == 0) {
    luaL_argerror(param_1,1,"`Downloader\' expected");
  }
  if (iVar2 != 2) goto LAB_0090d624;
  iVar2 = lua_type(param_1,2);
                    /* try { // try from 0090d530 to 00a0d543 has its CatchHandler @ 0090d5cc */
  if (iVar2 != 6) {
                    /* try { // try from 0090d544 to 00a0d577 has its CatchHandler @ 0090d488 */
    luaL_argerror(param_1,2,"should be a function");
  }
  lua_pushlightuserdata(param_1,lVar3);
  lua_gettable(param_1,0xffffd8f0);
  lua_pushstring(param_1,"setOnFileTaskSuccess");
                    /* try { // try from 0090d578 to 00a0d58b has its CatchHandler @ 0090d5d0 */
  lua_pushvalue(param_1,0xfffffffd);
  lua_settable(param_1,0xfffffffd);
                    /* try { // try from 0090d58c to 00a0d5eb has its CatchHandler @ 0090d488 */
  lua_settop(param_1,0xfffffffd);
  local_a0 = &PTR_FUN_0169c060;
  local_70 = &PTR_FUN_0169c060;
  local_98 = lVar3;
  uStack_90 = param_1;
  local_80 = (long *)&local_a0;
  local_68 = lVar3;
  uStack_60 = param_1;
  local_50 = &local_70;
                    /* catch() { ... } // from try @ 0090d530 with catch @ 0090d5cc */
  FUN_0090dad8(&local_70,lVar3 + 0x30);
                    /* catch() { ... } // from try @ 0090d4fc with catch @ 0090d5d0
                       catch() { ... } // from try @ 0090d578 with catch @ 0090d5d0 */
  if (&local_70 == local_50) {
                    /* try { // try from 0090d5ec to 00a0d63f has its CatchHandler @ 0090d5ec
                       catch() { ... } // from try @ 0090d5ec with catch @ 0090d5ec
                       catch() { ... } // from try @ 0090d6d4 with catch @ 0090d5ec
                       catch() { ... } // from try @ 0090d71c with catch @ 0090d5ec */
    pcVar4 = (code *)(*local_50)[4];
LAB_0090d5f4:
    (*pcVar4)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar4 = (code *)(*local_50)[5];
    goto LAB_0090d5f4;
  }
  if (&local_a0 == (undefined ***)local_80) {
    pcVar4 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_0090d624;
    pcVar4 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar4)();
LAB_0090d624:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0090d640 to 00a0d6b3 has its CatchHandler @ 0090d764 */
  return 0;
}

