
undefined8 FUN_009f6520(undefined8 param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  ulong uVar9;
  ulong uVar10;
  int local_58 [7];
  undefined2 uStack_3b;
  undefined1 local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar6 = FUN_009f9a54();
  bVar2 = *(byte *)(lVar6 + 0x484) >> 3 & 3;
  uVar4 = FUN_009f9b80(param_1,1,local_58);
  if (local_58[0] == 0) {
    uVar5 = lua_type(param_1,1);
    uVar7 = lua_typename(param_1,uVar5);
    lua_pushfstring(param_1,"%s expected, got %s","number/string",uVar7);
    uVar7 = lua_tolstring(param_1,0xffffffff,0);
    luaL_argerror(param_1,1,uVar7);
  }
  if ((bVar2 == 0) || (uVar10 = (ulong)(int)uVar4, uVar10 + 0x80000000 >> 0x20 == 0)) {
    lua_pushnumber((double)(long)(int)uVar4,param_1);
  }
  else {
    uVar9 = -uVar10;
    if (-1 < (long)((ulong)uVar4 << 0x20)) {
      uVar9 = uVar10;
    }
    if (bVar2 == 2) {
      puVar8 = &uStack_3b;
      local_39 = 0;
      do {
        uVar10 = uVar9 & 0xf;
        uVar9 = uVar9 >> 4;
        *(char *)((long)puVar8 + 1) = "0123456789ABCDEF"[uVar10];
        puVar8 = (undefined2 *)((long)puVar8 + -1);
      } while (uVar9 != 0);
      *puVar8 = 0x7830;
    }
    else {
      puVar8 = (undefined2 *)&local_39;
      if (bVar2 == 1) {
        local_39 = 0;
        do {
          bVar3 = 9 < uVar9;
          puVar8 = (undefined2 *)((long)puVar8 + -1);
          *(undefined *)puVar8 = (&DAT_012f5a37)[uVar9 % 10];
          uVar9 = uVar9 / 10;
        } while (bVar3);
      }
    }
    if ((int)uVar4 < 0) {
      puVar8 = (undefined2 *)((long)puVar8 + -1);
      *(undefined1 *)puVar8 = 0x2d;
    }
    *(undefined1 *)((long)puVar8 + -1) = 0x23;
    lua_pushstring(param_1);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

