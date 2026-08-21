
undefined8 FUN_009f8aa0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  
  puVar2 = (undefined8 *)FUN_009f9a54();
  iVar1 = lua_type(param_1,1);
  if (iVar1 < 1) {
    FUN_009fc080(puVar2);
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 2) = 0x18;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0x78;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0x20;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[10] = 0;
    luaL_unref(param_1,0xffffd8f0,*(undefined4 *)(puVar2 + 0x90));
    *(undefined4 *)(puVar2 + 0x90) = 0xfffffffe;
    return 0;
  }
  uVar3 = luaL_checklstring(param_1,1,0);
  lVar4 = FUN_009fc1e8(puVar2,uVar3);
  iVar1 = lua_type(param_1,2);
  if (iVar1 < 1) {
    FUN_009fc570(puVar2,lVar4);
    goto LAB_009f8cb8;
  }
  plVar5 = (long *)FUN_009fc884(param_1,lVar4);
  if (((puVar2 == (undefined8 *)0x0) || (lVar4 == 0)) || (plVar5 == (long *)0x0)) goto LAB_009f8cb8;
  plVar8 = (long *)0x0;
  if (*(long *)(lVar4 + 0x30) == 0) {
LAB_009f8c58:
    lVar10 = *(long *)(lVar4 + 0x10);
    plVar11 = (long *)0x0;
    if (lVar10 == 0) goto LAB_009f8c60;
LAB_009f8bf0:
    iVar1 = (int)plVar5[3];
    plVar9 = plVar8;
    if (iVar1 != 0) {
      uVar7 = (long)iVar1 * 0x9e3779b1;
      uVar12 = lVar10 - 1U & uVar7;
      if ((lVar10 - 1U & uVar7) == 0) {
        uVar12 = 1;
      }
      for (plVar11 = (long *)(*(long *)(lVar4 + 0x28) +
                             uVar12 * ((ulong)*(uint *)(lVar4 + 0x20) & 0x7fffffff));
          plVar11[1] != (long)iVar1; plVar11 = (long *)((long)plVar11 + *plVar11)) {
        if (*plVar11 == 0) goto LAB_009f8c48;
      }
      goto LAB_009f8c60;
    }
    if (*(int *)(lVar4 + 0x20) < 0) {
      plVar11 = *(long **)(lVar4 + 0x28);
      goto joined_r0x009f8ce0;
    }
LAB_009f8c48:
    plVar11 = (long *)0x0;
    if (plVar8 != (long *)0x0) goto LAB_009f8c64;
LAB_009f8c74:
    iVar6 = (int)plVar8;
    iVar1 = iVar6;
    if (plVar11 == (long *)0x0) goto LAB_009f8c84;
LAB_009f8c78:
    iVar6 = iVar1;
    if ((long *)plVar11[2] != plVar5) goto LAB_009f8c84;
    plVar11[1] = 0;
    plVar11[2] = 0;
  }
  else {
    lVar10 = *plVar5;
    if (lVar10 != 0) {
      uVar7 = *(long *)(lVar4 + 0x30) - 1;
      uVar12 = uVar7 & lVar10 * 0x9e3779b1;
      if ((uVar7 & lVar10 * 0x9e3779b1) == 0) {
        uVar12 = 1;
      }
      for (plVar8 = (long *)(*(long *)(lVar4 + 0x48) +
                            uVar12 * ((ulong)*(uint *)(lVar4 + 0x40) & 0x7fffffff));
          plVar8[1] != lVar10; plVar8 = (long *)((long)plVar8 + *plVar8)) {
        if (*plVar8 == 0) goto LAB_009f8be4;
      }
      goto LAB_009f8c58;
    }
    if (*(int *)(lVar4 + 0x40) < 0) {
      plVar8 = *(long **)(lVar4 + 0x48);
      goto LAB_009f8c58;
    }
LAB_009f8be4:
    plVar8 = (long *)0x0;
    lVar10 = *(long *)(lVar4 + 0x10);
    plVar11 = (long *)0x0;
    if (lVar10 != 0) goto LAB_009f8bf0;
LAB_009f8c60:
    plVar9 = plVar8;
    plVar8 = (long *)0x0;
joined_r0x009f8ce0:
    if (plVar9 == (long *)0x0) goto LAB_009f8c74;
LAB_009f8c64:
    if ((long *)plVar9[2] != plVar5) {
      plVar8 = (long *)0x0;
      goto LAB_009f8c74;
    }
    plVar9[1] = 0;
    plVar9[2] = 0;
    iVar6 = 1;
    iVar1 = 1;
    if (plVar11 != (long *)0x0) goto LAB_009f8c78;
LAB_009f8c84:
    if (iVar6 == 0) goto LAB_009f8cb8;
  }
  FUN_009fcb38(puVar2);
  *(uint *)(lVar4 + 0x70) =
       *(uint *)(lVar4 + 0x70) & 0xf0000000 | *(uint *)(lVar4 + 0x70) - 1 & 0xfffffff;
LAB_009f8cb8:
  FUN_009fca90(param_1,puVar2,lVar4);
  return 0;
}

