
int uv__cloexec_ioctl(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    do {
      iVar1 = ioctl(param_1,0x5450);
      if (iVar1 != -1) goto LAB_00bedb08;
      piVar2 = (int *)__errno();
    } while (*piVar2 == 4);
  }
  else {
    do {
      iVar1 = ioctl(param_1,0x5451);
      if (iVar1 != -1) goto LAB_00bedb08;
      piVar2 = (int *)__errno();
    } while (*piVar2 == 4);
  }
LAB_00bedb4c:
  return -*piVar2;
LAB_00bedb08:
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)__errno();
  goto LAB_00bedb4c;
}

