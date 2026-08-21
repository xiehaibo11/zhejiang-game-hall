
void uv__async_stop(long param_1)

{
  if (*(int *)(param_1 + 0x1f8) != -1) {
    if (*(int *)(param_1 + 0x200) != -1) {
      if (*(int *)(param_1 + 0x1f8) != *(int *)(param_1 + 0x200)) {
        uv__close();
      }
      *(undefined4 *)(param_1 + 0x200) = 0xffffffff;
    }
    uv__io_stop(param_1,param_1 + 0x1c8,1);
    uv__close(*(undefined4 *)(param_1 + 0x1f8));
    *(undefined4 *)(param_1 + 0x1f8) = 0xffffffff;
  }
  return;
}

