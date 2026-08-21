
undefined8 FUN_00916bb4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long local_470;
  undefined1 auStack_464 [4];
  undefined1 auStack_460 [1048];
  long local_48;
  undefined1 *puVar7;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_470 = 0;
  puVar3 = (undefined1 *)luaL_optlstring(param_1,1,0,&local_470);
  lVar2 = local_470;
  if (puVar3 == (undefined1 *)0x0) {
LAB_00916cd4:
    lua_pushnil(param_1);
  }
  else {
    lua_settop(param_1,2);
    luaL_buffinit(param_1,auStack_460);
    if (lVar2 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      puVar7 = puVar3;
      do {
        puVar6 = puVar7 + 1;
        uVar5 = FUN_009170dc(*puVar7,auStack_464,uVar5,auStack_460);
        puVar7 = puVar6;
      } while (puVar6 < puVar3 + lVar2);
    }
    puVar3 = (undefined1 *)luaL_optlstring(param_1,2,0,&local_470);
    if (puVar3 != (undefined1 *)0x0) {
      if (0 < local_470) {
        puVar7 = puVar3 + local_470;
        do {
          puVar6 = puVar3 + 1;
          uVar5 = FUN_009170dc(*puVar3,auStack_464,uVar5,auStack_460);
          puVar3 = puVar6;
        } while (puVar6 < puVar7);
      }
      luaL_pushresult(auStack_460);
      lua_pushlstring(param_1,auStack_464,uVar5);
      goto LAB_00916ce4;
    }
    luaL_pushresult(auStack_460);
    pcVar4 = (char *)lua_tolstring(param_1,0xffffffff,0);
    if (*pcVar4 == '\0') goto LAB_00916cd4;
  }
  lua_pushnil(param_1);
LAB_00916ce4:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 2;
}

