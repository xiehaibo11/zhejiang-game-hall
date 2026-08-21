
undefined8 FUN_00c32084(long param_1)

{
  int iVar1;
  
  FUN_00c29a84(param_1,1);
  iVar1 = lua_getmetatable(param_1,1);
  if (iVar1 == 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x28) + -8) = 0xffffffffffffffff;
  }
  return 1;
}

