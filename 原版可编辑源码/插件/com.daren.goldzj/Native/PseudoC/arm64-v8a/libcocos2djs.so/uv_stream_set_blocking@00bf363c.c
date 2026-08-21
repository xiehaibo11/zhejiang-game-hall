
void uv_stream_set_blocking(long param_1,int param_2)

{
  uv__nonblock_ioctl(*(undefined4 *)(param_1 + 0xb8),param_2 == 0);
  return;
}

