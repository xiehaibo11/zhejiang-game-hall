
void FUN_011a51d8(long param_1)

{
  long lVar1;
  
  FUN_011a6de4();
  FUN_011abf94(param_1);
  FUN_011a23cc(param_1);
  if (*(int *)(param_1 + 0x300) != -1) {
    FUN_011a2d5c();
    *(undefined4 *)(param_1 + 0x300) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x40) != -1) {
    FUN_011a2d5c();
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  }
  lVar1 = param_1 + 0x88;
  uv_mutex_lock(lVar1);
  uv_mutex_unlock(lVar1);
  uv_mutex_destroy(lVar1);
  uv_rwlock_destroy(param_1 + 0x130);
  FUN_0119f27c(*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}

