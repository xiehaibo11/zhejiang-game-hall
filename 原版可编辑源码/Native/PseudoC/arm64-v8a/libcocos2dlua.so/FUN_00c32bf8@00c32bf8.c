
undefined8 FUN_00c32bf8(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  
  uVar3 = FUN_00c29dd4(param_1,1);
  lVar4 = FUN_00c29b44(param_1,2);
  luaL_findtable(param_1,0xffffd8f0,"_VMEVENTS",4);
  if (lVar4 == 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x28);
    *(undefined8 **)(param_1 + 0x28) = puVar5 + 1;
    *puVar5 = 0xffffffffffffffff;
    while (iVar2 = lua_next(param_1,0xfffffffe), iVar2 != 0) {
      lVar4 = *(long *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar4 + -8;
      if (((int)((long)*(ulong *)(lVar4 + -8) >> 0x2f) == -9) &&
         (uVar3 == (*(ulong *)(lVar4 + -8) & 0x7fffffffffff))) {
        puVar5 = (undefined8 *)
                 FUN_00c1bdd4(param_1,*(ulong *)(lVar4 + -0x18) & 0x7fffffffffff,lVar4 + -0x10);
        *puVar5 = 0xffffffffffffffff;
      }
    }
  }
  else {
    uVar6 = (uint)*(byte *)(lVar4 + 0x18);
    pbVar7 = (byte *)(lVar4 + 0x18);
    uVar8 = *(uint *)(lVar4 + 0x10);
    if (*(byte *)(lVar4 + 0x18) != 0) {
      do {
        uVar1 = (uVar8 >> 0x1a | uVar8 << 6) + uVar6;
        pbVar7 = pbVar7 + 1;
        uVar6 = (uint)*pbVar7;
        uVar8 = uVar8 ^ uVar1;
      } while (uVar6 != 0);
    }
    lua_pushvalue(param_1,1);
    lua_rawseti(param_1,0xfffffffe,uVar8 << 3);
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 0xc3) = 0xff;
  }
  return 0;
}

