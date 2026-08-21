
void uv__io_fork(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x340);
  uv__close(*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  uv__platform_loop_delete(param_1);
  iVar1 = uv__platform_loop_init(param_1);
  if (iVar1 != 0) {
    return;
  }
  uv__inotify_fork(param_1,uVar2);
  return;
}

