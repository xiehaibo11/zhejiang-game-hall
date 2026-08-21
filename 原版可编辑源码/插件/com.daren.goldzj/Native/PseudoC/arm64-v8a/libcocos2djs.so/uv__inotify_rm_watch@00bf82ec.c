
void uv__inotify_rm_watch(ulong param_1,ulong param_2)

{
  syscall(0x1c,param_1 & 0xffffffff,param_2 & 0xffffffff);
  return;
}

