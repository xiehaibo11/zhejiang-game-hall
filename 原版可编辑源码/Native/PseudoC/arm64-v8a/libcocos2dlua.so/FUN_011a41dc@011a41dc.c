
int FUN_011a41dc(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  switch(param_1) {
  case 0:
    goto switchD_011a4204_caseD_0;
  case 1:
    iVar1 = -3000;
switchD_011a4204_caseD_0:
    return iVar1;
  case 2:
    return -0xbb9;
  case 3:
    return -0xbba;
  case 4:
    return -0xbbc;
  case 5:
    return -0xbbd;
  case 6:
    return -0xbbe;
  case 7:
    return -0xbbf;
  case 8:
    return -0xbc0;
  case 9:
    return -0xbc2;
  case 10:
    return -0xbc3;
  case 0xb:
    piVar2 = (int *)__errno(0);
    return -*piVar2;
  case 0xc:
    return -0xbc5;
  case 0xd:
    return -0xbc6;
  case 0xe:
    return -0xbc1;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
}

