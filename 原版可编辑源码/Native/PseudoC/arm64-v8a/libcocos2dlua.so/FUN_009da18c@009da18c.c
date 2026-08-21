
void FUN_009da18c(undefined8 param_1)

{
  long lVar1;
  undefined **ppuVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 auStack_b8 [128];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcVar4 = (char *)luaL_checklstring(param_1,1,0);
  iVar3 = stat(pcVar4,(stat *)auStack_b8);
  if (iVar3 == 0) {
    iVar3 = lua_isstring(param_1,2);
    if (iVar3 == 0) {
      lua_settop(param_1,2);
      iVar3 = lua_type(param_1,2);
      if (iVar3 != 5) {
        lua_createtable(param_1,0,0);
      }
      ppuVar2 = &un_members;
      puVar8 = un_members;
      while (puVar8 != (undefined *)0x0) {
        lua_pushstring(param_1);
        (*(code *)ppuVar2[1])(param_1,auStack_b8);
        lua_rawset(param_1,0xfffffffd);
        puVar8 = ppuVar2[2];
        ppuVar2 = ppuVar2 + 2;
      }
LAB_009da2f8:
      uVar7 = 1;
    }
    else {
      pcVar6 = (char *)lua_tolstring(param_1,2,0);
      ppuVar2 = &un_members;
      pcVar4 = un_members;
      while (pcVar4 != (char *)0x0) {
        iVar3 = strcmp(pcVar4,pcVar6);
        if (iVar3 == 0) {
          (*(code *)ppuVar2[1])(param_1,auStack_b8);
          goto LAB_009da2f8;
        }
        pcVar4 = ppuVar2[2];
        ppuVar2 = ppuVar2 + 2;
      }
                    /* try { // try from 009da270 to 00ada303 has its CatchHandler @ 009da270
                       catch() { ... } // from try @ 009da270 with catch @ 009da270
                       catch() { ... } // from try @ 009da30c with catch @ 009da270 */
      uVar7 = luaL_error(param_1,&DAT_012f251b,pcVar6);
    }
  }
  else {
    lua_pushnil(param_1);
    piVar5 = (int *)__errno();
    pcVar6 = strerror(*piVar5);
    lua_pushfstring(param_1,"cannot obtain information from file \'%s\': %s",pcVar4,pcVar6);
    lua_pushinteger(param_1,(long)*piVar5);
    uVar7 = 3;
  }
                    /* try { // try from 009da304 to 00ada30b has its CatchHandler @ 009da348 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009da30c to 00ada363 has its CatchHandler @ 009da270 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

