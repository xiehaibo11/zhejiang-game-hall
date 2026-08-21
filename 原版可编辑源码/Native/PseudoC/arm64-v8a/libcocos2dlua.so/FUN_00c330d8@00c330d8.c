
undefined8 FUN_00c330d8(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  double *pdVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar3 = *(ulong **)(param_1 + 0x20);
  if (*(ulong **)(param_1 + 0x28) <= puVar3) {
LAB_00c333c8:
                    /* WARNING: Subroutine does not return */
    FUN_00bfb554(param_1,1,6);
  }
  uVar8 = *puVar3;
  iVar6 = (int)((long)uVar8 >> 0x2f);
  if (iVar6 == -8) {
    uVar8 = uVar8 & 0x7fffffffffff;
  }
  else {
    if (iVar6 != -9) goto LAB_00c333c8;
    uVar8 = uVar8 & 0x7fffffffffff;
    if (*(char *)(uVar8 + 10) != '\0') goto LAB_00c33120;
    uVar8 = *(long *)(uVar8 + 0x20) - 0x68;
  }
  if (uVar8 != 0) {
    uVar1 = FUN_00c29da0(param_1,2,0);
    lua_createtable(param_1,0,0x10);
    uVar9 = *(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
    FUN_00c327e8(param_1,uVar9,"linedefined",*(undefined4 *)(uVar8 + 0x48));
    FUN_00c327e8(param_1,uVar9,"lastlinedefined",*(int *)(uVar8 + 0x48) + *(int *)(uVar8 + 0x4c));
    FUN_00c327e8(param_1,uVar9,"stackslots",*(undefined1 *)(uVar8 + 0xb));
    FUN_00c327e8(param_1,uVar9,"params",*(undefined1 *)(uVar8 + 10));
    FUN_00c327e8(param_1,uVar9,"bytecodes",*(undefined4 *)(uVar8 + 0xc));
    FUN_00c327e8(param_1,uVar9,"gcconsts",*(undefined4 *)(uVar8 + 0x30));
    FUN_00c327e8(param_1,uVar9,"nconsts",*(undefined4 *)(uVar8 + 0x34));
    FUN_00c327e8(param_1,uVar9,"upvalues",*(undefined1 *)(uVar8 + 0x3c));
    if (uVar1 < *(uint *)(uVar8 + 0xc)) {
      uVar2 = FUN_00bfc8bc(uVar8,uVar1);
      FUN_00c327e8(param_1,uVar9,"currentline",uVar2);
    }
    lua_pushboolean(param_1,*(byte *)(uVar8 + 0x3d) & 2);
    lua_setfield(param_1,0xfffffffe,"isvararg");
    lua_pushboolean(param_1,*(byte *)(uVar8 + 0x3d) & 1);
    lua_setfield(param_1,0xfffffffe,"children");
    puVar3 = *(ulong **)(param_1 + 0x28);
    uVar9 = *(ulong *)(uVar8 + 0x40);
    *(ulong **)(param_1 + 0x28) = puVar3 + 1;
    *puVar3 = uVar9 | 0xfffd800000000000;
    lua_setfield(param_1,0xfffffffe,"source");
    FUN_00bfd008(param_1,uVar8,uVar1);
    lua_setfield(param_1,0xfffffffe,&DAT_014125c0);
    return 1;
  }
  uVar8 = *puVar3 & 0x7fffffffffff;
LAB_00c33120:
  lua_createtable(param_1,0,4);
  uVar9 = *(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
  if (*(char *)(uVar8 + 10) != '\x01') {
    FUN_00c327e8(param_1,uVar9,&DAT_014125c8);
  }
  uVar4 = FUN_00bfba1c(param_1,&DAT_014125d0,4);
  pdVar5 = (double *)FUN_00c1c6dc(param_1,uVar9,uVar4);
  lVar7 = *(long *)(uVar8 + 0x28);
  if (lVar7 == (int)lVar7) {
    *(int *)pdVar5 = (int)lVar7;
    *(int *)((long)pdVar5 + 4) = -0x70000;
  }
  else {
    *pdVar5 = (double)lVar7;
  }
  FUN_00c327e8(param_1,uVar9,"upvalues",*(undefined1 *)(uVar8 + 0xb));
  return 1;
}

