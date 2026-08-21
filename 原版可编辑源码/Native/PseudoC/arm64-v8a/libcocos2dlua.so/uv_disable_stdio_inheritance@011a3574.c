
void uv_disable_stdio_inheritance(void)

{
  int iVar1;
  int *piVar2;
  uint __fd;
  
  __fd = 0;
LAB_011a358c:
  iVar1 = ioctl(__fd,0x5451);
  if (iVar1 == -1) goto code_r0x011a35a0;
  if (iVar1 != 0) {
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
    if (__fd < 0x10) goto LAB_011a3588;
    goto LAB_011a35b8;
  }
  goto LAB_011a3588;
code_r0x011a35a0:
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (iVar1 != 4) {
    if (0xf < __fd) {
LAB_011a35b8:
      if (iVar1 != 0) {
        return;
      }
    }
LAB_011a3588:
    __fd = __fd + 1;
  }
  goto LAB_011a358c;
}

