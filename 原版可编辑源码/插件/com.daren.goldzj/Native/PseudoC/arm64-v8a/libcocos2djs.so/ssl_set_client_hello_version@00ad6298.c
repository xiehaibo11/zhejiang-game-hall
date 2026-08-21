
/* WARNING: Removing unreachable block (ram,0x00ad62dc) */

undefined8 ssl_set_client_hello_version(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  if (**(int **)(param_1 + 2) == 0x10000) {
    puVar4 = &DAT_01c72708;
  }
  else {
    if (**(int **)(param_1 + 2) != 0x1ffff) {
      iVar5 = *param_1;
      goto LAB_00ad6364;
    }
    puVar4 = &DAT_01c72780;
  }
  iVar5 = 0;
  bVar1 = true;
  piVar6 = puVar4 + 6;
  do {
    while (*(code **)(piVar6 + -4) != (code *)0x0) {
      piVar3 = (int *)(**(code **)(piVar6 + -4))();
      iVar2 = FUN_00ad5cf8(param_1,piVar3);
      if (iVar2 == 0) {
        if (bVar1) {
          iVar5 = *piVar3;
        }
        iVar2 = *piVar6;
        bVar1 = false;
      }
      else {
        bVar1 = true;
        iVar2 = *piVar6;
      }
      piVar6 = piVar6 + 6;
      if (iVar2 == 0) goto LAB_00ad6354;
    }
    bVar1 = true;
    iVar2 = *piVar6;
    piVar6 = piVar6 + 6;
  } while (iVar2 != 0);
LAB_00ad6354:
  if (iVar5 == 0) {
    return 0xbf;
  }
LAB_00ad6364:
  *param_1 = iVar5;
  param_1[0x81] = iVar5;
  return 0;
}

