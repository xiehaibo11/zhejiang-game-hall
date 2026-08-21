
void uv_disable_stdio_inheritance(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  uv__cloexec_ioctl(0,1);
  do {
    do {
      iVar2 = iVar2 + 1;
      iVar1 = uv__cloexec_ioctl(iVar2,1);
    } while (iVar1 == 0);
  } while (iVar2 < 0x10);
  return;
}

