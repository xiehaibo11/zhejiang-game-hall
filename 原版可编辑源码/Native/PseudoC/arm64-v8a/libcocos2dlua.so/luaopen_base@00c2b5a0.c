
undefined8 luaopen_base(long param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x48);
  uVar1 = FUN_00bfba1c(param_1,&DAT_01411898,2);
  puVar2 = (ulong *)FUN_00c1c6dc(param_1,uVar4,uVar1);
  *puVar2 = uVar4 | 0xfffa000000000000;
  lua_pushlstring(param_1,"Lua 5.1",7);
  uVar4 = FUN_00c1b840(param_1,0,1);
  puVar2 = *(ulong **)(param_1 + 0x28);
  *(ulong **)(param_1 + 0x28) = puVar2 + 1;
  *puVar2 = uVar4 | 0xfffa000000000000;
  *(ulong *)(uVar4 + 0x20) = uVar4;
  uVar1 = FUN_00bfba1c(param_1,"__mode",6);
  puVar2 = (ulong *)FUN_00c1c6dc(param_1,uVar4,uVar1);
  uVar3 = FUN_00bfba1c(param_1,&DAT_014118a8,2);
  *puVar2 = uVar3 | 0xfffd800000000000;
  *(undefined1 *)(uVar4 + 10) = 0xf7;
  FUN_00c2944c(param_1,&DAT_01411898,&DAT_01411680,&PTR_FUN_01697500);
  FUN_00c2944c(param_1,"coroutine",&DAT_014117d0,&PTR_FUN_016975d0);
  return 2;
}

