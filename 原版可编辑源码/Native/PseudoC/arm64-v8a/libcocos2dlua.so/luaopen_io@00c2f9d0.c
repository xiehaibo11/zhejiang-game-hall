
undefined8 luaopen_io(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_00c2944c(param_1,0,&DAT_01411d10,&PTR_FUN_016976f0);
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  *puVar1 = puVar1[-1];
  *(undefined8 **)(param_1 + 0x28) = puVar1 + 1;
  lua_setfield(param_1,0xffffd8f0,"FILE*");
  FUN_00c2944c(param_1,&DAT_01410f28,&DAT_01411d60,&PTR_FUN_01697740);
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = (undefined8 *)lua_newuserdata(param_1,0x10);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
  *(undefined1 *)(uVar2 + 10) = 1;
  *(ulong *)(uVar2 + 0x20) = *(ulong *)(*(long *)(param_1 + 0x28) + -0x18) & 0x7fffffffffff;
  *puVar1 = &__sF;
  *(undefined4 *)(puVar1 + 1) = 2;
  lua_setfield(param_1,0xfffffffe,"stdin");
  *(ulong *)(lVar3 + 0x290) = uVar2;
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = (undefined8 *)lua_newuserdata(param_1,0x10);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
  *(undefined1 *)(uVar2 + 10) = 1;
  *(ulong *)(uVar2 + 0x20) = *(ulong *)(*(long *)(param_1 + 0x28) + -0x18) & 0x7fffffffffff;
  *puVar1 = glUniformMatrix2fv;
  *(undefined4 *)(puVar1 + 1) = 2;
  lua_setfield(param_1,0xfffffffe,"stdout");
  *(ulong *)(lVar3 + 0x298) = uVar2;
  puVar1 = (undefined8 *)lua_newuserdata(param_1,0x10);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
  *(undefined1 *)(uVar2 + 10) = 1;
  *(ulong *)(uVar2 + 0x20) = *(ulong *)(*(long *)(param_1 + 0x28) + -0x18) & 0x7fffffffffff;
  *puVar1 = pthread_rwlock_tryrdlock;
  *(undefined4 *)(puVar1 + 1) = 2;
  lua_setfield(param_1,0xfffffffe,"stderr");
  return 1;
}

