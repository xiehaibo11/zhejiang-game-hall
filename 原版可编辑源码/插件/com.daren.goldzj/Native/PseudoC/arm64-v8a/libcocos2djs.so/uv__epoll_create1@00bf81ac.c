
void uv__epoll_create1(ulong param_1)

{
  syscall(0x14,param_1 & 0xffffffff);
  return;
}

