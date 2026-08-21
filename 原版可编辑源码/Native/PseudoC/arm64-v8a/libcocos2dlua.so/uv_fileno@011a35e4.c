
undefined4 uv_fileno(long param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0xffffffea;
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 7:
  case 0xc:
  case 0xe:
    iVar2 = *(int *)(param_1 + 0xb8);
    break;
  case 8:
    iVar2 = *(int *)(param_1 + 0x98);
    if (iVar2 == -1) {
      return 0xfffffff7;
    }
    goto LAB_011a3620;
  default:
    goto switchD_011a3608_caseD_9;
  case 0xf:
    iVar2 = *(int *)(param_1 + 0xb0);
  }
  uVar1 = 0xfffffff7;
  if (iVar2 != -1) {
LAB_011a3620:
    uVar1 = 0xfffffff7;
    if ((*(uint *)(param_1 + 0x58) & 3) == 0) {
      uVar1 = 0;
      *param_2 = iVar2;
    }
  }
switchD_011a3608_caseD_9:
  return uVar1;
}

