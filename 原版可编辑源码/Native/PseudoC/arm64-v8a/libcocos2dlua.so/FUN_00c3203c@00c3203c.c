
undefined8 FUN_00c3203c(long param_1)

{
  FUN_00c29e6c(param_1,2);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20) + 0x10;
  lua_setmetatable(param_1,1);
  *(undefined8 *)(*(long *)(param_1 + 0x28) + -8) = 0xfffeffffffffffff;
  return 1;
}

