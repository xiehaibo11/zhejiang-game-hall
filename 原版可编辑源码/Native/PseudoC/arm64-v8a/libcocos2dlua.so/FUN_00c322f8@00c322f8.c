
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c322f8(ulong param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  long lVar8;
  ulong *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auStack_250 [8];
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  undefined1 auStack_218 [516];
  int local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(ulong **)(param_1 + 0x20) < *(ulong **)(param_1 + 0x28)) &&
     (uVar11 = **(ulong **)(param_1 + 0x20), (int)((long)uVar11 >> 0x2f) == -7)) {
    uVar11 = uVar11 & 0x7fffffffffff;
    uVar12 = 2;
    uVar10 = 3;
    iVar5 = 1;
  }
  else {
    uVar12 = 1;
    uVar10 = 2;
    iVar5 = 0;
    uVar11 = param_1;
  }
  pcVar7 = (char *)luaL_optlstring(param_1,uVar10,"flnSu",0);
  iVar4 = lua_isnumber(param_1,uVar12);
  if (iVar4 == 0) {
    if ((*(ulong *)(param_1 + 0x28) <= (ulong)(*(long *)(param_1 + 0x20) + (long)iVar5 * 8)) ||
       ((int)((long)*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar5 * 8) >> 0x2f) != -9)) {
                    /* WARNING: Subroutine does not return */
      FUN_00bfb458(param_1,uVar12,0x275);
    }
    pcVar7 = (char *)lua_pushfstring(param_1,&DAT_01412408,pcVar7);
    puVar9 = *(ulong **)(uVar11 + 0x28);
    lVar8 = *(long *)(param_1 + 0x20);
    *(ulong **)(uVar11 + 0x28) = puVar9 + 1;
    *puVar9 = *(ulong *)(lVar8 + (long)iVar5 * 8) & 0x7fffffffffff | 0xfffb800000000000;
  }
  else {
    uVar6 = lua_tointeger(param_1,uVar12);
    iVar5 = lua_getstack(uVar11,uVar6,auStack_250);
    if (iVar5 == 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x28) + -8) = 0xffffffffffffffff;
      goto LAB_00c324d0;
    }
  }
  iVar5 = FUN_00bfd250(uVar11,pcVar7,auStack_250,1);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb458(param_1,uVar10,0x48c);
  }
  lua_createtable(param_1,0,0x10);
  cVar3 = *pcVar7;
  if (cVar3 != '\0') {
    bVar1 = false;
    bVar2 = false;
    do {
      switch(cVar3) {
      case 'L':
        bVar1 = true;
        break;
      case 'S':
        lua_pushstring(param_1,local_230);
        lua_setfield(param_1,0xfffffffe,"source");
        lua_pushstring(param_1,auStack_218);
        lua_setfield(param_1,0xfffffffe,"short_src");
        lua_pushinteger(param_1,(long)local_220);
        lua_setfield(param_1,0xfffffffe,"linedefined");
        lua_pushinteger(param_1,(long)local_21c);
        lua_setfield(param_1,0xfffffffe,"lastlinedefined");
        lua_pushstring(param_1,local_238);
        lua_setfield(param_1,0xfffffffe,&DAT_01412448);
        break;
      case 'f':
        bVar2 = true;
        break;
      case 'l':
        lua_pushinteger(param_1,(long)local_228);
        lua_setfield(param_1,0xfffffffe,"currentline");
        break;
      case 'n':
        lua_pushstring(param_1,local_248);
        lua_setfield(param_1,0xfffffffe,&DAT_01410ee0);
        lua_pushstring(param_1,local_240);
        lua_setfield(param_1,0xfffffffe,"namewhat");
        break;
      case 'u':
        lua_pushinteger(param_1,(long)local_224);
        lua_setfield(param_1,0xfffffffe,&DAT_01412460);
        lua_pushinteger(param_1,(long)local_14);
        lua_setfield(param_1,0xfffffffe,"nparams");
        lua_pushboolean(param_1,local_10);
        lua_setfield(param_1,0xfffffffe,"isvararg");
      }
      pcVar7 = pcVar7 + 1;
      cVar3 = *pcVar7;
    } while (cVar3 != '\0');
    if (bVar1) {
      if (param_1 == uVar11) {
        lua_pushvalue(param_1,0xfffffffe);
        lua_remove(param_1,0xfffffffd);
      }
      else {
        lua_xmove(uVar11,param_1,1);
      }
      lua_setfield(param_1,0xfffffffe,"activelines");
    }
    if (bVar2) {
      if (param_1 == uVar11) {
        lua_pushvalue(param_1,0xfffffffe);
        lua_remove(param_1,0xfffffffd);
      }
      else {
        lua_xmove(uVar11,param_1,1);
      }
      lua_setfield(param_1,0xfffffffe,&DAT_014124a0);
    }
  }
LAB_00c324d0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}

