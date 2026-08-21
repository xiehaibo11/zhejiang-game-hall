
undefined8 FUN_00915f24(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  char *pcVar6;
  ulong uVar8;
  double dVar9;
  long local_488;
  long *local_480 [131];
  long local_68;
  char *pcVar7;
  
                    /* try { // try from 00915f24 to 00a15f57 has its CatchHandler @ 00915fa8 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00915f58 to 00a15ff3 has its CatchHandler @ 00915a48 */
  local_488 = 0;
  dVar9 = (double)luaL_checknumber(param_1,1);
  pcVar4 = (char *)luaL_optlstring(param_1,2,0,&local_488);
  lVar3 = local_488;
  if (pcVar4 == (char *)0x0) {
    lua_pushnil(param_1);
    dVar9 = 2.0;
  }
  else {
    uVar8 = (ulong)dVar9;
    luaL_buffinit(param_1,local_480);
    if (0 < lVar3) {
                    /* catch() { ... } // from try @ 00915f0c with catch @ 00915fa4 */
                    /* catch() { ... } // from try @ 00915f24 with catch @ 00915fa8 */
      pcVar7 = pcVar4;
      do {
        while( true ) {
          pcVar6 = pcVar7 + 1;
          cVar1 = *pcVar7;
          plVar5 = local_480[0];
                    /* catch() { ... } // from try @ 00915ed8 with catch @ 00915fd8 */
          if (&local_68 <= local_480[0]) {
            luaL_prepbuffer(local_480);
            plVar5 = local_480[0];
          }
          local_480[0] = (long *)((long)plVar5 + 1);
                    /* try { // try from 00915ff4 to 00a16077 has its CatchHandler @ 00915ff4
                       catch() { ... } // from try @ 00915ff4 with catch @ 00915ff4
                       catch() { ... } // from try @ 009160f8 with catch @ 00915ff4 */
          *(char *)plVar5 = cVar1;
          pcVar7 = pcVar6;
          if (cVar1 != '.') break;
          if (uVar8 == 2) {
            if (&local_68 <= local_480[0]) {
              luaL_prepbuffer(local_480);
            }
            *(char *)local_480[0] = '.';
            local_480[0] = (long *)((long)local_480[0] + 1);
          }
LAB_00915fc0:
          uVar8 = 0;
joined_r0x0091602c:
          if (pcVar4 + lVar3 <= pcVar6) goto LAB_00916058;
        }
        if (cVar1 == '\r') {
          uVar8 = 1;
          goto joined_r0x0091602c;
        }
        if (cVar1 != '\n') goto LAB_00915fc0;
        uVar8 = (ulong)(uVar8 == 1) << 1;
      } while (pcVar6 < pcVar4 + lVar3);
    }
LAB_00916058:
    luaL_pushresult(local_480);
    dVar9 = (double)uVar8;
  }
                    /* try { // try from 00916078 to 00a160ab has its CatchHandler @ 00916178 */
  lua_pushnumber(dVar9,param_1);
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 009160ac to 00a160bf has its CatchHandler @ 00916144 */
    return 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

