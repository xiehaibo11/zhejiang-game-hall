
undefined8 FUN_00c2a90c(long param_1)

{
  long lVar1;
  
  FUN_00c29e20(param_1,1);
  FUN_00c29a84(param_1,2);
  lVar1 = FUN_00c29a84(param_1,3);
  *(long *)(param_1 + 0x28) = lVar1 + 8;
  lua_rawset(param_1,1);
  return 1;
}

