
undefined8 FUN_0090d7dc(undefined8 param_1)

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
  lVar3 = luaL_checkudata(param_1,1,"cc.Downloader");
  if (lVar3 == 0) {
    luaL_argerror(param_1,1,"`Downloader\' expected");
  }
  iVar2 = lua_gettop(param_1);
  if (iVar2 != 2) goto LAB_0090d93c;
  iVar2 = lua_type(param_1,2);
  if (iVar2 != 6) {
                    /* try { // try from 0090d850 to 00a0d867 has its CatchHandler @ 0090d8f4 */
    luaL_argerror(param_1,2,"should be a function");
  }
                    /* try { // try from 0090d868 to 00a0d89b has its CatchHandler @ 0090d780 */
  lua_pushlightuserdata(param_1,lVar3);
  lua_gettable(param_1,0xffffd8f0);
  lua_pushstring(param_1,"setOnTaskError");
  lua_pushvalue(param_1,0xfffffffd);
                    /* try { // try from 0090d89c to 00a0d8af has its CatchHandler @ 0090d8f8 */
  lua_settable(param_1,0xfffffffd);
  lua_settop(param_1,0xfffffffd);
                    /* try { // try from 0090d8b0 to 00a0d913 has its CatchHandler @ 0090d780 */
  local_a0 = &PTR_FUN_0169c180;
  local_70 = &PTR_FUN_0169c180;
  local_98 = lVar3;
  uStack_90 = param_1;
  local_80 = (long *)&local_a0;
  local_68 = lVar3;
  uStack_60 = param_1;
  local_50 = &local_70;
  FUN_0090e07c(&local_70,lVar3 + 0x90);
  if (&local_70 == local_50) {
    pcVar4 = (code *)(*local_50)[4];
LAB_0090d90c:
    (*pcVar4)();
  }
  else {
                    /* catch() { ... } // from try @ 0090d850 with catch @ 0090d8f4 */
    if (local_50 != (undefined ***)0x0) {
                    /* catch() { ... } // from try @ 0090d7d4 with catch @ 0090d8f8
                       catch() { ... } // from try @ 0090d89c with catch @ 0090d8f8 */
      pcVar4 = (code *)(*local_50)[5];
      goto LAB_0090d90c;
    }
  }
                    /* try { // try from 0090d914 to 00a0d967 has its CatchHandler @ 0090d914
                       catch() { ... } // from try @ 0090d914 with catch @ 0090d914
                       catch() { ... } // from try @ 0090d9fc with catch @ 0090d914
                       catch() { ... } // from try @ 0090da44 with catch @ 0090d914 */
  if (&local_a0 == (undefined ***)local_80) {
    pcVar4 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_0090d93c;
    pcVar4 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar4)();
LAB_0090d93c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

