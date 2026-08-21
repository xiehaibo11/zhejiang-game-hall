
undefined8 lru_cache_get(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) && (*(long *)(param_1 + 0x10) != 0)) {
    uVar1 = thunk_EXT_FUN_00002bb0();
    return uVar1;
  }
  return 0;
}

