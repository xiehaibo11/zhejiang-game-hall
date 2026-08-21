
undefined8 FUN_00916948(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  long local_498;
  undefined8 local_490;
  byte local_484 [4];
  undefined1 auStack_480 [1048];
  long local_68;
  byte *pbVar9;
  
                    /* catch() { ... } // from try @ 009168c8 with catch @ 00916960 */
                    /* catch() { ... } // from try @ 009168e0 with catch @ 00916964 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_498 = 0;
  pbVar4 = (byte *)luaL_optlstring(param_1,1,0,&local_498);
  lVar7 = local_498;
  if (pbVar4 == (byte *)0x0) {
LAB_00916b6c:
    lua_pushnil(param_1);
  }
  else {
                    /* catch() { ... } // from try @ 00916894 with catch @ 00916994 */
    lua_settop(param_1,2);
    luaL_buffinit(param_1,auStack_480);
    lVar5 = 0;
    if (0 < lVar7) {
      lVar6 = lVar5;
      pbVar9 = pbVar4;
      do {
        pbVar8 = pbVar9 + 1;
        lVar5 = lVar6;
        if ((byte)(&DAT_01782095)[*pbVar9] < 0x41) {
          lVar5 = lVar6 + 1;
          local_484[lVar6] = *pbVar9;
          if (lVar5 == 4) {
            uVar2 = (uint)(byte)(&DAT_01782095)[local_484[1]] |
                    (uint)(byte)(&DAT_01782095)[local_484[0]] << 6;
            uVar1 = 2;
            if (local_484[3] != 0x3d) {
              uVar1 = 3;
            }
            if (local_484[2] == 0x3d) {
              uVar1 = 1;
            }
            local_490._0_2_ =
                 CONCAT11((char)(((uint)(byte)(&DAT_01782095)[local_484[2]] | uVar2 << 6) >> 2),
                          (char)(uVar2 >> 4));
            local_490 = CONCAT62(CONCAT51(local_490._3_5_,
                                          (&DAT_01782095)[local_484[3]] |
                                          (&DAT_01782095)[local_484[2]] << 6),(undefined2)local_490)
            ;
            luaL_addlstring(auStack_480,&local_490,uVar1);
            lVar5 = 0;
          }
        }
        lVar6 = lVar5;
        pbVar9 = pbVar8;
      } while (pbVar8 < pbVar4 + lVar7);
    }
    pbVar4 = (byte *)luaL_optlstring(param_1,2,0,&local_498);
    if (pbVar4 != (byte *)0x0) {
      if (0 < local_498) {
        pbVar9 = pbVar4 + local_498;
        lVar7 = lVar5;
        do {
          pbVar8 = pbVar4 + 1;
          lVar5 = lVar7;
          if ((byte)(&DAT_01782095)[*pbVar4] < 0x41) {
            lVar5 = lVar7 + 1;
            local_484[lVar7] = *pbVar4;
            if (lVar5 == 4) {
              uVar2 = (uint)(byte)(&DAT_01782095)[local_484[1]] |
                      (uint)(byte)(&DAT_01782095)[local_484[0]] << 6;
              uVar1 = 2;
              if (local_484[3] != 0x3d) {
                uVar1 = 3;
              }
              if (local_484[2] == 0x3d) {
                uVar1 = 1;
              }
              local_490._0_2_ =
                   CONCAT11((char)(((uint)(byte)(&DAT_01782095)[local_484[2]] | uVar2 << 6) >> 2),
                            (char)(uVar2 >> 4));
              local_490 = CONCAT62(CONCAT51(local_490._3_5_,
                                            (&DAT_01782095)[local_484[3]] |
                                            (&DAT_01782095)[local_484[2]] << 6),
                                   (undefined2)local_490);
              luaL_addlstring(auStack_480,&local_490,uVar1);
              lVar5 = 0;
            }
          }
          lVar7 = lVar5;
          pbVar4 = pbVar8;
        } while (pbVar8 < pbVar9);
      }
      luaL_pushresult(auStack_480);
      lua_pushlstring(param_1,local_484,lVar5);
      goto LAB_00916b7c;
    }
    local_490 = 0;
    luaL_pushresult(auStack_480);
    lua_tolstring(param_1,0xffffffff,&local_490);
    if (local_490 == 0) goto LAB_00916b6c;
  }
  lua_pushnil(param_1);
LAB_00916b7c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

