
undefined8 FUN_009160b8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar8;
  long local_4a0;
  undefined4 local_494;
  undefined8 local_490;
  byte local_484 [4];
  undefined1 auStack_480 [1048];
  long local_68;
  byte *pbVar7;
  
                    /* try { // try from 009160c4 to 00a160f7 has its CatchHandler @ 00916148 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_4a0 = 0;
                    /* try { // try from 009160f8 to 00a16193 has its CatchHandler @ 00915ff4 */
  pbVar3 = (byte *)luaL_optlstring(param_1,1,0,&local_4a0);
  lVar8 = local_4a0;
  if (pbVar3 == (byte *)0x0) {
LAB_00916324:
    lua_pushnil(param_1);
  }
  else {
    lua_settop(param_1,2);
    luaL_buffinit(param_1,auStack_480);
    if (lVar8 < 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      pbVar7 = pbVar3;
      do {
        pbVar6 = pbVar7 + 1;
        lVar1 = lVar4 + 1;
        local_484[lVar4] = *pbVar7;
        lVar4 = lVar1;
        if (lVar1 == 3) {
                    /* catch() { ... } // from try @ 00916078 with catch @ 00916178 */
          local_490 = CONCAT71(CONCAT52(CONCAT41(local_490._4_4_,
                                                 "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                                 [(ulong)local_484[2] & 0x3f]),
                                        CONCAT11("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                                 [(ulong)(uint3)(CONCAT21(CONCAT11(local_484[0],
                                                                                   local_484[1]),
                                                                          local_484[2]) >> 6) & 0x3f
                                                 ],
                                                  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                                  [(ulong)(ushort)(CONCAT11(local_484[0],
                                                                            local_484[1]) >> 4) &
                                                   0x3f])),
                               "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                               [local_484[0] >> 2]);
          luaL_addlstring(auStack_480,&local_490,4);
          lVar4 = 0;
        }
        pbVar7 = pbVar6;
                    /* catch() { ... } // from try @ 009160ac with catch @ 00916144 */
                    /* catch() { ... } // from try @ 009160c4 with catch @ 00916148 */
      } while (pbVar6 < pbVar3 + lVar8);
    }
    pbVar3 = (byte *)luaL_optlstring(param_1,2,0,&local_4a0);
    if (pbVar3 != (byte *)0x0) {
      if (0 < local_4a0) {
        pbVar7 = pbVar3 + local_4a0;
        lVar8 = lVar4;
        do {
          pbVar6 = pbVar3 + 1;
          lVar4 = lVar8 + 1;
          local_484[lVar8] = *pbVar3;
          if (lVar4 == 3) {
                    /* try { // try from 00916218 to 00a16253 has its CatchHandler @ 00916218
                       catch() { ... } // from try @ 00916218 with catch @ 00916218
                       catch() { ... } // from try @ 009162a8 with catch @ 00916218
                       catch() { ... } // from try @ 009162f0 with catch @ 00916218 */
                    /* try { // try from 00916254 to 00a16277 has its CatchHandler @ 0091634c */
            local_490 = CONCAT71(CONCAT52(CONCAT41(local_490._4_4_,
                                                                                                      
                                                  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                                  [(ulong)local_484[2] & 0x3f]),
                                          CONCAT11(
                                                  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                                  [(ulong)(uint3)(CONCAT21(CONCAT11(local_484[0],
                                                                                    local_484[1]),
                                                                           local_484[2]) >> 6) &
                                                   0x3f],
                                                  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                                  [(ulong)(ushort)(CONCAT11(local_484[0],
                                                                            local_484[1]) >> 4) &
                                                   0x3f])),
                                 "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                 [local_484[0] >> 2]);
            luaL_addlstring(auStack_480,&local_490,4);
            lVar4 = 0;
          }
          pbVar3 = pbVar6;
          lVar8 = lVar4;
        } while (pbVar6 < pbVar7);
      }
                    /* try { // try from 009162a8 to 00a162db has its CatchHandler @ 00916218 */
      luaL_pushresult(auStack_480);
      lua_pushlstring(param_1,local_484,lVar4);
      goto LAB_00916334;
    }
                    /* try { // try from 0091627c to 00a16283 has its CatchHandler @ 00916334 */
    local_490 = 0;
    local_494 = 0x3d3d3d3d;
                    /* try { // try from 00916284 to 00a1628b has its CatchHandler @ 0091634c */
    if (lVar4 == 2) {
      uVar5 = (ulong)(ushort)(CONCAT11(local_484[0],local_484[1]) >> 4) & 0x3f;
                    /* try { // try from 009162dc to 00a162ef has its CatchHandler @ 0091634c */
      local_494 = (uint)CONCAT11(0x3d,"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                      [((ulong)local_484[1] & 0xf) * 4]) << 0x10;
LAB_009162e0:
                    /* try { // try from 009162f0 to 00a16367 has its CatchHandler @ 00916218 */
      local_494 = CONCAT31(CONCAT21(local_494._2_2_,
                                    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                    [uVar5]),
                           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                           [local_484[0] >> 2]);
      luaL_addlstring(auStack_480,&local_494,4);
    }
    else if (lVar4 == 1) {
                    /* try { // try from 00916294 to 00a162a7 has its CatchHandler @ 00916330 */
      uVar5 = ((ulong)local_484[0] & 3) << 4;
      goto LAB_009162e0;
    }
    luaL_pushresult(auStack_480);
    lua_tolstring(param_1,0xffffffff,&local_490);
    if (local_490 == 0) goto LAB_00916324;
  }
                    /* catch() { ... } // from try @ 00916294 with catch @ 00916330 */
  lua_pushnil(param_1);
LAB_00916334:
                    /* catch() { ... } // from try @ 0091627c with catch @ 00916334 */
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00916368 to 00a1641b has its CatchHandler @ 00916368
                       catch() { ... } // from try @ 00916368 with catch @ 00916368
                       catch() { ... } // from try @ 0091649c with catch @ 00916368 */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00916254 with catch @ 0091634c
                       catch() { ... } // from try @ 00916284 with catch @ 0091634c
                       catch() { ... } // from try @ 009162dc with catch @ 0091634c */
  return 2;
}

