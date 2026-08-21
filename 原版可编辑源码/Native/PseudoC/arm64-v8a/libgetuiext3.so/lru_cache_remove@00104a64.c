
void lru_cache_remove(long param_1,long param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(long *)(param_1 + 0x10) != 0) {
      thunk_EXT_FUN_00002bb0(*(long *)(param_1 + 0x10),param_2);
    }
    if (*(long *)(param_1 + 8) != 0) {
      uVar1 = thunk_EXT_FUN_00002bb0(*(long *)(param_1 + 8),FUN_00104a2c,param_2);
      thunk_EXT_FUN_00002bb0(*(undefined8 *)(param_1 + 8),uVar1);
      return;
    }
  }
  return;
}

