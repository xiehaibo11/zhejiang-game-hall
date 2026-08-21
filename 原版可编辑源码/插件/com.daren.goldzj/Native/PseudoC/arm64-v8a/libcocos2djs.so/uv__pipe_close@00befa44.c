
void uv__pipe_close(long param_1)

{
  if (*(char **)(param_1 + 0x100) != (char *)0x0) {
    unlink(*(char **)(param_1 + 0x100));
    uv__free(*(undefined8 *)(param_1 + 0x100));
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  uv__stream_close(param_1);
  return;
}

