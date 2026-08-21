
undefined8 FUN_009f6850(undefined8 param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int local_58 [7];
  undefined2 uStack_3b;
  undefined1 local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = FUN_009f9a54();
  bVar2 = *(byte *)(lVar5 + 0x484) >> 3 & 3;
  lVar5 = FUN_009f9b80(param_1,1,local_58);
  if (local_58[0] == 0) {
    uVar4 = lua_type(param_1,1);
    uVar6 = lua_typename(param_1,uVar4);
    lua_pushfstring(param_1,"%s expected, got %s","number/string",uVar6);
    uVar6 = lua_tolstring(param_1,0xffffffff,0);
    luaL_argerror(param_1,1,uVar6);
  }
  uVar8 = lVar5 << 1 ^ lVar5 >> 0x3f;
  if ((bVar2 == 0) || (uVar8 + 0x80000000 >> 0x20 == 0)) {
    lua_pushnumber((double)(long)uVar8,param_1);
  }
  else {
    uVar9 = -uVar8;
    if (-1 < (long)uVar8) {
      uVar9 = uVar8;
    }
    if (bVar2 == 2) {
      puVar7 = &uStack_3b;
      local_39 = 0;
      do {
        uVar10 = uVar9 & 0xf;
        uVar9 = uVar9 >> 4;
        *(char *)((long)puVar7 + 1) = "0123456789ABCDEF"[uVar10];
        puVar7 = (undefined2 *)((long)puVar7 + -1);
      } while (uVar9 != 0);
      *puVar7 = 0x7830;
    }
    else {
      puVar7 = (undefined2 *)&local_39;
      if (bVar2 == 1) {
        local_39 = 0;
        do {
          bVar3 = 9 < uVar9;
          puVar7 = (undefined2 *)((long)puVar7 + -1);
          *(undefined *)puVar7 = (&DAT_012f5a37)[uVar9 % 10];
          uVar9 = uVar9 / 10;
        } while (bVar3);
      }
    }
    if ((long)uVar8 < 0) {
      puVar7 = (undefined2 *)((long)puVar7 + -1);
      *(undefined1 *)puVar7 = 0x2d;
    }
    *(undefined1 *)((long)puVar7 + -1) = 0x23;
    lua_pushstring(param_1);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

