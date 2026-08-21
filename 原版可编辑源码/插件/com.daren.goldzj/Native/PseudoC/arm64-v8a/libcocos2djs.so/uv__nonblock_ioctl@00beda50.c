
int uv__nonblock_ioctl(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  do {
    iVar1 = ioctl(param_1,0x5421,&local_4);
    if (iVar1 != -1) {
      if (iVar1 == 0) {
        return 0;
      }
      piVar2 = (int *)__errno();
      break;
    }
    piVar2 = (int *)__errno();
  } while (*piVar2 == 4);
  return -*piVar2;
}

