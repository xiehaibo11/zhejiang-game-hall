
undefined8 FUN_0091636c(undefined8 param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  byte *pbVar8;
  uint uVar10;
  double dVar11;
  long local_488;
  byte *local_480 [131];
  long local_68;
  byte *pbVar9;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar5 = luaL_checkinteger(param_1,1);
  local_488 = 0;
  pbVar6 = (byte *)luaL_optlstring(param_1,2,0,&local_488);
  lVar4 = local_488;
  uVar7 = luaL_optlstring(param_1,3,&DAT_012c58fe,0);
  luaL_buffinit(param_1,local_480);
  if (pbVar6 == (byte *)0x0) {
    lua_pushnil(param_1);
    dVar11 = 0.0;
  }
  else {
    if (0 < lVar4) {
      pbVar9 = pbVar6;
      uVar10 = uVar5;
      do {
        while( true ) {
          pbVar8 = pbVar9 + 1;
          bVar2 = *pbVar9;
          uVar5 = (uint)bVar2;
          pbVar9 = pbVar8;
          if ((uVar5 == 0xd) || (uVar5 == 10)) break;
          if (&local_68 <= local_480[0]) {
            luaL_prepbuffer(local_480);
          }
          uVar10 = 0;
          uVar5 = 0;
          pbVar1 = local_480[0] + 1;
          *local_480[0] = bVar2;
                    /* try { // try from 0091641c to 00a1644f has its CatchHandler @ 0091651c */
          local_480[0] = pbVar1;
          if (pbVar6 + lVar4 <= pbVar8) goto LAB_009164b0;
        }
        if ((uVar10 == 0xd) || (uVar10 == 10)) {
          if (uVar10 == uVar5) {
                    /* try { // try from 00916450 to 00a16463 has its CatchHandler @ 009164e8 */
            luaL_addstring(local_480,uVar7);
            uVar10 = 0;
            uVar5 = 0;
          }
          else {
            uVar10 = 0;
            uVar5 = 0;
          }
        }
        else {
                    /* try { // try from 0091649c to 00a16537 has its CatchHandler @ 00916368 */
          luaL_addstring(local_480,uVar7);
          uVar10 = (uint)bVar2;
          uVar5 = (uint)bVar2;
        }
      } while (pbVar8 < pbVar6 + lVar4);
    }
LAB_009164b0:
    luaL_pushresult(local_480);
    dVar11 = (double)(int)uVar5;
  }
  lua_pushnumber(dVar11,param_1);
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 00916450 with catch @ 009164e8 */
                    /* catch() { ... } // from try @ 00916468 with catch @ 009164ec */
    return 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

