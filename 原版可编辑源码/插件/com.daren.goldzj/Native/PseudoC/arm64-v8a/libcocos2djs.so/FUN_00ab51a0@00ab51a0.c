
void FUN_00ab51a0(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + -0x4f8) + 0xc94) >> 3 & 1) == 0) {
    lws_service_fd_tsi(*(long *)(param_1 + -0x4f8),0,*(undefined1 *)(param_1 + 0x1da));
    return;
  }
  return;
}

