
undefined4 ssl_get_client_min_max_version(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  if (**(int **)(param_1 + 2) == 0x10000) {
    piVar5 = &DAT_016ad658;
  }
  else {
    if (**(int **)(param_1 + 2) != 0x1ffff) {
      iVar6 = *param_1;
                    /* catch() { ... } // from try @ 00ae50b4 with catch @ 00ae512c */
      *param_3 = iVar6;
      *param_2 = iVar6;
      return 0;
    }
    piVar5 = &DAT_016ad6d0;
  }
  iVar2 = *piVar5;
  iVar6 = 0;
  *param_2 = 0;
  if (iVar2 != 0) {
    piVar5 = piVar5 + 6;
    bVar1 = true;
LAB_00ae50b4:
    do {
                    /* try { // try from 00ae50b4 to 00be50bf has its CatchHandler @ 00ae512c */
      if (*(code **)(piVar5 + -4) == (code *)0x0) {
        iVar2 = *piVar5;
      }
      else {
        piVar3 = (int *)(**(code **)(piVar5 + -4))();
                    /* try { // try from 00ae50c0 to 00be5163 has its CatchHandler @ 00ae500c */
        iVar2 = FUN_00ae4bac(param_1,piVar3);
        if (iVar2 == 0) {
          if (bVar1) {
            iVar6 = *piVar3;
          }
          *param_2 = *piVar3;
          iVar2 = *piVar5;
          piVar5 = piVar5 + 6;
          bVar1 = false;
          if (iVar2 == 0) break;
          goto LAB_00ae50b4;
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

