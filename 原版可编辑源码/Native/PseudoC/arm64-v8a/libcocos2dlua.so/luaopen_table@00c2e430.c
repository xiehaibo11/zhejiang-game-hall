
undefined8 luaopen_table(long param_1)

{
  FUN_00c2944c(param_1,"table",&DAT_01411b80,&PTR_FUN_016976d0);
  FUN_00c2992c(param_1,"table.new",FUN_00c2dbc8,
               *(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff);
  FUN_00c2992c(param_1,"table.clear",FUN_00c2dbb0,
               *(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff);
  return 1;
}

