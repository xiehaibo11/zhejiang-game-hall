
undefined8 FUN_00916d14(undefined8 param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  long local_488;
  long *local_480 [131];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_488 = 0;
  dVar7 = (double)luaL_checknumber(param_1,1);
  iVar6 = (int)dVar7;
  pcVar4 = (char *)luaL_optlstring(param_1,2,0,&local_488);
  lVar3 = local_488;
  dVar7 = (double)luaL_optnumber(0x4053000000000000,param_1,3);
  iVar5 = (int)dVar7;
  if (pcVar4 == (char *)0x0) {
    if (iVar6 < iVar5) {
      lua_pushstring(param_1,&DAT_012c58fe);
    }
    else {
      lua_pushnil(param_1);
    }
  }
  else {
    luaL_buffinit(param_1,local_480);
    if (0 < lVar3) {
      pcVar1 = pcVar4 + lVar3;
      do {
        if (*pcVar4 != '\r') {
          if (*pcVar4 == '\n') {
            luaL_addstring(local_480,&DAT_012c58fe);
            iVar6 = iVar5;
          }
          else {
            if (iVar6 < 1) {
              luaL_addstring(local_480,&DAT_012c58fe);
              iVar6 = iVar5;
            }
            if (&local_68 <= local_480[0]) {
              luaL_prepbuffer(local_480);
            }
            iVar6 = iVar6 + -1;
            *(char *)local_480[0] = *pcVar4;
            local_480[0] = (long *)((long)local_480[0] + 1);
          }
        }
        pcVar4 = pcVar4 + 1;
      } while (pcVar4 < pcVar1);
    }
    luaL_pushresult(local_480);
    iVar5 = iVar6;
  }
  lua_pushnumber((double)iVar5,param_1);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

