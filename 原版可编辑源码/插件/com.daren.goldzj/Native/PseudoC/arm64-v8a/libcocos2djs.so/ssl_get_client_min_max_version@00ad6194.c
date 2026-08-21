
undefined4 ssl_get_client_min_max_version(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  if (**(int **)(param_1 + 2) == 0x10000) {
    piVar5 = &DAT_01c72708;
  }
  else {
    if (**(int **)(param_1 + 2) != 0x1ffff) {
      iVar6 = *param_1;
      *param_3 = iVar6;
      *param_2 = iVar6;
      return 0;
    }
    piVar5 = &DAT_01c72780;
  }
  iVar2 = *piVar5;
  iVar6 = 0;
  *param_2 = 0;
  if (iVar2 != 0) {
    piVar5 = piVar5 + 6;
    bVar1 = true;
LAB_00ad6200:
    do {
      if (*(code **)(piVar5 + -4) == (code *)0x0) {
        iVar2 = *piVar5;
      }
      else {
        piVar3 = (int *)(**(code **)(piVar5 + -4))();
        iVar2 = FUN_00ad5cf8(param_1,piVar3);
        if (iVar2 == 0) {
          if (bVar1) {
            iVar6 = *piVar3;
          }
          *param_2 = *piVar3;
          iVar2 = *piVar5;
          piVar5 = piVar5 + 6;
          bVar1 = false;
          if (iVar2 == 0) break;
          goto LAB_00ad6200;
        }
        iVar2 = *piVar5;
      }
      piVar5 = piVar5 + 6;
      bVar1 = true;
    } while (iVar2 != 0);
  }
  uVar4 = 0xbf;
  if (iVar6 != 0) {
    uVar4 = 0;
  }
  *param_3 = iVar6;
  return uVar4;
}

