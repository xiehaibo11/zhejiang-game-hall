
void SSL_get_all_async_fds(long param_1)

{
  if (*(long *)(param_1 + 0x1148) != 0) {
    ASYNC_WAIT_CTX_get_all_fds();
    return;
  }
  return;
}

