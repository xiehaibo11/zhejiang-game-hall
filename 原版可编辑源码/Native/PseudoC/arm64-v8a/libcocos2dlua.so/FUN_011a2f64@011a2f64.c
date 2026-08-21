
int FUN_011a2f64(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_34;
  
LAB_011a2f84:
  do {
    if ((DAT_01793630 & 1) == 0) {
      iVar2 = FUN_011ae0bc(param_1,0,0,0x80800);
      if (iVar2 != -1) {
        return iVar2;
      }
      piVar4 = (int *)__errno();
      iVar2 = *piVar4;
      if (iVar2 == 4) goto LAB_011a2f84;
      if (iVar2 != 0x26) goto LAB_011a2ff8;
      DAT_01793630 = 1;
    }
    iVar2 = accept(param_1,(sockaddr *)0x0,(socklen_t *)0x0);
    if (iVar2 != -1) break;
    piVar4 = (int *)__errno();
    iVar2 = *piVar4;
    if (iVar2 != 4) {
LAB_011a2ff8:
      return -iVar2;
    }
  } while( true );
  while( true ) {
    piVar4 = (int *)__errno();
    iVar3 = *piVar4;
    if (iVar3 != 4) break;
    iVar3 = ioctl(iVar2,0x5451);
    if (iVar3 != -1) {
      if (iVar3 == 0) goto LAB_011a303c;
      piVar4 = (int *)__errno();
      iVar3 = *piVar4;
      break;
    }
  }
  if (iVar3 == 0) {
LAB_011a303c:
    local_34 = 1;
    do {
      iVar3 = ioctl(iVar2,0x5421,&local_34);
      if (iVar3 != -1) {
        if (iVar3 == 0) {
          return iVar2;
        }
        piVar4 = (int *)__errno();
        iVar3 = *piVar4;
        break;
      }
      piVar4 = (int *)__errno();
      iVar3 = *piVar4;
    } while (iVar3 == 4);
    if (iVar3 == 0) {
      return iVar2;
    }
  }
  puVar5 = (undefined4 *)__errno();
  uVar1 = *puVar5;
  iVar2 = close(iVar2);
  if (iVar2 == -1) {
    *puVar5 = uVar1;
  }
  return -iVar3;
}

