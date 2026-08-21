
undefined8 luaopen_string(long param_1)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  
  FUN_00c2944c(param_1,"string",&DAT_01411ae0,&PTR_FUN_01697670);
  lua_getfield(param_1,0xffffffff,"gmatch");
  lua_setfield(param_1,0xfffffffe,"gfind");
  lVar1 = FUN_00c1b840(param_1,0,1);
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(lVar3 + 0x240) = lVar1;
  puVar2 = (ulong *)FUN_00c1c6dc(param_1,lVar1,*(undefined8 *)(lVar3 + 0x170));
  *puVar2 = *(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff | 0xfffa000000000000;
  *(undefined1 *)(lVar1 + 10) = 0xfe;
  return 1;
}

