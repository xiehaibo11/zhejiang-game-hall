
int socket_destroy(int *param_1)

{
  uint uVar1;
  int __fd;
  
  __fd = *param_1;
  if (__fd != -1) {
    uVar1 = fcntl(__fd,3,0);
    fcntl(*param_1,4,(ulong)(uVar1 & 0xfffff7ff));
    __fd = close(*param_1);
    *param_1 = -1;
  }
  return __fd;
}

