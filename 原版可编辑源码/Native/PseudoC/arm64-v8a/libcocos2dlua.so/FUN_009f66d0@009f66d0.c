
undefined8 FUN_009f66d0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  ulong uVar10;
  ulong uVar11;
  int local_58 [7];
  undefined2 uStack_3b;
  undefined1 local_39;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar7 = FUN_009f9a54();
  bVar3 = *(byte *)(lVar7 + 0x484) >> 3 & 3;
  iVar5 = FUN_009f9b80(param_1,1,local_58);
  if (local_58[0] == 0) {
    uVar6 = lua_type(param_1,1);
    uVar8 = lua_typename(param_1,uVar6);
    lua_pushfstring(param_1,"%s expected, got %s","number/string",uVar8);
    uVar8 = lua_tolstring(param_1,0xffffffff,0);
    luaL_argerror(param_1,1,uVar8);
  }
  uVar1 = iVar5 << 1 ^ iVar5 >> 0x1f;
  uVar10 = (ulong)uVar1;
  if ((bVar3 == 0) || (-1 < (int)uVar1)) {
    lua_pushnumber((double)uVar10,param_1);
  }
  else {
    if (bVar3 == 2) {
      puVar9 = &uStack_3b;
      local_39 = 0;
      do {
        uVar11 = uVar10 & 0xf;
        uVar10 = uVar10 >> 4;
        *(char *)((long)puVar9 + 1) = "0123456789ABCDEF"[uVar11];
        puVar9 = (undefined2 *)((long)puVar9 + -1);
      } while (uVar10 != 0);
      *puVar9 = 0x7830;
    }
    else {
      puVar9 = (undefined2 *)&local_39;
      if (bVar3 == 1) {
        local_39 = 0;
        do {
          bVar4 = 9 < uVar10;
          puVar9 = (undefined2 *)((long)puVar9 + -1);
          *(undefined *)puVar9 = (&DAT_012f5a37)[uVar10 % 10];
          uVar10 = uVar10 / 10;
        } while (bVar4);
      }
    }
    *(undefined1 *)((long)puVar9 + -1) = 0x23;
    lua_pushstring(param_1);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

