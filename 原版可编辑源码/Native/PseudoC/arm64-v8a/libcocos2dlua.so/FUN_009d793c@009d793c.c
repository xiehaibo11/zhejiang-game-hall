
undefined8 FUN_009d793c(undefined8 param_1)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  char acStack_41 [9];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  dVar8 = (double)lua_tonumber(param_1,1);
  dVar8 = dVar8 + 6755399441055744.0;
  if ((SUB84(dVar8,0) == 0) && (iVar4 = lua_isnumber(param_1,1), iVar4 == 0)) {
    luaL_typerror(param_1,1,"number");
  }
  iVar4 = lua_type(param_1,2);
  if (iVar4 == -1) {
    uVar5 = 8;
  }
  else {
                    /* try { // try from 009d79b8 to 00ad79cb has its CatchHandler @ 009d7fc8 */
    dVar9 = (double)lua_tonumber(param_1,2);
    uVar5 = SUB84(dVar9 + 6755399441055744.0,0);
                    /* try { // try from 009d79d0 to 00ad7a3b has its CatchHandler @ 009d8068 */
    if (uVar5 == 0) {
      iVar4 = lua_isnumber(param_1,2);
      if (iVar4 == 0) {
        luaL_typerror(param_1,2,"number");
      }
      uVar5 = 0;
    }
  }
  pcVar1 = "0123456789ABCDEF";
  uVar3 = -uVar5;
  if (-1 < (int)uVar5) {
    pcVar1 = "0123456789abcdef";
    uVar3 = uVar5;
  }
  uVar5 = uVar3;
  if (7 < (int)uVar3) {
    uVar5 = 8;
  }
  if (0 < (int)uVar3) {
    uVar6 = (ulong)uVar5;
                    /* try { // try from 009d7a3c to 00ad7cdf has its CatchHandler @ 009cee70 */
    do {
      uVar7 = (ulong)dVar8 & 0xf;
      dVar8 = (double)((ulong)dVar8 >> 4 & 0xfffffff);
      acStack_41[uVar6] = pcVar1[uVar7];
      uVar6 = uVar6 - 1;
    } while (0 < (long)uVar6);
  }
  lua_pushlstring(param_1,acStack_41 + 1,uVar5);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

