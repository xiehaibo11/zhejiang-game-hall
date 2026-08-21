
void FUN_011a4544(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = getaddrinfo(*(char **)(param_1 + 0x38),*(char **)(param_1 + 0x40),
                      *(addrinfo **)(param_1 + 0x30),(addrinfo **)(param_1 + 0x48));
  uVar3 = 0;
  switch(iVar1) {
  case 0:
    goto switchD_011a4588_caseD_0;
  case 1:
    uVar3 = 0xfffff448;
switchD_011a4588_caseD_0:
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    return;
  case 2:
    *(undefined4 *)(param_1 + 0x50) = 0xfffff447;
    return;
  case 3:
    *(undefined4 *)(param_1 + 0x50) = 0xfffff446;
    return;
  case 4:
    *(undefined4 *)(param_1 + 0x50) = 0xfffff444;
    return;
  case 5:
    *(undefined4 *)(param_1 + 0x50) = 0xfffff443;
    return;
  case 6:
    *(undefined4 *)(param_1 + 0x50) = 0xfffff442;
    return;
  case 7:
    *(undefined4 *)(param_1 + 0x50) = 0xfffff441;
    return;
  case 8:
    *(undefined4 *)(param_1 + 0x50) = 0xfffff440;
    return;
  case 9:
    *(undefined4 *)(param_1 + 0x50) = 0xfffff43e;
    return;
  case 10:
    *(undefined4 *)(param_1 + 0x50) = 0xfffff43d;
    return;
  case 0xb:
    piVar2 = (int *)__errno();
    *(int *)(param_1 + 0x50) = -*piVar2;
    return;
  case 0xc:
    *(undefined4 *)(param_1 + 0x50) = 0xfffff43b;
    return;
  case 0xd:
    *(undefined4 *)(param_1 + 0x50) = 0xfffff43a;
    return;
  case 0xe:
    *(undefined4 *)(param_1 + 0x50) = 0xfffff43f;
    return;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
}

