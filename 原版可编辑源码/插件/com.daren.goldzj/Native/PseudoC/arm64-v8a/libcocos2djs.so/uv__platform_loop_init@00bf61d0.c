
int uv__platform_loop_init(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  iVar1 = uv__epoll_create1(0x80000);
  if (iVar1 != -1) {
LAB_00bf61f4:
    *(int *)(param_1 + 0x40) = iVar1;
    *(undefined8 *)(param_1 + 0x340) = 0;
    *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
    return 0;
  }
  piVar2 = (int *)__errno();
  if ((*piVar2 == 0x26) || (*piVar2 == 0x16)) {
    uVar3 = uv__epoll_create(0x100);
    iVar1 = (int)uVar3;
    if (iVar1 != -1) {
      uv__cloexec_ioctl(uVar3,1);
      goto LAB_00bf61f4;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x340) = 0;
  return -*piVar2;
}

