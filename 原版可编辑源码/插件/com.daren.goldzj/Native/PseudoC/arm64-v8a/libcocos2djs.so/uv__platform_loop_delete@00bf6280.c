
void uv__platform_loop_delete(long param_1)

{
  if (*(int *)(param_1 + 0x348) != -1) {
    uv__io_stop(param_1,param_1 + 0x308,1);
    uv__close(*(undefined4 *)(param_1 + 0x348));
    *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
  }
  return;
}

