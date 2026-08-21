
undefined8 FUN_0090d650(undefined8 param_1)

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
  if (iVar2 != 2) goto LAB_0090d7b0;
  iVar2 = lua_type(param_1,2);
                    /* try { // try from 0090d6bc to 00a0d6d3 has its CatchHandler @ 0090d760 */
  if (iVar2 != 6) {
                    /* try { // try from 0090d6d4 to 00a0d707 has its CatchHandler @ 0090d5ec */
    luaL_argerror(param_1,2,"should be a function");
  }
  lua_pushlightuserdata(param_1,lVar3);
  lua_gettable(param_1,0xffffd8f0);
  lua_pushstring(param_1,"setOnTaskProgress");
                    /* try { // try from 0090d708 to 00a0d71b has its CatchHandler @ 0090d764 */
  lua_pushvalue(param_1,0xfffffffd);
  lua_settable(param_1,0xfffffffd);
                    /* try { // try from 0090d71c to 00a0d77f has its CatchHandler @ 0090d5ec */
  lua_settop(param_1,0xfffffffd);
  local_a0 = &PTR_FUN_0169c0f0;
  local_70 = &PTR_FUN_0169c0f0;
  local_98 = lVar3;
  uStack_90 = param_1;
  local_80 = (long *)&local_a0;
  local_68 = lVar3;
  uStack_60 = param_1;
  local_50 = &local_70;
  FUN_0090dd8c(&local_70,lVar3 + 0x60);
                    /* catch() { ... } // from try @ 0090d6bc with catch @ 0090d760 */
                    /* catch() { ... } // from try @ 0090d640 with catch @ 0090d764
                       catch() { ... } // from try @ 0090d708 with catch @ 0090d764 */
  if (&local_70 == local_50) {
    pcVar4 = (code *)(*local_50)[4];
LAB_0090d780:
                    /* try { // try from 0090d780 to 00a0d7d3 has its CatchHandler @ 0090d780
                       catch() { ... } // from try @ 0090d780 with catch @ 0090d780
                       catch() { ... } // from try @ 0090d868 with catch @ 0090d780
                       catch() { ... } // from try @ 0090d8b0 with catch @ 0090d780 */
    (*pcVar4)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar4 = (code *)(*local_50)[5];
    goto LAB_0090d780;
  }
  if (&local_a0 == (undefined ***)local_80) {
    pcVar4 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_0090d7b0;
    pcVar4 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar4)();
LAB_0090d7b0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0090d7d4 to 00a0d847 has its CatchHandler @ 0090d8f8 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

