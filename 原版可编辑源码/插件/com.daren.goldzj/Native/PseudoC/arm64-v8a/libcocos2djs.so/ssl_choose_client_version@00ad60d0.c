
/* WARNING: Removing unreachable block (ram,0x00ad6114) */

ulong ssl_choose_client_version(int *param_1,int param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  if (**(int **)(param_1 + 2) == 0x10000) {
    piVar4 = &DAT_01c72708;
    iVar5 = 0x303;
  }
  else {
    if (**(int **)(param_1 + 2) != 0x1ffff) {
      uVar3 = 0;
      if (*param_1 != param_2) {
        uVar3 = 0x10a;
      }
      return (ulong)uVar3;
    }
    piVar4 = &DAT_01c72780;
    iVar5 = 0xfefd;
  }
  while (iVar5 != param_2) {
    iVar5 = piVar4[6];
    piVar4 = piVar4 + 6;
    if (iVar5 == 0) {
      return 0x102;
    }
  }
  if (*(code **)(piVar4 + 2) == (code *)0x0) {
    return 0x102;
  }
  uVar1 = (**(code **)(piVar4 + 2))();
  uVar2 = FUN_00ad5cf8(param_1,uVar1);
  if ((int)uVar2 == 0) {
    *(undefined8 *)(param_1 + 2) = uVar1;
    *param_1 = param_2;
    return uVar2;
  }
  return uVar2;
}

