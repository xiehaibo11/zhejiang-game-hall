
void uv__inotify_init1(ulong param_1)

{
  syscall(0x1a,param_1 & 0xffffffff);
  return;
}

