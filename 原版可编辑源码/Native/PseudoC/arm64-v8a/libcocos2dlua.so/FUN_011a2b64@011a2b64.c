
int FUN_011a2b64(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_34;
  
  iVar1 = socket(param_1,param_2 | 0x80800,param_3);
  if (iVar1 == -1) {
    piVar3 = (int *)__errno();
    if (*piVar3 == 0x16) {
      iVar2 = socket(param_1,param_2,param_3);
      if (iVar2 == -1) {
        iVar1 = -*piVar3;
      }
      else {
        local_34 = 1;
        do {
          iVar1 = ioctl(iVar2,0x5421,&local_34);
          if (iVar1 != -1) {
            if ((iVar1 == 0) || (iVar1 = *piVar3, iVar1 == 0)) goto LAB_011a2c2c;
            goto LAB_011a2c24;
          }
          iVar1 = *piVar3;
        } while (iVar1 == 4);
        if (iVar1 == 0) {
LAB_011a2c2c:
          do {
            iVar1 = ioctl(iVar2,0x5451);
            if (iVar1 != -1) {
              if (iVar1 == 0) {
                return iVar2;
              }
              iVar4 = *piVar3;
              break;
            }
            iVar4 = *piVar3;
          } while (iVar4 == 4);
          iVar1 = iVar4;
          if (iVar4 == 0) {
            return iVar2;
          }
        }
        else {
LAB_011a2c24:
          iVar4 = *piVar3;
        }
        iVar1 = -iVar1;
        iVar2 = close(iVar2);
        if (iVar2 == -1) {
          *piVar3 = iVar4;
        }
      }
    }
    else {
      iVar1 = -*piVar3;
    }
  }
  return iVar1;
}

