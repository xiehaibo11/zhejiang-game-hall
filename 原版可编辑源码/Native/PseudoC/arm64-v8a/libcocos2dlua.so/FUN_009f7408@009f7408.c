
undefined8 FUN_009f7408(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 auVar3 [4];
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 local_464 [4];
  undefined1 auStack_460 [1048];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  auVar11 = FUN_009f9e20(param_1,1);
  lVar5 = auVar11._0_8_;
  if (lVar5 == 0) {
    uVar4 = lua_type(param_1,1);
    uVar6 = lua_typename(param_1,uVar4);
    lua_pushfstring(param_1,"%s expected, got %s","string/buffer/slice",uVar6);
    uVar6 = lua_tolstring(param_1,0xffffffff,0);
    luaL_argerror(param_1,1,uVar6);
  }
  local_464 = (undefined1  [4])0x205858;
  uVar9 = auVar11._8_8_ - lVar5;
  uVar7 = luaL_optinteger(param_1,2,1);
  uVar10 = uVar7;
  if (((long)uVar7 < 0) && (uVar10 = 0, -uVar7 <= uVar9)) {
    uVar10 = uVar9 + uVar7 + 1;
  }
  uVar8 = luaL_optinteger(param_1,3,uVar9);
  uVar7 = uVar8;
  if (((long)uVar8 < 0) && (uVar7 = 0, -uVar8 <= uVar9)) {
    uVar7 = uVar9 + uVar8 + 1;
  }
  if ((long)uVar10 < 2) {
    uVar10 = 1;
  }
  if ((long)uVar7 <= (long)uVar9) {
    uVar9 = uVar7;
  }
  luaL_buffinit(param_1,auStack_460);
  if ((long)uVar10 <= (long)uVar9) {
    do {
      auVar3 = local_464;
      uVar7 = (ulong)*(char *)(lVar5 + -1 + uVar10);
      local_464[1] = "0123456789ABCDEF"[uVar7 & 0xf];
      local_464[0] = "0123456789ABCDEF"[uVar7 >> 4 & 0xf];
      if (uVar9 == uVar10) {
        local_464[3] = auVar3[3];
        local_464[2] = 0;
      }
      luaL_addstring(auStack_460,local_464);
      bVar1 = (long)uVar10 < (long)uVar9;
      uVar10 = uVar10 + 1;
    } while (bVar1);
  }
  luaL_pushresult(auStack_460);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

