
void uv__inotify_add_watch(ulong param_1,undefined8 param_2,ulong param_3)

{
  syscall(0x1b,param_1 & 0xffffffff,param_2,param_3 & 0xffffffff);
  return;
}

