
/* WARNING: Removing unreachable block (ram,0x009d1870) */

int buffer_meth_receive(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  char cVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  double dVar16;
  ulong local_4a8;
  ulong local_4a0;
  long *local_498 [131];
  long local_80 [2];
  
  lVar2 = tpidr_el0;
  local_80[0] = *(long *)(lVar2 + 0x28);
  iVar3 = lua_gettop();
  uVar5 = luaL_optlstring(param_1,3,&DAT_013c996e,&local_4a8);
  luaL_buffinit(param_1,local_498);
                    /* try { // try from 009d1804 to 00ad186f has its CatchHandler @ 009d8148 */
  luaL_addlstring(local_498,uVar5,local_4a8);
  iVar4 = lua_isnumber(param_1,2);
  if (iVar4 == 0) {
    pcVar6 = (char *)luaL_optlstring(param_1,2,&DAT_012f0aab,0);
    if (*pcVar6 != '*') {
LAB_009d1970:
      luaL_argerror(param_1,2,"invalid receive pattern");
      goto LAB_009d1984;
    }
    if (pcVar6[1] != 'a') {
      if (pcVar6[1] == 'l') {
        puVar11 = (ulong *)(param_2 + 0x28);
        uVar13 = *puVar11;
        uVar15 = *(ulong *)(param_2 + 0x30);
        if (uVar15 <= uVar13) goto LAB_009d19bc;
        do {
          iVar4 = 0;
          uVar8 = uVar15 - uVar13;
          while( true ) {
            if (uVar8 != 0) {
              uVar15 = 0;
              lVar14 = param_2 + 0x38 + uVar13;
              do {
                cVar7 = *(char *)(lVar14 + uVar15);
                if (cVar7 != '\r') {
                  if (cVar7 == '\n') {
                    uVar13 = *(long *)(param_2 + 0x28) + uVar15 + 1;
                    *(ulong *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + uVar15 + 1;
                    *(ulong *)(param_2 + 0x28) = uVar13;
                    if (*(ulong *)(param_2 + 0x30) <= uVar13) {
                      *puVar11 = 0;
                      *(undefined8 *)(param_2 + 0x30) = 0;
                    }
                    goto LAB_009d1b5c;
                  }
                  if (local_80 <= local_498[0]) {
                    luaL_prepbuffer(local_498);
                    cVar7 = *(char *)(lVar14 + uVar15);
                  }
                  *(char *)local_498[0] = cVar7;
                  local_498[0] = (long *)((long)local_498[0] + 1);
                }
                uVar15 = uVar15 + 1;
              } while (uVar8 != uVar15);
              uVar13 = *(ulong *)(param_2 + 0x28);
              uVar15 = *(ulong *)(param_2 + 0x30);
            }
            uVar13 = uVar13 + uVar8;
            *(ulong *)(param_2 + 0x28) = uVar13;
            *(ulong *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + uVar8;
            if (uVar15 <= uVar13) {
              uVar15 = 0;
              uVar13 = 0;
              *puVar11 = 0;
              *(undefined8 *)(param_2 + 0x30) = 0;
            }
            if (iVar4 != 0) goto LAB_009d1b24;
            if (uVar13 < uVar15) break;
LAB_009d19bc:
            iVar4 = (*(code *)(*(undefined8 **)(param_2 + 0x18))[2])
                              (**(undefined8 **)(param_2 + 0x18),param_2 + 0x38,0x2000,&local_4a0,
                               *(undefined8 *)(param_2 + 0x20));
            uVar13 = 0;
            *(undefined8 *)(param_2 + 0x28) = 0;
            *(ulong *)(param_2 + 0x30) = local_4a0;
            uVar15 = 0;
            uVar8 = local_4a0;
          }
        } while( true );
      }
      goto LAB_009d1970;
    }
    iVar4 = 0;
    lVar14 = 0;
    while (iVar4 == 0) {
      while( true ) {
        uVar13 = *(ulong *)(param_2 + 0x28);
        if (uVar13 < *(ulong *)(param_2 + 0x30)) {
          iVar4 = 0;
          uVar15 = *(ulong *)(param_2 + 0x30);
        }
        else {
          iVar4 = (*(code *)(*(undefined8 **)(param_2 + 0x18))[2])
                            (**(undefined8 **)(param_2 + 0x18),param_2 + 0x38,0x2000,&local_4a0,
                             *(undefined8 *)(param_2 + 0x20));
          uVar13 = 0;
          *(undefined8 *)(param_2 + 0x28) = 0;
          *(ulong *)(param_2 + 0x30) = local_4a0;
          uVar15 = local_4a0;
        }
        lVar12 = uVar15 - uVar13;
        lVar14 = lVar12 + lVar14;
        luaL_addlstring(local_498,param_2 + uVar13 + 0x38,lVar12);
        uVar13 = *(long *)(param_2 + 0x28) + lVar12;
                    /* try { // try from 009d1afc to 00ad1b67 has its CatchHandler @ 009d8140 */
        *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + lVar12;
        *(ulong *)(param_2 + 0x28) = uVar13;
        if (uVar13 < *(ulong *)(param_2 + 0x30)) break;
        *(undefined8 *)(param_2 + 0x28) = 0;
        *(undefined8 *)(param_2 + 0x30) = 0;
        if (iVar4 != 0) goto LAB_009d1b14;
      }
    }
LAB_009d1b14:
    if (iVar4 == -2) {
      if (lVar14 == 0) {
        iVar4 = -2;
        goto LAB_009d1b24;
      }
      goto LAB_009d1984;
    }
LAB_009d1b5c:
    luaL_pushresult(local_498);
    if (iVar4 != 0) goto LAB_009d1b68;
  }
  else {
    dVar16 = (double)lua_tonumber(param_1,2);
    if (dVar16 < 0.0) {
      luaL_argerror(param_1,2,"invalid receive pattern");
    }
    if ((local_4a8 == 0) || (local_4a8 < (ulong)(long)dVar16)) {
      uVar13 = 0;
      uVar15 = (long)dVar16 - local_4a8;
      do {
        uVar8 = *(ulong *)(param_2 + 0x28);
        if (uVar8 < *(ulong *)(param_2 + 0x30)) {
          iVar4 = 0;
          uVar9 = *(ulong *)(param_2 + 0x30);
        }
        else {
          iVar4 = (*(code *)(*(undefined8 **)(param_2 + 0x18))[2])
                            (**(undefined8 **)(param_2 + 0x18),param_2 + 0x38,0x2000,&local_4a0,
                             *(undefined8 *)(param_2 + 0x20));
          uVar8 = 0;
          *(undefined8 *)(param_2 + 0x28) = 0;
          *(ulong *)(param_2 + 0x30) = local_4a0;
          uVar9 = local_4a0;
        }
        uVar10 = uVar15 - uVar13;
        uVar1 = uVar9 - uVar8;
        if (uVar10 <= uVar9 - uVar8) {
          uVar1 = uVar10;
        }
        luaL_addlstring(local_498,param_2 + uVar8 + 0x38,uVar1);
                    /* try { // try from 009d18e8 to 00ad18fb has its CatchHandler @ 009d803c */
        uVar8 = *(long *)(param_2 + 0x28) + uVar1;
        *(ulong *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + uVar1;
                    /* try { // try from 009d1900 to 00ad196b has its CatchHandler @ 009d8144 */
        *(ulong *)(param_2 + 0x28) = uVar8;
        if (*(ulong *)(param_2 + 0x30) <= uVar8) {
          *(undefined8 *)(param_2 + 0x28) = 0;
          *(undefined8 *)(param_2 + 0x30) = 0;
        }
        uVar13 = uVar1 + uVar13;
        if (uVar15 <= uVar13) goto LAB_009d1b5c;
      } while (iVar4 == 0);
LAB_009d1b24:
      luaL_pushresult(local_498);
LAB_009d1b68:
      uVar5 = (*(code *)(*(undefined8 **)(param_2 + 0x18))[3])
                        (**(undefined8 **)(param_2 + 0x18),iVar4);
      lua_pushstring(param_1,uVar5);
      lua_pushvalue(param_1,0xfffffffe);
      lua_pushnil(param_1);
      lua_replace(param_1,0xfffffffc);
      goto LAB_009d1ba8;
    }
LAB_009d1984:
    luaL_pushresult(local_498);
  }
  lua_pushnil(param_1);
  lua_pushnil(param_1);
LAB_009d1ba8:
  iVar4 = lua_gettop(param_1);
  if (*(long *)(lVar2 + 0x28) != local_80[0]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4 - iVar3;
}

