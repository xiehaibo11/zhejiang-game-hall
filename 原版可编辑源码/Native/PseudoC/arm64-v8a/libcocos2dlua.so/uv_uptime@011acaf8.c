
int uv_uptime(double *param_1)

{
  int iVar1;
  int *piVar2;
  timespec local_30;
  
  if (DAT_01793660 == 0) {
    iVar1 = clock_gettime(7,&local_30);
    if (iVar1 == 0) goto LAB_011acb68;
    piVar2 = (int *)__errno();
    if (*piVar2 != 0x16) goto LAB_011acb88;
    DAT_01793660 = 1;
    iVar1 = clock_gettime(1,&local_30);
  }
  else {
    iVar1 = clock_gettime(1,&local_30);
  }
  if (iVar1 != 0) {
    piVar2 = (int *)__errno();
LAB_011acb88:
    return -*piVar2;
  }
LAB_011acb68:
  *param_1 = (double)local_30.tv_sec;
  return 0;
}

