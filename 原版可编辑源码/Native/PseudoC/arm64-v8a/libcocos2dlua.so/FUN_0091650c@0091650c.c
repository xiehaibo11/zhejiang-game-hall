
undefined8 FUN_0091650c(undefined8 param_1)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  byte bVar12;
  long local_498;
  byte abStack_48c [4];
  byte *apbStack_488 [131];
  long local_70 [2];
  undefined1 *puVar11;
  
                    /* catch() { ... } // from try @ 0091641c with catch @ 0091651c */
  lVar2 = tpidr_el0;
  local_70[0] = *(long *)(lVar2 + 0x28);
  local_498 = 0;
  puVar4 = (undefined1 *)luaL_optlstring(param_1,1,0,&local_498);
  lVar3 = local_498;
  uVar5 = luaL_optlstring(param_1,3,&DAT_012c58fe,0);
  if (puVar4 == (undefined1 *)0x0) {
LAB_0091674c:
    lua_pushnil(param_1);
  }
  else {
    lua_settop(param_1,3);
    luaL_buffinit(param_1,apbStack_488);
    if (lVar3 < 1) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      puVar11 = puVar4;
      do {
        puVar10 = puVar11 + 1;
        lVar8 = FUN_00916eac(*puVar11,abStack_48c,lVar8,uVar5,apbStack_488);
        puVar11 = puVar10;
      } while (puVar10 < puVar4 + lVar3);
    }
    puVar4 = (undefined1 *)luaL_optlstring(param_1,2,0,&local_498);
    if (puVar4 != (undefined1 *)0x0) {
      if (0 < local_498) {
        puVar11 = puVar4 + local_498;
        do {
          puVar10 = puVar4 + 1;
          lVar8 = FUN_00916eac(*puVar4,abStack_48c,lVar8,uVar5,apbStack_488);
          puVar4 = puVar10;
        } while (puVar10 < puVar11);
      }
      luaL_pushresult(apbStack_488);
      lua_pushlstring(param_1,abStack_48c,lVar8);
      goto LAB_0091675c;
    }
    if (lVar8 != 0) {
      pbVar9 = abStack_48c;
      pbVar1 = (byte *)local_70;
      do {
        bVar12 = *pbVar9;
        if ((&DAT_01781e95)[bVar12] == '\0') {
          pbVar7 = apbStack_488[0];
          if (pbVar1 <= apbStack_488[0]) {
            luaL_prepbuffer(apbStack_488);
            bVar12 = *pbVar9;
            pbVar7 = apbStack_488[0];
          }
          apbStack_488[0] = pbVar7 + 1;
          *pbVar7 = bVar12;
        }
        else {
          pbVar7 = apbStack_488[0];
          if (pbVar1 <= apbStack_488[0]) {
            luaL_prepbuffer(apbStack_488);
            pbVar7 = apbStack_488[0];
          }
          apbStack_488[0] = pbVar7 + 1;
          *pbVar7 = 0x3d;
          if (pbVar1 <= apbStack_488[0]) {
            luaL_prepbuffer(apbStack_488);
          }
          pbVar7 = apbStack_488[0] + 1;
          *apbStack_488[0] = "0123456789ABCDEF"[bVar12 >> 4];
          if (pbVar1 <= pbVar7) {
            apbStack_488[0] = pbVar7;
            luaL_prepbuffer(apbStack_488);
            pbVar7 = apbStack_488[0];
          }
          apbStack_488[0] = pbVar7 + 1;
          *pbVar7 = "0123456789ABCDEF"[(ulong)bVar12 & 0xf];
        }
        lVar8 = lVar8 + -1;
        pbVar9 = pbVar9 + 1;
      } while (lVar8 != 0);
      luaL_addstring(apbStack_488,&DAT_012c5901);
    }
    luaL_pushresult(apbStack_488);
    pcVar6 = (char *)lua_tolstring(param_1,0xffffffff,0);
    if (*pcVar6 == '\0') goto LAB_0091674c;
  }
  lua_pushnil(param_1);
LAB_0091675c:
  if (*(long *)(lVar2 + 0x28) != local_70[0]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 2;
}

