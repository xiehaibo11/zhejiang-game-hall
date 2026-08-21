
undefined4 lws_get_socket_fd(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x2d0);
  }
  return 0xffffffff;
}

