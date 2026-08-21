
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c2d388(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  long local_650;
  ulong local_648;
  undefined1 *local_640;
  undefined1 *local_638;
  undefined8 local_630;
  undefined4 local_628;
  undefined4 local_624;
  long *local_420 [131];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar8 = (undefined1 *)luaL_checklstring(param_1,1,&local_650);
  pcVar9 = (char *)luaL_checklstring(param_1,2,0);
  iVar4 = lua_type(param_1,3);
  iVar5 = luaL_optinteger(param_1,4,(long)((int)local_650 + 1));
  cVar1 = *pcVar9;
  if (cVar1 == '^') {
    pcVar9 = pcVar9 + 1;
  }
  if (3 < iVar4 - 3U) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb458(param_1,3,0x290);
  }
  luaL_buffinit(param_1,local_420);
  local_638 = puVar8 + local_650;
  local_640 = puVar8;
  local_630 = param_1;
  if (0 < iVar5) {
    iVar4 = 0;
    puVar11 = puVar8;
    do {
      local_624 = 0;
      local_628 = 0;
      puVar8 = (undefined1 *)FUN_00c2cc0c(&local_640,puVar11,pcVar9);
      uVar3 = local_630;
      if (puVar8 == (undefined1 *)0x0) {
LAB_00c2d6d8:
        puVar8 = puVar11;
        if (local_638 <= puVar11) goto LAB_00c2d558;
        if (&local_8 <= local_420[0]) {
          luaL_prepbuffer(local_420);
        }
        puVar8 = puVar11 + 1;
        *(undefined1 *)local_420[0] = *puVar11;
        local_420[0] = (long *)((long)local_420[0] + 1);
      }
      else {
        iVar4 = iVar4 + 1;
        uVar6 = lua_type(local_630,3);
        switch(uVar6) {
        case 3:
        case 4:
          uVar13 = 0;
          lVar12 = lua_tolstring(local_630,3,&local_648);
          if (local_648 != 0) {
            do {
              if (*(char *)(lVar12 + uVar13) == '%') {
                uVar13 = uVar13 + 1;
                bVar2 = *(byte *)(lVar12 + uVar13);
                if (((byte)(&DAT_01410f61)[bVar2] >> 3 & 1) == 0) {
                  if (&local_8 <= local_420[0]) {
                    luaL_prepbuffer(local_420);
                  }
                  *(undefined1 *)local_420[0] = *(undefined1 *)(lVar12 + uVar13);
                  local_420[0] = (long *)((long)local_420[0] + 1);
                }
                else if (bVar2 == 0x30) {
                  luaL_addlstring(local_420,puVar11,(long)puVar8 - (long)puVar11);
                }
                else {
                  FUN_00c2c9c4(&local_640,bVar2 - 0x31,puVar11,puVar8);
                  luaL_addvalue(local_420);
                }
              }
              else {
                if (&local_8 <= local_420[0]) {
                  luaL_prepbuffer(local_420);
                }
                *(undefined1 *)local_420[0] = *(undefined1 *)(lVar12 + uVar13);
                local_420[0] = (long *)((long)local_420[0] + 1);
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < local_648);
          }
          goto LAB_00c2d534;
        case 5:
          FUN_00c2c9c4(&local_640,0,puVar11,puVar8);
          lua_gettable(uVar3,3);
        default:
          iVar7 = lua_toboolean(uVar3,0xffffffff);
          break;
        case 6:
          lua_pushvalue(uVar3,3);
          uVar6 = FUN_00c2ca54(&local_640,puVar11,puVar8);
          lua_call(uVar3,uVar6,1);
          iVar7 = lua_toboolean(uVar3,0xffffffff);
        }
        if (iVar7 == 0) {
          lua_settop(uVar3,0xfffffffe);
          lua_pushlstring(uVar3,puVar11,(long)puVar8 - (long)puVar11);
        }
        else {
          iVar7 = lua_isstring(uVar3,0xffffffff);
          if (iVar7 == 0) {
            uVar6 = lua_type(uVar3,0xffffffff);
            uVar10 = lua_typename(uVar3,uVar6);
                    /* WARNING: Subroutine does not return */
            FUN_00bfb308(uVar3,0x780,uVar10);
          }
        }
        luaL_addvalue(local_420);
LAB_00c2d534:
        if (puVar8 <= puVar11) goto LAB_00c2d6d8;
      }
      if ((cVar1 == '^') || (puVar11 = puVar8, iVar5 <= iVar4)) goto LAB_00c2d558;
    } while( true );
  }
  lVar12 = 0;
LAB_00c2d55c:
  luaL_addlstring(local_420,puVar8,(long)local_638 - (long)puVar8);
  luaL_pushresult(local_420);
  lua_pushinteger(param_1,lVar12);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(2);
LAB_00c2d558:
  lVar12 = (long)iVar4;
  goto LAB_00c2d55c;
}

