
undefined8 luaopen_ffi(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  
  lVar1 = FUN_00c0fd5c();
  puVar6 = *(ulong **)(param_1 + 0x28);
  *(ulong **)(param_1 + 0x28) = puVar6 + 1;
  uVar2 = FUN_00c1b840(param_1,0,1);
  *(ulong *)(lVar1 + 0x28) = uVar2;
  *puVar6 = uVar2 | 0xfffa000000000000;
  uVar2 = FUN_00c1b840(param_1,0,1);
  puVar6 = *(ulong **)(param_1 + 0x28);
  *(ulong **)(param_1 + 0x28) = puVar6 + 1;
  *puVar6 = uVar2 | 0xfffa000000000000;
  *(ulong *)(uVar2 + 0x20) = uVar2;
  uVar3 = FUN_00bfba1c(param_1,"__mode",6);
  puVar6 = (ulong *)FUN_00c1c6dc(param_1,uVar2,uVar3);
  uVar4 = FUN_00bfba1c(param_1,&DAT_01410ef0,1);
  *puVar6 = uVar4 | 0xfffd800000000000;
  *(undefined1 *)(uVar2 + 10) = 0xf7;
  *(ulong *)(lVar1 + 0x20) = uVar2;
  FUN_00c2944c(param_1,0,&DAT_01410d20,&PTR_FUN_016972f0);
  *(ulong *)(*(long *)(param_1 + 0x10) + 0x270) =
       *(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
  FUN_00c2944c(param_1,0,&DAT_01410dc0,&PTR_FUN_01697380);
  FUN_00c2944c(param_1,0,&DAT_01410de0,&PTR_FUN_016973a0);
  puVar6 = (ulong *)FUN_00c1c6dc(param_1,*(undefined8 *)(lVar1 + 0x28),
                                 *(long *)(lVar1 + 0x18) + 0xa8);
  *puVar6 = *(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff | 0xfffa000000000000;
  lVar1 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar1 + -8;
  FUN_00c24ef0(param_1,*(ulong *)(lVar1 + -0x10) & 0x7fffffffffff);
  lua_pushlstring(param_1,"Linux",5);
  lua_pushlstring(param_1,"arm64",5);
  FUN_00c2944c(param_1,0,&DAT_01410e00,&PTR_FUN_016973b0);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x10) + 0xd0);
  uVar3 = FUN_00bfba1c(param_1,"_LOADED",7);
  puVar6 = (ulong *)FUN_00c1bc28(uVar2 & 0x7fffffffffff,uVar3);
  if ((puVar6 != (ulong *)0x0) && ((int)((long)*puVar6 >> 0x2f) == -0xc)) {
    uVar2 = *puVar6 & 0x7fffffffffff;
    uVar3 = FUN_00bfba1c(param_1,&DAT_01410f08,3);
    puVar5 = (undefined8 *)FUN_00c1c6dc(param_1,uVar2,uVar3);
    *puVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + -8);
    if ((*(byte *)(uVar2 + 8) >> 2 & 1) != 0) {
      lVar1 = *(long *)(param_1 + 0x10);
      *(byte *)(uVar2 + 8) = *(byte *)(uVar2 + 8) & 0xfb;
      *(undefined8 *)(uVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x50);
      *(ulong *)(lVar1 + 0x50) = uVar2;
    }
  }
  return 1;
}

