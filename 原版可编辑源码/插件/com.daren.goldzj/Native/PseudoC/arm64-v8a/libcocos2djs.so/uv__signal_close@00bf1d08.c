
void uv__signal_close(long param_1)

{
  if (*(int *)(param_1 + 0x68) == 0) {
    if (*(int *)(param_1 + 0x90) == *(int *)(param_1 + 0x94)) {
LAB_00bf1d4c:
      uv__make_close_pending(param_1);
      return;
    }
  }
  else {
    FUN_00bf0f6c();
    if (*(int *)(param_1 + 0x90) == *(int *)(param_1 + 0x94)) goto LAB_00bf1d4c;
  }
  return;
}

