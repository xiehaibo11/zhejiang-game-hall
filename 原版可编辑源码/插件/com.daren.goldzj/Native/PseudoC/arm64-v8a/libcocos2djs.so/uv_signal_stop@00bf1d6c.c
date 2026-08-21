
undefined8 uv_signal_stop(long param_1)

{
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_00bf0f6c();
  }
  return 0;
}

