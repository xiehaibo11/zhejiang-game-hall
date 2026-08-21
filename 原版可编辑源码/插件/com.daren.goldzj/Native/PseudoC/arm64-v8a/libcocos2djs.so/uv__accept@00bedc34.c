
ulong uv__accept(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  
LAB_00bedc54:
  do {
    if (DAT_01d3bc60 == 0) {
      uVar3 = uv__accept4(param_1,0,0,0x80800);
      if ((int)uVar3 != -1) {
        return uVar3;
      }
      piVar4 = (int *)__errno();
      if (*piVar4 == 4) goto LAB_00bedc54;
      if (*piVar4 != 0x26) goto LAB_00bedcc8;
      DAT_01d3bc60 = 1;
    }
    uVar1 = accept(param_1,(sockaddr *)0x0,(socklen_t *)0x0);
    if (uVar1 != 0xffffffff) {
      uVar2 = uv__cloexec_ioctl(uVar1,1);
      if (uVar2 == 0) {
        uVar2 = uv__nonblock_ioctl(uVar1,1);
        if (uVar2 == 0) {
          return (ulong)uVar1;
        }
      }
      uv__close(uVar1);
      return (ulong)uVar2;
    }
    piVar4 = (int *)__errno();
    if (*piVar4 != 4) {
LAB_00bedcc8:
      return (ulong)(uint)-*piVar4;
    }
  } while( true );
}

