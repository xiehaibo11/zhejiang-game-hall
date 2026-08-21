
void uv__loop_close(long param_1)

{
  long lVar1;
  
  uv__signal_loop_cleanup();
  uv__platform_loop_delete(param_1);
  uv__async_stop(param_1);
  if (*(int *)(param_1 + 0x300) != -1) {
    uv__close();
    *(undefined4 *)(param_1 + 0x300) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x40) != -1) {
    uv__close();
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  }
  lVar1 = param_1 + 0x88;
  uv_mutex_lock(lVar1);
  uv_mutex_unlock(lVar1);
  uv_mutex_destroy(lVar1);
  uv_rwlock_destroy(param_1 + 0x130);
  uv__free(*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}

