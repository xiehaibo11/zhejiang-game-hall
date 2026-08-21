
undefined8 FUN_00916794(undefined8 param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  long local_490;
  long *local_488 [131];
  long local_70 [2];
  
                    /* try { // try from 009167ac to 00a16893 has its CatchHandler @ 009167ac
                       catch() { ... } // from try @ 009167ac with catch @ 009167ac
                       catch() { ... } // from try @ 00916914 with catch @ 009167ac */
  lVar3 = tpidr_el0;
  local_70[0] = *(long *)(lVar3 + 0x28);
  local_490 = 0;
  dVar8 = (double)luaL_checknumber(param_1,1);
  iVar7 = (int)dVar8;
  pcVar5 = (char *)luaL_optlstring(param_1,2,0,&local_490);
  lVar4 = local_490;
  dVar8 = (double)luaL_optnumber(0x4053000000000000,param_1,3);
  iVar6 = (int)dVar8;
  if (pcVar5 == (char *)0x0) {
                    /* try { // try from 009168e0 to 00a16913 has its CatchHandler @ 00916964 */
    if (iVar7 < iVar6) {
      lua_pushstring(param_1,&DAT_012c5901);
    }
    else {
      lua_pushnil(param_1);
    }
  }
  else {
    luaL_buffinit(param_1,local_488);
    if (0 < lVar4) {
      pcVar1 = pcVar5 + lVar4;
      do {
        cVar2 = *pcVar5;
        if (cVar2 == '=') {
                    /* try { // try from 00916894 to 00a168c7 has its CatchHandler @ 00916994 */
          if (iVar7 < 4) {
LAB_00916898:
            luaL_addstring(local_488,&DAT_012c5901);
            iVar7 = iVar6;
          }
LAB_009168a8:
          if (local_70 <= local_488[0]) {
            luaL_prepbuffer(local_488);
          }
          iVar7 = iVar7 + -1;
          *(char *)local_488[0] = *pcVar5;
          local_488[0] = (long *)((long)local_488[0] + 1);
        }
        else if (cVar2 != '\r') {
          if (cVar2 != '\n') {
                    /* try { // try from 009168c8 to 00a168db has its CatchHandler @ 00916960 */
            if (iVar7 < 2) goto LAB_00916898;
            goto LAB_009168a8;
          }
          luaL_addstring(local_488,&DAT_012c58fe);
          iVar7 = iVar6;
        }
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 < pcVar1);
    }
    luaL_pushresult(local_488);
    iVar6 = iVar7;
  }
  lua_pushnumber((double)iVar6,param_1);
                    /* try { // try from 00916914 to 00a169af has its CatchHandler @ 009167ac */
  if (*(long *)(lVar3 + 0x28) != local_70[0]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 2;
}

