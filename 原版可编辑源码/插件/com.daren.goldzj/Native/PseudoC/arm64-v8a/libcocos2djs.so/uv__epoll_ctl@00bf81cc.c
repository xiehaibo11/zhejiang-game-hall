
void uv__epoll_ctl(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  syscall(0x15,param_1 & 0xffffffff,param_2 & 0xffffffff,param_3 & 0xffffffff,param_4);
  return;
}

