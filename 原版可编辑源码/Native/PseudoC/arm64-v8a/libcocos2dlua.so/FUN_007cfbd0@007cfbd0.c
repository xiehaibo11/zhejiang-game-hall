
int FUN_007cfbd0(undefined8 param_1,long param_2,long param_3)

{
  int __fd;
  int iVar1;
  int *piVar2;
  int iVar3;
  
  __fd = __open_2(param_1,0);
  if (__fd < 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = 0;
    do {
      while( true ) {
        if ((int)param_3 <= iVar3) goto LAB_007cfc5c;
        iVar1 = __read_chk(__fd,param_2 + iVar3,param_3 - iVar3,0xffffffffffffffff);
        if (-1 < iVar1) break;
        piVar2 = (int *)__errno();
        if (*piVar2 != 4) {
          if (iVar3 == 0) {
            iVar3 = -1;
          }
          goto LAB_007cfc5c;
        }
      }
      iVar3 = iVar3 + iVar1;
    } while (iVar1 != 0);
LAB_007cfc5c:
    close(__fd);
  }
  return iVar3;
}

