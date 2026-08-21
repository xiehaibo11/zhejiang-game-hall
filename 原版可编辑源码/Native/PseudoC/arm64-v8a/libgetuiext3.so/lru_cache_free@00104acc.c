
void lru_cache_free(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 8) != 0) {
      thunk_EXT_FUN_00002bb0();
      thunk_EXT_FUN_00002bb0(*(undefined8 *)(param_1 + 8));
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      thunk_EXT_FUN_00002bb0();
      return;
    }
  }
  return;
}

